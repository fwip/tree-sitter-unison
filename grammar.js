module.exports = grammar({
  name: 'unison',

  extras: $ => [/\\?\s/,
    $._newline,
    $.line_comment,
    $.eof_comment,
  ],

  word: $ => $.identifier,
  //keywords: ['=', ':', '->', "'", 'do', '|', '!', '`', 'if', 'then', 'else', 'forall', 'handle', 'unique', 'structural', 'where', 'use', '&&', '||', 'true', 'false', 'type', 'ability', 'alias', 'let', 'namespace', 'cases', 'match', 'with', 'termLink', 'typeLink'],

  externals: $ => [
    $._indent,
    $._dedent,
    $._newline,
    $.line_comment,
    $.eof_comment,
  ],

  rules: {
    source_file: $ => repeat($._declaration),

    _declaration: $ => choice(
      $.use_clause,
      $.term_declaration,
      $.type_declaration,
      // TODO: other kinds of definitions
    ),

    term_declaration: $ => seq(
      optional($.type_signature),
      $.term_definition,
    ),

    type_declaration: $ => seq(
      optional($.type_signature),
      $.type_definition
    ),

    use_clause: $ => prec.left(2, seq(
      'use',
      // TODO
      field("namespace", $.identifier),
      field("items", repeat(choice(
        $.identifier,
        $.operator))),
      $._newline,

      // repeat0(term)
    )),

    type_signature: $ => seq(
      $.identifier,
      ':',
      $.type,
    ),


    term_definition: $ => prec(4,
      seq(
        // TODO!
        field("name", $.identifier),
        field("parameter", repeat($.identifier)),
        '=',
        //$.identifier,
        $.block_expression,
      )
    ),

    type_definition: $ => seq(
      // TODO!
      'type_def',
    ),

    type: $ => seq(
      repeat(
        seq(
          $.identifier,
          '->',
        )
      ),
      $.identifier,
    ),


    _expression: $ => choice(
      $._indented_expression,
      $._paren_expression,
      $._literal,
      //$.match,
      $.operator_expression,
      //seq('let', $.block_expression),
      prec(-1, $.identifier),

    ),

    _indented_expression: $ => seq(
      $._indent, $._expression, $._dedent
    ),
    _paren_expression: $ => seq(
      "(", $._expression, ")"
    ),

    _literal: $ => choice(
      $.literal_number,
      $.literal_string,
      $.literal_list,
    )
    ,

    literal_number: _$ => /\d+/,
    literal_string: _$ => /".*"/,
    literal_list: $ => seq(
      '[',
      repeat(
        seq($._expression, ',')
      ),
      optional($._expression),
      ']',
    ),



    block_expression: $ => seq(
      repeat($.statement),
      $._expression,
    ),

    operator_expression: $ => prec.left(-5,
      seq(
        $._expression,
        $.operator,
        $._expression,
      )),

    _statement: $ => choice(
      $.term_declaration,
      $._expression,
    ),

    statement: $ => seq(
      field("lhs", repeat1($.identifier)),
      '=',
      field("rhs", $._expression),
    ),

    // TODO: Allow other numeric characters, double-check emoji and letter support
    // (\p{Nu} isn't supported)
    // TODO: does escaped quote work?
    // identifier: _$ => /(_|\p{Letter}|\p{Emoji})(\p{Letter}|\p{Emoji}|[-_!0-9]|\\')*/,

    // TODO: Support non-latin alphabets and emoji
    identifier: _$ => /(\p{Letter}|_)(\p{Letter}|\d|[-_!])*/,
    operator: _$ => /[-/!$%^&\*=+<>\.~\/|:]+/,

    comment: $ => choice(
      $.line_comment,
      $.eof_comment,
    ),

    // end_comment: _$ => prec(20, token(seq(
    //   "---",
    //   repeat1(prec(200, /.*/))))),
    // line_comment: $ => prec(10, token(seq(
    //   "--", // begin comment
    //   optional(/[^-].*/),
    // ))), // don't match "---"
  },
})

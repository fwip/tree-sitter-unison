[
 "="
 ":"
 "->"
 ;"do"
 ;"|"
 ;"!"
 ;"'"
 ;"if"
 ;"then"
 ;"else"
 ;"forall"
 ;"handle"
 ;"unique"
 ;"structural"
 ;"where"
 ;"use"
 ;"&&"
 ;"||"
 ;"true"
 ;"false"
 ;"type"
 ;"ability"
 ;"alias"
 "let"
 ;"namespace"
 ;"cases"
 ;"match"
 ;"with"
 ;"termLink"
 ;"typeLink"
] @keyword

(line_comment) @comment
(operator) @operator
(literal_string) @string
(literal_number) @number

(term_definition
  name: (identifier) @function
  parameter: (identifier) @parameter
  )


(type) @type

(use_clause
  "use" @include
  namespace: (identifier) @namespace
  )




; Put this allllll the way at the bottom
( operator_expression (identifier) @variable)
( block_expression (identifier) @variable)

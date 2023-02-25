#include <tree_sitter/parser.h>
#include <string.h>
#include <stdio.h>

// We use unsigned 32-bit integers for tracking the indent stack
// Could we use 16-bit or even 8-bit integers? Probably, but memory really
// isn't that expensive.
const size_t UINT32_SIZE = sizeof(uint32_t);

typedef enum {
  INDENT,
  DEDENT,
  NEWLINE,
  LINE_COMMENT,
  EOF_COMMENT,
} TokenType;


typedef struct {
  uint32_t length;
  uint32_t capacity;
  uint32_t *data;
} indent_stack;


uint32_t top(indent_stack *stack) {
  if (stack->length == 0) {
    return 0;
  }
  return stack->data[(stack->length)-1];
}
uint32_t pop(indent_stack *stack) {
  if (stack->length == 0) {
    return 0;
  }
  uint32_t item =  stack->data[(stack->length)-1];
  stack->length -= 1;
  return item;
}
void push(indent_stack *stack, uint32_t val) {
  // Double the size if necessary
  if (stack->length == stack->capacity) {
    uint32_t cur_capacity = stack->capacity;
    uint32_t new_capacity;
    if (cur_capacity == 0) {
      new_capacity = 16;
    } else {
      new_capacity = cur_capacity * 2;
    }
    stack->capacity = new_capacity;
    stack->data = realloc(stack->data, UINT32_SIZE * new_capacity);
  }
  stack->data[stack->length] = val;
  stack->length += 1;
  return;
}


/* This function should create your scanner object. It will only be called once
 * anytime your language is set on a parser. Often, you will want to allocate
 * memory on the heap and return a pointer to it. If your external scanner
 * doesn’t need to maintain any state, it’s ok to return NULL.
 */
void * tree_sitter_unison_external_scanner_create() {
  void *stack = calloc(sizeof(indent_stack), 1);
  return stack;
}

/* This function should free any memory used by your scanner. It is called once
 * when a parser is deleted or assigned a different language. It receives as an
 * argument the same pointer that was returned from the create function. If
 * your create function didn’t allocate any memory, this function can be a
 * noop.
 */
void tree_sitter_unison_external_scanner_destroy(void *payload) {
  indent_stack *stack = (indent_stack*)payload;
  if (stack->data != NULL) {
    free(stack->data);
  }
  free(stack);
}

/* This function should copy the complete state of your scanner into a given
 * byte buffer, and return the number of bytes written. The function is called
 * every time the external scanner successfully recognizes a token. It receives
 * a pointer to your scanner and a pointer to a buffer. The maximum number of
 * bytes that you can write is given by the
 * TREE_SITTER_SERIALIZATION_BUFFER_SIZE constant, defined in the
 * tree_sitter/parser.h header file.
 *
 * The data that this function writes will ultimately be stored in the syntax
 * tree so that the scanner can be restored to the right state when handling
 * edits or ambiguities. For your parser to work correctly, the serialize
 * function must store its entire state, and deserialize must restore the
 * entire state. For good performance, you should design your scanner so that
 * its state can be serialized as quickly and compactly as possible.
 */
unsigned tree_sitter_unison_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  indent_stack *stack = (indent_stack*)payload;
  // To serialize, we write the indent stack - payload->length (sizeof(uint32_t) bytes
  unsigned serialization_length = UINT32_SIZE * stack->length;
  if (serialization_length > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    // die?
    return 0;
  }
  memcpy(buffer, stack->data, stack->length * UINT32_SIZE);
  return serialization_length;
  // ...
}

/*
 * This function should restore the state of your scanner based the bytes that
 * were previously written by the serialize function. It is called with a
 * pointer to your scanner, a pointer to the buffer of bytes, and the number of
 * bytes that should be read. It is good practice to explicitly erase your
 * scanner state variables at the start of this function, before restoring
 * their values from the byte buffer.
 */
void tree_sitter_unison_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  indent_stack *stack = (indent_stack*)payload;

  if (stack->data != NULL) {
    free(stack->data);
  }
  unsigned stacklen = length / UINT32_SIZE;
  stack->length = stacklen;
  stack->capacity = stacklen;
  stack->data = calloc(UINT32_SIZE, stacklen);
  memcpy(stack->data, buffer, length);
}

/* 
 * This function is responsible for recognizing external tokens. It should
 * return true if a token was recognized, and false otherwise. It is called
 * with a “lexer” struct with the following fields:
 *
 * int32_t lookahead -
 *   The current next character in the input stream, represented as a 32-bit
 *   unicode code point.
 * TSSymbol result_symbol -
 *   The symbol that was recognized. Your scan function should assign to this
 *   field one of the values from the TokenType enum, described above.
 * void (*advance)(TSLexer *, bool skip) -
 *   A function for advancing to the next character. If you pass true for the
 *   second argument, the current character will be treated as whitespace;
 *   whitespace won’t be included in the text range associated with tokens
 *   emitted by the external scanner.
 * void (*mark_end)(TSLexer *) -
 *   A function for marking the end of the recognized token. This allows
 *   matching tokens that require multiple characters of lookahead. By default
 *   (if you don’t call mark_end), any character that you moved past using the
 *   advance function will be included in the size of the token. But once you
 *   call mark_end, then any later calls to advance will not increase the size
 *   of the returned token. You can call mark_end multiple times to increase
 *   the size of the token.
 * uint32_t (*get_column)(TSLexer *) -
 *   A function for querying the current column position of the lexer. It
 *   returns the number of codepoints since the start of the current line. The
 *   codepoint position is recalculated on every call to this function by
 *   reading from the start of the line.
 * bool (*is_at_included_range_start)(const TSLexer *) -
 *   A function for checking whether the parser has just skipped some
 *   characters in the document. When parsing an embedded document using the
 *   ts_parser_set_included_ranges function (described in the multi-language
 *   document section), your scanner may want to apply some special behavior
 *   when moving to a disjoint part of the document. For example, in EJS
 *   documents, the JavaScript parser uses this function to enable inserting
 *   automatic semicolon tokens in between the code directives, delimited by <%
 *   and %>.
 * bool (*eof)(const TSLexer *) -
 *   A function for determining whether the lexer is at the end of the file.
 *   The value of lookahead will be 0 at the end of a file, but this function
 *   should be used instead of checking for that value because the 0 or “NUL”
 *   value is also a valid character that could be present in the file being
 *   parsed.
 *
 * The third argument to the scan function is an array of booleans that
 * indicates which of your external tokens are currently expected by the
 * parser. You should only look for a given token if it is valid according to
 * this array. At the same time, you cannot backtrack, so you may need to
 * combine certain pieces of logic.
*/
bool tree_sitter_unison_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  indent_stack *stack = (indent_stack*)payload;
  if (lexer->lookahead == '\n') {
    if(valid_symbols[NEWLINE]) {
      lexer->advance(lexer, false);
      lexer->result_symbol = NEWLINE;
      return true;
    } else {
      return false;
    }
  }

  if (lexer->eof(lexer)) {
    // End of file, spin down our dedents
    if (valid_symbols[DEDENT]) {
      if (stack->length > 0)  {
        pop(stack);
        lexer->result_symbol = DEDENT;
        return true;
      }
    }
    return false;
  }

  // Check for comments
  if (lexer->lookahead == '-') {
    // might be a comment
    lexer->advance(lexer, false);
    if (lexer->lookahead == '-') {
      lexer->advance(lexer, false);
      // oh boy, it's a comment alright
      if (lexer->lookahead == '-') {
        // oh dang it's a whole EOF comment
        // read until end of file
        while(!lexer->eof(lexer)) {
          lexer->advance(lexer, false);
        }
        lexer->result_symbol = EOF_COMMENT;
        return true;
      }
      // Normal comment, read until end of line (or EOF)
      while(lexer->lookahead != '\n' && !lexer->eof(lexer)) {
        lexer->advance(lexer, false);
      }
      lexer->result_symbol = LINE_COMMENT;
      return true;
    }
    return false;
  }

  if (!(valid_symbols[DEDENT] || valid_symbols[INDENT])) {
    return false;
  }

  // Check if we're at the start of a newline
  if (lexer->get_column(lexer) == 0) {
    uint32_t indent_size = 0;
    lexer->mark_end(lexer);
    bool in_whitespace = true;
    while(in_whitespace) {
      switch (lexer->lookahead) {
        case ' ':
          indent_size+=1;
          break;
        case '\t':
          indent_size+=8;
          break;
        case '\n':
          // Found a newline, there's no indent/dedent on this line
          return false;
        default:
          in_whitespace = false;
      }
      lexer->advance(lexer, true);
    }
    //lexer->mark_end(lexer);
    uint32_t last_indent = top(stack);
    if (indent_size < last_indent) {
      if (valid_symbols[DEDENT]) {
        pop(stack);
        lexer->result_symbol = DEDENT;
        return true;
      }
    } else if (indent_size > top(stack)) {
      if (valid_symbols[INDENT]) {
        push(stack, indent_size);
        lexer->result_symbol = INDENT;
        return true;
      }

    }
  }

  return false;

  // ...
}

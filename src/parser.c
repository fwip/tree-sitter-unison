#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  anon_sym_use = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_type_def = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_literal_number = 9,
  sym_literal_string = 10,
  anon_sym_LBRACK = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACK = 13,
  sym_operator = 14,
  sym__indent = 15,
  sym__dedent = 16,
  sym__newline = 17,
  sym_line_comment = 18,
  sym_eof_comment = 19,
  sym_source_file = 20,
  sym__declaration = 21,
  sym_term_declaration = 22,
  sym_type_declaration = 23,
  sym_use_clause = 24,
  sym_type_signature = 25,
  sym_term_definition = 26,
  sym_type_definition = 27,
  sym_type = 28,
  sym__expression = 29,
  sym__indented_expression = 30,
  sym__paren_expression = 31,
  sym__literal = 32,
  sym_literal_list = 33,
  sym_block_expression = 34,
  sym_operator_expression = 35,
  sym_statement = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_use_clause_repeat1 = 38,
  aux_sym_term_definition_repeat1 = 39,
  aux_sym_type_repeat1 = 40,
  aux_sym_literal_list_repeat1 = 41,
  aux_sym_block_expression_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_use] = "use",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_type_def] = "type_def",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_literal_number] = "literal_number",
  [sym_literal_string] = "literal_string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_operator] = "operator",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_line_comment] = "line_comment",
  [sym_eof_comment] = "eof_comment",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_term_declaration] = "term_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_use_clause] = "use_clause",
  [sym_type_signature] = "type_signature",
  [sym_term_definition] = "term_definition",
  [sym_type_definition] = "type_definition",
  [sym_type] = "type",
  [sym__expression] = "_expression",
  [sym__indented_expression] = "_indented_expression",
  [sym__paren_expression] = "_paren_expression",
  [sym__literal] = "_literal",
  [sym_literal_list] = "literal_list",
  [sym_block_expression] = "block_expression",
  [sym_operator_expression] = "operator_expression",
  [sym_statement] = "statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_clause_repeat1] = "use_clause_repeat1",
  [aux_sym_term_definition_repeat1] = "term_definition_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_literal_list_repeat1] = "literal_list_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type_def] = anon_sym_type_def,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_literal_number] = sym_literal_number,
  [sym_literal_string] = sym_literal_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_operator] = sym_operator,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_line_comment] = sym_line_comment,
  [sym_eof_comment] = sym_eof_comment,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_term_declaration] = sym_term_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_use_clause] = sym_use_clause,
  [sym_type_signature] = sym_type_signature,
  [sym_term_definition] = sym_term_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_type] = sym_type,
  [sym__expression] = sym__expression,
  [sym__indented_expression] = sym__indented_expression,
  [sym__paren_expression] = sym__paren_expression,
  [sym__literal] = sym__literal,
  [sym_literal_list] = sym_literal_list,
  [sym_block_expression] = sym_block_expression,
  [sym_operator_expression] = sym_operator_expression,
  [sym_statement] = sym_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_use_clause_repeat1] = aux_sym_use_clause_repeat1,
  [aux_sym_term_definition_repeat1] = aux_sym_term_definition_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_literal_list_repeat1] = aux_sym_literal_list_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_eof_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_term_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_use_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_term_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__indented_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_items = 1,
  field_lhs = 2,
  field_name = 3,
  field_namespace = 4,
  field_parameter = 5,
  field_rhs = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_items] = "items",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_parameter] = "parameter",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_namespace, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_items, 2},
    {field_namespace, 1},
  [4] =
    {field_name, 0},
    {field_parameter, 1},
  [6] =
    {field_lhs, 0},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 5,
  [9] = 6,
  [10] = 5,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 17,
  [20] = 20,
  [21] = 16,
  [22] = 12,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 27,
  [33] = 28,
  [34] = 29,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 26,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 53,
  [67] = 67,
  [68] = 68,
  [69] = 30,
  [70] = 26,
  [71] = 25,
  [72] = 27,
  [73] = 73,
  [74] = 74,
  [75] = 28,
  [76] = 29,
  [77] = 77,
  [78] = 78,
  [79] = 73,
  [80] = 74,
  [81] = 81,
  [82] = 74,
  [83] = 73,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'A'
                ? (c < '-'
                  ? c == '!'
                  : (c <= '-' || (c >= '0' && c <= '9')))
                : (c <= 'Z' || (c < 'a'
                  ? c == '_'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_operator_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= ':' || (c < '|'
      ? (c < '^'
        ? (c >= '<' && c <= '>')
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_operator_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= ':' || (c < '|'
      ? (c < '^'
        ? (c >= '<' && c <= '=')
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == ']') ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\\') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 5:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(26);
      END_STATE();
    case 6:
      if (eof) ADVANCE(10);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '\\') SKIP(9)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_operator_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_literal_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_literal_string);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(16);
      if (sym_operator_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_operator);
      if (sym_operator_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 2:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_type_def);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 5, .external_lex_state = 2},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 5, .external_lex_state = 2},
  [28] = {.lex_state = 5, .external_lex_state = 2},
  [29] = {.lex_state = 5, .external_lex_state = 2},
  [30] = {.lex_state = 5, .external_lex_state = 2},
  [31] = {.lex_state = 5, .external_lex_state = 3},
  [32] = {.lex_state = 5, .external_lex_state = 3},
  [33] = {.lex_state = 5, .external_lex_state = 3},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 5, .external_lex_state = 3},
  [36] = {.lex_state = 5, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 5, .external_lex_state = 3},
  [39] = {.lex_state = 6, .external_lex_state = 2},
  [40] = {.lex_state = 5, .external_lex_state = 2},
  [41] = {.lex_state = 5, .external_lex_state = 2},
  [42] = {.lex_state = 2, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 5, .external_lex_state = 2},
  [54] = {.lex_state = 5, .external_lex_state = 2},
  [55] = {.lex_state = 2, .external_lex_state = 2},
  [56] = {.lex_state = 2, .external_lex_state = 2},
  [57] = {.lex_state = 5, .external_lex_state = 2},
  [58] = {.lex_state = 5, .external_lex_state = 2},
  [59] = {.lex_state = 5, .external_lex_state = 2},
  [60] = {.lex_state = 5, .external_lex_state = 2},
  [61] = {.lex_state = 5, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 5, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 5, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 5, .external_lex_state = 4},
  [70] = {.lex_state = 5, .external_lex_state = 4},
  [71] = {.lex_state = 5, .external_lex_state = 4},
  [72] = {.lex_state = 5, .external_lex_state = 4},
  [73] = {.lex_state = 5, .external_lex_state = 4},
  [74] = {.lex_state = 5, .external_lex_state = 2},
  [75] = {.lex_state = 5, .external_lex_state = 4},
  [76] = {.lex_state = 5, .external_lex_state = 4},
  [77] = {.lex_state = 5, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 5, .external_lex_state = 4},
  [80] = {.lex_state = 5, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 5, .external_lex_state = 2},
  [83] = {.lex_state = 5, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 2, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token_line_comment = 3,
  ts_external_token_eof_comment = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_line_comment] = sym_line_comment,
  [ts_external_token_eof_comment] = sym_eof_comment,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_eof_comment] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_eof_comment] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_eof_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_eof_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type_def] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_literal_number] = ACTIONS(1),
    [sym_literal_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_eof_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(88),
    [sym__declaration] = STATE(13),
    [sym_term_declaration] = STATE(13),
    [sym_type_declaration] = STATE(13),
    [sym_use_clause] = STATE(13),
    [sym_type_signature] = STATE(52),
    [sym_term_definition] = STATE(46),
    [sym_type_definition] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_type_def] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_eof_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    STATE(51), 1,
      sym_block_expression,
    STATE(68), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(17), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_expression_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    STATE(41), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [40] = 10,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    STATE(47), 1,
      sym_block_expression,
    STATE(68), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(17), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_expression_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    STATE(41), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [80] = 9,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    STATE(68), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(23), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(24), 2,
      sym_statement,
      aux_sym_block_expression_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    STATE(40), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [117] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(25), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(53), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [151] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(29), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(60), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [185] = 8,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      sym__indent,
    STATE(7), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(33), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(77), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [219] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(47), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(66), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [253] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(51), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(59), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [287] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(55), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(57), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [321] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(59), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(61), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [355] = 6,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(63), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(70), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [383] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_type_def,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_term_definition,
    STATE(49), 1,
      sym_type_definition,
    STATE(52), 1,
      sym_type_signature,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    STATE(15), 5,
      sym__declaration,
      sym_term_declaration,
      sym_type_declaration,
      sym_use_clause,
      aux_sym_source_file_repeat1,
  [417] = 6,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(73), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(38), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [445] = 9,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_use,
    ACTIONS(89), 1,
      anon_sym_type_def,
    STATE(46), 1,
      sym_term_definition,
    STATE(49), 1,
      sym_type_definition,
    STATE(52), 1,
      sym_type_signature,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    STATE(15), 5,
      sym__declaration,
      sym_term_declaration,
      sym_type_declaration,
      sym_use_clause,
      aux_sym_source_file_repeat1,
  [479] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(92), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(80), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [507] = 6,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(94), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(83), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [535] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(96), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(82), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [563] = 6,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(98), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(73), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [591] = 6,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(100), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(36), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [619] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(102), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(74), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [647] = 6,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(104), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(26), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [675] = 6,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym__indent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(106), 3,
      sym_literal_number,
      sym_literal_string,
      sym_identifier,
    STATE(79), 6,
      sym__expression,
      sym__indented_expression,
      sym__paren_expression,
      sym__literal,
      sym_literal_list,
      sym_operator_expression,
  [703] = 5,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_term_definition_repeat1,
    STATE(24), 2,
      sym_statement,
      aux_sym_block_expression_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(111), 5,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
  [726] = 3,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(115), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [744] = 3,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(119), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [762] = 3,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(123), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [780] = 3,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(127), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [798] = 3,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(131), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [816] = 3,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(135), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [834] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(133), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [849] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(121), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [864] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(125), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [879] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(129), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [894] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(113), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [909] = 3,
    ACTIONS(139), 1,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(137), 6,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
  [926] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(42), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [941] = 2,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(117), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [956] = 4,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(145), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_operator,
  [974] = 4,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(149), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [991] = 4,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(155), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1008] = 5,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(161), 1,
      anon_sym_EQ,
    STATE(65), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1026] = 3,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(165), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1040] = 3,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(169), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1054] = 3,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(173), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1068] = 3,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(177), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1082] = 3,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(181), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1096] = 3,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(185), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1110] = 3,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(189), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1124] = 3,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(193), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1138] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(197), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1152] = 5,
    ACTIONS(11), 1,
      anon_sym_type_def,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(45), 1,
      sym_term_definition,
    STATE(50), 1,
      sym_type_definition,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1170] = 4,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1185] = 4,
    ACTIONS(207), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_use_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(205), 2,
      sym_identifier,
      sym_operator,
  [1200] = 3,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    ACTIONS(209), 2,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1213] = 3,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    ACTIONS(213), 2,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1226] = 4,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1241] = 4,
    ACTIONS(219), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym_use_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(217), 2,
      sym_identifier,
      sym_operator,
  [1256] = 4,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1271] = 4,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1286] = 4,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1301] = 4,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(78), 1,
      sym_type,
    STATE(81), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1316] = 4,
    ACTIONS(226), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym_use_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_eof_comment,
    ACTIONS(223), 2,
      sym_identifier,
      sym_operator,
  [1331] = 4,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_EQ,
    STATE(65), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1346] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_EQ,
    STATE(67), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1361] = 4,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1376] = 4,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_EQ,
    STATE(67), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1391] = 4,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_EQ,
    STATE(67), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1406] = 2,
    ACTIONS(133), 2,
      sym__dedent,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1416] = 2,
    ACTIONS(117), 2,
      sym__dedent,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1426] = 2,
    ACTIONS(113), 2,
      sym__dedent,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1436] = 2,
    ACTIONS(121), 2,
      sym__dedent,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1446] = 3,
    ACTIONS(241), 1,
      sym_operator,
    ACTIONS(243), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1458] = 3,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1470] = 2,
    ACTIONS(125), 2,
      sym__dedent,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1480] = 2,
    ACTIONS(129), 2,
      sym__dedent,
      sym_operator,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1490] = 3,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1502] = 2,
    ACTIONS(247), 2,
      anon_sym_type_def,
      sym_identifier,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1512] = 3,
    ACTIONS(241), 1,
      sym_operator,
    ACTIONS(249), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1524] = 3,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1536] = 3,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1548] = 3,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1560] = 3,
    ACTIONS(241), 1,
      sym_operator,
    ACTIONS(257), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1572] = 3,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1584] = 2,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1593] = 2,
    ACTIONS(211), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1602] = 2,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
  [1611] = 2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym__newline,
      sym_line_comment,
      sym_eof_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 383,
  [SMALL_STATE(14)] = 417,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 479,
  [SMALL_STATE(17)] = 507,
  [SMALL_STATE(18)] = 535,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 591,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 703,
  [SMALL_STATE(25)] = 726,
  [SMALL_STATE(26)] = 744,
  [SMALL_STATE(27)] = 762,
  [SMALL_STATE(28)] = 780,
  [SMALL_STATE(29)] = 798,
  [SMALL_STATE(30)] = 816,
  [SMALL_STATE(31)] = 834,
  [SMALL_STATE(32)] = 849,
  [SMALL_STATE(33)] = 864,
  [SMALL_STATE(34)] = 879,
  [SMALL_STATE(35)] = 894,
  [SMALL_STATE(36)] = 909,
  [SMALL_STATE(37)] = 926,
  [SMALL_STATE(38)] = 941,
  [SMALL_STATE(39)] = 956,
  [SMALL_STATE(40)] = 974,
  [SMALL_STATE(41)] = 991,
  [SMALL_STATE(42)] = 1008,
  [SMALL_STATE(43)] = 1026,
  [SMALL_STATE(44)] = 1040,
  [SMALL_STATE(45)] = 1054,
  [SMALL_STATE(46)] = 1068,
  [SMALL_STATE(47)] = 1082,
  [SMALL_STATE(48)] = 1096,
  [SMALL_STATE(49)] = 1110,
  [SMALL_STATE(50)] = 1124,
  [SMALL_STATE(51)] = 1138,
  [SMALL_STATE(52)] = 1152,
  [SMALL_STATE(53)] = 1170,
  [SMALL_STATE(54)] = 1185,
  [SMALL_STATE(55)] = 1200,
  [SMALL_STATE(56)] = 1213,
  [SMALL_STATE(57)] = 1226,
  [SMALL_STATE(58)] = 1241,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1271,
  [SMALL_STATE(61)] = 1286,
  [SMALL_STATE(62)] = 1301,
  [SMALL_STATE(63)] = 1316,
  [SMALL_STATE(64)] = 1331,
  [SMALL_STATE(65)] = 1346,
  [SMALL_STATE(66)] = 1361,
  [SMALL_STATE(67)] = 1376,
  [SMALL_STATE(68)] = 1391,
  [SMALL_STATE(69)] = 1406,
  [SMALL_STATE(70)] = 1416,
  [SMALL_STATE(71)] = 1426,
  [SMALL_STATE(72)] = 1436,
  [SMALL_STATE(73)] = 1446,
  [SMALL_STATE(74)] = 1458,
  [SMALL_STATE(75)] = 1470,
  [SMALL_STATE(76)] = 1480,
  [SMALL_STATE(77)] = 1490,
  [SMALL_STATE(78)] = 1502,
  [SMALL_STATE(79)] = 1512,
  [SMALL_STATE(80)] = 1524,
  [SMALL_STATE(81)] = 1536,
  [SMALL_STATE(82)] = 1548,
  [SMALL_STATE(83)] = 1560,
  [SMALL_STATE(84)] = 1572,
  [SMALL_STATE(85)] = 1584,
  [SMALL_STATE(86)] = 1593,
  [SMALL_STATE(87)] = 1602,
  [SMALL_STATE(88)] = 1611,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(77),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(68),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__indented_expression, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indented_expression, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_definition_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_clause, 3, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 4, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_clause, 4, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_clause_repeat1, 2), SHIFT_REPEAT(63),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_clause_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(67),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(86),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_unison_external_scanner_create(void);
void tree_sitter_unison_external_scanner_destroy(void *);
bool tree_sitter_unison_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_unison_external_scanner_serialize(void *, char *);
void tree_sitter_unison_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_unison(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_unison_external_scanner_create,
      tree_sitter_unison_external_scanner_destroy,
      tree_sitter_unison_external_scanner_scan,
      tree_sitter_unison_external_scanner_serialize,
      tree_sitter_unison_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

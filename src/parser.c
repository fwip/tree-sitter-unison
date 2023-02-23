#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_use = 2,
  anon_sym_LF = 3,
  anon_sym_COLON = 4,
  anon_sym_EQ = 5,
  anon_sym_type_def = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_let = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_literal_number = 11,
  sym_literal_string = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  sym_operator = 16,
  aux_sym_end_comment_token1 = 17,
  aux_sym_line_comment_token1 = 18,
  sym_source_file = 19,
  sym__declaration = 20,
  sym_term_declaration = 21,
  sym_type_declaration = 22,
  sym_use_clause = 23,
  sym_type_signature = 24,
  sym_term_definition = 25,
  sym_type_definition = 26,
  sym_type = 27,
  sym__expression = 28,
  sym__literal = 29,
  sym_literal_list = 30,
  sym_block_expression = 31,
  sym_operator_expression = 32,
  sym_statement = 33,
  sym_line_comment = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_use_clause_repeat1 = 36,
  aux_sym_term_definition_repeat1 = 37,
  aux_sym_type_repeat1 = 38,
  aux_sym_literal_list_repeat1 = 39,
  aux_sym_block_expression_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_use] = "use",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_type_def] = "type_def",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_let] = "let",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_literal_number] = "literal_number",
  [sym_literal_string] = "literal_string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_operator] = "operator",
  [aux_sym_end_comment_token1] = "end_comment_token1",
  [aux_sym_line_comment_token1] = "line_comment_token1",
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
  [sym__literal] = "_literal",
  [sym_literal_list] = "literal_list",
  [sym_block_expression] = "block_expression",
  [sym_operator_expression] = "operator_expression",
  [sym_statement] = "statement",
  [sym_line_comment] = "line_comment",
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
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type_def] = anon_sym_type_def,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_literal_number] = sym_literal_number,
  [sym_literal_string] = sym_literal_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_operator] = sym_operator,
  [aux_sym_end_comment_token1] = aux_sym_end_comment_token1,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
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
  [sym__literal] = sym__literal,
  [sym_literal_list] = sym_literal_list,
  [sym_block_expression] = sym_block_expression,
  [sym_operator_expression] = sym_operator_expression,
  [sym_statement] = sym_statement,
  [sym_line_comment] = sym_line_comment,
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
  [anon_sym_LF] = {
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
  [anon_sym_let] = {
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
  [aux_sym_end_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_line_comment] = {
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
  field_name = 2,
  field_namespace = 3,
  field_parameter = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_items] = "items",
  [field_name] = "name",
  [field_namespace] = "namespace",
  [field_parameter] = "parameter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
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
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 2,
  [8] = 8,
  [9] = 8,
  [10] = 8,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 14,
  [19] = 15,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 22,
  [25] = 22,
  [26] = 26,
  [27] = 21,
  [28] = 21,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 38,
  [45] = 36,
  [46] = 46,
  [47] = 41,
  [48] = 30,
  [49] = 33,
  [50] = 34,
  [51] = 40,
  [52] = 39,
  [53] = 42,
  [54] = 35,
  [55] = 37,
  [56] = 31,
  [57] = 30,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 30,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 34,
  [76] = 76,
  [77] = 36,
  [78] = 35,
  [79] = 79,
  [80] = 33,
  [81] = 81,
  [82] = 82,
  [83] = 38,
  [84] = 39,
  [85] = 85,
  [86] = 40,
  [87] = 41,
  [88] = 31,
  [89] = 89,
  [90] = 42,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 37,
  [95] = 91,
  [96] = 96,
  [97] = 92,
  [98] = 91,
  [99] = 92,
  [100] = 100,
  [101] = 37,
  [102] = 102,
  [103] = 103,
  [104] = 100,
  [105] = 100,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 31,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(28);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(32);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(32);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(32);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(28);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 9:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == ']') ADVANCE(28);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 10:
      if (eof) ADVANCE(14);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(32);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(32);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(32);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_literal_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_literal_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_literal_string);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(33);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_end_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(36);
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
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(4);
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
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_type_def);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type_def] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_literal_number] = ACTIONS(1),
    [sym_literal_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_end_comment_token1] = ACTIONS(1),
    [aux_sym_line_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(111),
    [sym__declaration] = STATE(65),
    [sym_term_declaration] = STATE(64),
    [sym_type_declaration] = STATE(64),
    [sym_use_clause] = STATE(64),
    [sym_type_signature] = STATE(62),
    [sym_term_definition] = STATE(58),
    [sym_type_definition] = STATE(60),
    [sym_line_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_type_def] = ACTIONS(11),
    [aux_sym_line_comment_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_line_comment,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(51), 1,
      sym_block_expression,
    STATE(53), 1,
      sym_literal_list,
    STATE(56), 1,
      sym__expression,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [45] = 14,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_line_comment,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(53), 1,
      sym_literal_list,
    STATE(56), 1,
      sym__expression,
    STATE(59), 1,
      sym_block_expression,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [90] = 14,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_line_comment,
    STATE(8), 1,
      aux_sym_block_expression_repeat1,
    STATE(31), 1,
      sym__expression,
    STATE(40), 1,
      sym_block_expression,
    STATE(42), 1,
      sym_literal_list,
    STATE(46), 1,
      sym_statement,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(31), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(41), 2,
      sym__literal,
      sym_operator_expression,
  [135] = 14,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_line_comment,
    STATE(11), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    STATE(86), 1,
      sym_block_expression,
    STATE(88), 1,
      sym__expression,
    STATE(90), 1,
      sym_literal_list,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [180] = 14,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_line_comment,
    STATE(9), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(53), 1,
      sym_literal_list,
    STATE(56), 1,
      sym__expression,
    STATE(71), 1,
      sym_block_expression,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [225] = 14,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_let,
    STATE(7), 1,
      sym_line_comment,
    STATE(10), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(51), 1,
      sym_block_expression,
    STATE(53), 1,
      sym_literal_list,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    STATE(109), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [270] = 13,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_line_comment,
    STATE(29), 1,
      aux_sym_block_expression_repeat1,
    STATE(37), 1,
      sym__expression,
    STATE(42), 1,
      sym_literal_list,
    STATE(46), 1,
      sym_statement,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(31), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(41), 2,
      sym__literal,
      sym_operator_expression,
  [312] = 13,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_line_comment,
    STATE(29), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(53), 1,
      sym_literal_list,
    STATE(55), 1,
      sym__expression,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [354] = 13,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_let,
    STATE(10), 1,
      sym_line_comment,
    STATE(29), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(53), 1,
      sym_literal_list,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    STATE(101), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [396] = 13,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_line_comment,
    STATE(29), 1,
      aux_sym_block_expression_repeat1,
    STATE(46), 1,
      sym_statement,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    STATE(90), 1,
      sym_literal_list,
    STATE(94), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [438] = 11,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_use,
    ACTIONS(57), 1,
      anon_sym_type_def,
    STATE(58), 1,
      sym_term_definition,
    STATE(60), 1,
      sym_type_definition,
    STATE(62), 1,
      sym_type_signature,
    STATE(65), 1,
      sym__declaration,
    STATE(12), 2,
      sym_line_comment,
      aux_sym_source_file_repeat1,
    STATE(64), 3,
      sym_term_declaration,
      sym_type_declaration,
      sym_use_clause,
  [475] = 12,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_type_def,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 1,
      sym_line_comment,
    STATE(58), 1,
      sym_term_definition,
    STATE(60), 1,
      sym_type_definition,
    STATE(62), 1,
      sym_type_signature,
    STATE(65), 1,
      sym__declaration,
    STATE(64), 3,
      sym_term_declaration,
      sym_type_declaration,
      sym_use_clause,
  [514] = 12,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_line_comment,
    STATE(15), 1,
      aux_sym_literal_list_repeat1,
    STATE(90), 1,
      sym_literal_list,
    STATE(99), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [553] = 12,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_line_comment,
    STATE(17), 1,
      aux_sym_literal_list_repeat1,
    STATE(90), 1,
      sym_literal_list,
    STATE(95), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [592] = 12,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_line_comment,
    STATE(20), 1,
      aux_sym_literal_list_repeat1,
    STATE(90), 1,
      sym_literal_list,
    STATE(97), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [631] = 11,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_let,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_literal_list,
    STATE(107), 1,
      sym__expression,
    ACTIONS(79), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(17), 2,
      sym_line_comment,
      aux_sym_literal_list_repeat1,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [668] = 12,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_line_comment,
    STATE(19), 1,
      aux_sym_literal_list_repeat1,
    STATE(90), 1,
      sym_literal_list,
    STATE(92), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [707] = 12,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_literal_list_repeat1,
    STATE(19), 1,
      sym_line_comment,
    STATE(90), 1,
      sym_literal_list,
    STATE(91), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [746] = 12,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_literal_list_repeat1,
    STATE(20), 1,
      sym_line_comment,
    STATE(90), 1,
      sym_literal_list,
    STATE(98), 1,
      sym__expression,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [785] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(21), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_literal_list,
    STATE(105), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [818] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(22), 1,
      sym_line_comment,
    STATE(34), 1,
      sym__expression,
    STATE(42), 1,
      sym_literal_list,
    ACTIONS(31), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(41), 2,
      sym__literal,
      sym_operator_expression,
  [851] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(23), 1,
      sym_line_comment,
    STATE(75), 1,
      sym__expression,
    STATE(90), 1,
      sym_literal_list,
    ACTIONS(41), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(87), 2,
      sym__literal,
      sym_operator_expression,
  [884] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(24), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__expression,
    STATE(53), 1,
      sym_literal_list,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [917] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(25), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__expression,
    STATE(53), 1,
      sym_literal_list,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [950] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(26), 1,
      sym_line_comment,
    STATE(42), 1,
      sym_literal_list,
    STATE(43), 1,
      sym__expression,
    ACTIONS(31), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(41), 2,
      sym__literal,
      sym_operator_expression,
  [983] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(27), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_literal_list,
    STATE(100), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [1016] = 10,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(28), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_literal_list,
    STATE(104), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_literal_number,
      sym_literal_string,
    STATE(47), 2,
      sym__literal,
      sym_operator_expression,
  [1049] = 7,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_let,
    STATE(46), 1,
      sym_statement,
    STATE(81), 1,
      aux_sym_term_definition_repeat1,
    STATE(29), 2,
      sym_line_comment,
      aux_sym_block_expression_repeat1,
    ACTIONS(102), 4,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
  [1075] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(106), 6,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_operator,
  [1094] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(110), 1,
      sym_operator,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(108), 6,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
  [1112] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(112), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(85), 5,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1130] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(114), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1146] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(116), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1162] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(118), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1178] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(120), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1194] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(110), 1,
      sym_operator,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(122), 6,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
  [1212] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(124), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1228] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(106), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1244] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(126), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1260] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(106), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1276] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(128), 7,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
      sym_operator,
  [1292] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(110), 1,
      sym_operator,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(130), 6,
      anon_sym_let,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
      sym_identifier,
  [1310] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(124), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1327] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(120), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1344] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(136), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(138), 4,
      anon_sym_LPAREN,
      sym_literal_number,
      sym_literal_string,
      anon_sym_LBRACK,
  [1361] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(106), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1378] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(106), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_operator,
  [1397] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(114), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1414] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_line_comment,
    ACTIONS(116), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1431] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(126), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1448] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(106), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1465] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(128), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1482] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_line_comment,
    ACTIONS(118), 5,
      anon_sym_use,
      anon_sym_type_def,
      anon_sym_RPAREN,
      sym_identifier,
      sym_operator,
  [1499] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      sym_operator,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(122), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1517] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(154), 1,
      sym_operator,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(108), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1535] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1551] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_line_comment,
    ACTIONS(160), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1566] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_line_comment,
    ACTIONS(164), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1581] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_line_comment,
    ACTIONS(168), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1596] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_line_comment,
    ACTIONS(172), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1611] = 6,
    ACTIONS(11), 1,
      anon_sym_type_def,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(61), 1,
      sym_type_definition,
    STATE(62), 1,
      sym_line_comment,
    STATE(74), 1,
      sym_term_definition,
  [1630] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym_line_comment,
    STATE(66), 1,
      aux_sym_use_clause_repeat1,
    ACTIONS(176), 2,
      sym_identifier,
      sym_operator,
  [1647] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_line_comment,
    ACTIONS(182), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1662] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_line_comment,
    ACTIONS(186), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1677] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym_line_comment,
    STATE(70), 1,
      aux_sym_use_clause_repeat1,
    ACTIONS(176), 2,
      sym_identifier,
      sym_operator,
  [1694] = 6,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_EQ,
    STATE(67), 1,
      sym_line_comment,
    STATE(89), 1,
      aux_sym_term_definition_repeat1,
  [1713] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_line_comment,
    ACTIONS(198), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1728] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(69), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      sym_operator,
  [1743] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(200), 2,
      sym_identifier,
      sym_operator,
    STATE(70), 2,
      sym_line_comment,
      aux_sym_use_clause_repeat1,
  [1758] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(207), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1773] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_line_comment,
    ACTIONS(211), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1788] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_line_comment,
    ACTIONS(215), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1803] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(219), 3,
      anon_sym_use,
      anon_sym_type_def,
      sym_identifier,
  [1818] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(116), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1830] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(223), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(221), 2,
      anon_sym_type_def,
      sym_identifier,
  [1844] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(77), 1,
      sym_line_comment,
    ACTIONS(120), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1856] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1868] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_EQ,
    STATE(79), 2,
      sym_line_comment,
      aux_sym_term_definition_repeat1,
  [1882] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(114), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1894] = 5,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym_term_definition_repeat1,
    STATE(81), 1,
      sym_line_comment,
  [1910] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(223), 1,
      anon_sym_DASH_GT,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(232), 2,
      anon_sym_type_def,
      sym_identifier,
  [1924] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(124), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1936] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1948] = 5,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_EQ,
    STATE(85), 1,
      sym_line_comment,
    STATE(89), 1,
      aux_sym_term_definition_repeat1,
  [1964] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1976] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [1988] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2002] = 5,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_EQ,
    STATE(79), 1,
      aux_sym_term_definition_repeat1,
    STATE(89), 1,
      sym_line_comment,
  [2018] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(128), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_operator,
  [2030] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_line_comment,
  [2046] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_line_comment,
  [2062] = 3,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_LF,
      sym_identifier,
      sym_operator,
  [2074] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2088] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_line_comment,
  [2104] = 5,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(96), 1,
      sym_line_comment,
    STATE(103), 1,
      sym_type,
    STATE(106), 1,
      aux_sym_type_repeat1,
  [2120] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      sym_line_comment,
  [2136] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_line_comment,
  [2152] = 5,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym_line_comment,
  [2168] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      sym_operator,
    STATE(100), 1,
      sym_line_comment,
  [2181] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      sym_operator,
    STATE(101), 1,
      sym_line_comment,
  [2194] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(260), 2,
      anon_sym_EQ,
      sym_identifier,
  [2205] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(262), 2,
      anon_sym_type_def,
      sym_identifier,
  [2216] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(258), 1,
      sym_operator,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_line_comment,
  [2229] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(258), 1,
      sym_operator,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_line_comment,
  [2242] = 4,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(106), 1,
      sym_line_comment,
    STATE(108), 1,
      aux_sym_type_repeat1,
  [2255] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(234), 1,
      sym_operator,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      sym_line_comment,
  [2268] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(108), 2,
      sym_line_comment,
      aux_sym_type_repeat1,
  [2279] = 4,
    ACTIONS(3), 1,
      aux_sym_line_comment_token1,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      sym_operator,
    STATE(109), 1,
      sym_line_comment,
  [2292] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(223), 1,
      anon_sym_DASH_GT,
    STATE(110), 1,
      sym_line_comment,
  [2302] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_line_comment,
  [2312] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(112), 1,
      sym_line_comment,
  [2322] = 3,
    ACTIONS(13), 1,
      aux_sym_line_comment_token1,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(113), 1,
      sym_line_comment,
  [2332] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 312,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 514,
  [SMALL_STATE(15)] = 553,
  [SMALL_STATE(16)] = 592,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 707,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 785,
  [SMALL_STATE(22)] = 818,
  [SMALL_STATE(23)] = 851,
  [SMALL_STATE(24)] = 884,
  [SMALL_STATE(25)] = 917,
  [SMALL_STATE(26)] = 950,
  [SMALL_STATE(27)] = 983,
  [SMALL_STATE(28)] = 1016,
  [SMALL_STATE(29)] = 1049,
  [SMALL_STATE(30)] = 1075,
  [SMALL_STATE(31)] = 1094,
  [SMALL_STATE(32)] = 1112,
  [SMALL_STATE(33)] = 1130,
  [SMALL_STATE(34)] = 1146,
  [SMALL_STATE(35)] = 1162,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1194,
  [SMALL_STATE(38)] = 1212,
  [SMALL_STATE(39)] = 1228,
  [SMALL_STATE(40)] = 1244,
  [SMALL_STATE(41)] = 1260,
  [SMALL_STATE(42)] = 1276,
  [SMALL_STATE(43)] = 1292,
  [SMALL_STATE(44)] = 1310,
  [SMALL_STATE(45)] = 1327,
  [SMALL_STATE(46)] = 1344,
  [SMALL_STATE(47)] = 1361,
  [SMALL_STATE(48)] = 1378,
  [SMALL_STATE(49)] = 1397,
  [SMALL_STATE(50)] = 1414,
  [SMALL_STATE(51)] = 1431,
  [SMALL_STATE(52)] = 1448,
  [SMALL_STATE(53)] = 1465,
  [SMALL_STATE(54)] = 1482,
  [SMALL_STATE(55)] = 1499,
  [SMALL_STATE(56)] = 1517,
  [SMALL_STATE(57)] = 1535,
  [SMALL_STATE(58)] = 1551,
  [SMALL_STATE(59)] = 1566,
  [SMALL_STATE(60)] = 1581,
  [SMALL_STATE(61)] = 1596,
  [SMALL_STATE(62)] = 1611,
  [SMALL_STATE(63)] = 1630,
  [SMALL_STATE(64)] = 1647,
  [SMALL_STATE(65)] = 1662,
  [SMALL_STATE(66)] = 1677,
  [SMALL_STATE(67)] = 1694,
  [SMALL_STATE(68)] = 1713,
  [SMALL_STATE(69)] = 1728,
  [SMALL_STATE(70)] = 1743,
  [SMALL_STATE(71)] = 1758,
  [SMALL_STATE(72)] = 1773,
  [SMALL_STATE(73)] = 1788,
  [SMALL_STATE(74)] = 1803,
  [SMALL_STATE(75)] = 1818,
  [SMALL_STATE(76)] = 1830,
  [SMALL_STATE(77)] = 1844,
  [SMALL_STATE(78)] = 1856,
  [SMALL_STATE(79)] = 1868,
  [SMALL_STATE(80)] = 1882,
  [SMALL_STATE(81)] = 1894,
  [SMALL_STATE(82)] = 1910,
  [SMALL_STATE(83)] = 1924,
  [SMALL_STATE(84)] = 1936,
  [SMALL_STATE(85)] = 1948,
  [SMALL_STATE(86)] = 1964,
  [SMALL_STATE(87)] = 1976,
  [SMALL_STATE(88)] = 1988,
  [SMALL_STATE(89)] = 2002,
  [SMALL_STATE(90)] = 2018,
  [SMALL_STATE(91)] = 2030,
  [SMALL_STATE(92)] = 2046,
  [SMALL_STATE(93)] = 2062,
  [SMALL_STATE(94)] = 2074,
  [SMALL_STATE(95)] = 2088,
  [SMALL_STATE(96)] = 2104,
  [SMALL_STATE(97)] = 2120,
  [SMALL_STATE(98)] = 2136,
  [SMALL_STATE(99)] = 2152,
  [SMALL_STATE(100)] = 2168,
  [SMALL_STATE(101)] = 2181,
  [SMALL_STATE(102)] = 2194,
  [SMALL_STATE(103)] = 2205,
  [SMALL_STATE(104)] = 2216,
  [SMALL_STATE(105)] = 2229,
  [SMALL_STATE(106)] = 2242,
  [SMALL_STATE(107)] = 2255,
  [SMALL_STATE(108)] = 2268,
  [SMALL_STATE(109)] = 2279,
  [SMALL_STATE(110)] = 2292,
  [SMALL_STATE(111)] = 2302,
  [SMALL_STATE(112)] = 2312,
  [SMALL_STATE(113)] = 2322,
  [SMALL_STATE(114)] = 2332,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(84),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(90),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(102),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_definition_repeat1, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_expression, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 1),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_use_clause_repeat1, 2), SHIFT_REPEAT(93),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_clause_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 3, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_clause, 3, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_clause, 4, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_clause, 4, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(102),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_clause_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(110),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

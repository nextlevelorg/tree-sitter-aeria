#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_comment_token1 = 1,
  sym_collection_name = 2,
  anon_sym_collection = 3,
  anon_sym_properties = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_identifier = 7,
  sym_number = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_quoted_string_token1 = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_in = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_AMP_AMP = 20,
  anon_sym_PIPE_PIPE = 21,
  sym_code = 22,
  anon_sym_str = 23,
  anon_sym_int = 24,
  anon_sym_getter = 25,
  anon_sym_LPAREN_RPAREN = 26,
  anon_sym_EQ_GT = 27,
  anon_sym_ATcond = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_if = 31,
  anon_sym_formLayout = 32,
  anon_sym_fields = 33,
  sym_program = 34,
  sym_comment = 35,
  sym_declaration = 36,
  sym_properties_block = 37,
  sym_declaration_block = 38,
  sym_boolean = 39,
  sym_quoted_string = 40,
  sym_binary_operator = 41,
  sym_logical_concatenator_operator = 42,
  sym_schema_column = 43,
  sym_schema_type = 44,
  sym_binary_operation = 45,
  sym_logic_operation = 46,
  sym_condition_expr = 47,
  sym_condition = 48,
  sym_formLayout = 49,
  aux_sym_program_repeat1 = 50,
  aux_sym_properties_block_repeat1 = 51,
  aux_sym_declaration_block_repeat1 = 52,
  aux_sym_formLayout_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_collection_name] = "collection_name",
  [anon_sym_collection] = "collection",
  [anon_sym_properties] = "properties",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_in] = "in",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_code] = "code",
  [anon_sym_str] = "str",
  [anon_sym_int] = "int",
  [anon_sym_getter] = "getter",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_ATcond] = "@cond",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_formLayout] = "formLayout",
  [anon_sym_fields] = "fields",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_declaration] = "declaration",
  [sym_properties_block] = "properties_block",
  [sym_declaration_block] = "declaration_block",
  [sym_boolean] = "boolean",
  [sym_quoted_string] = "quoted_string",
  [sym_binary_operator] = "binary_operator",
  [sym_logical_concatenator_operator] = "logical_concatenator_operator",
  [sym_schema_column] = "schema_column",
  [sym_schema_type] = "schema_type",
  [sym_binary_operation] = "binary_operation",
  [sym_logic_operation] = "logic_operation",
  [sym_condition_expr] = "condition_expr",
  [sym_condition] = "condition",
  [sym_formLayout] = "formLayout",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_declaration_block_repeat1] = "declaration_block_repeat1",
  [aux_sym_formLayout_repeat1] = "formLayout_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_collection_name] = sym_collection_name,
  [anon_sym_collection] = anon_sym_collection,
  [anon_sym_properties] = anon_sym_properties,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_code] = sym_code,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_getter] = anon_sym_getter,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_ATcond] = anon_sym_ATcond,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_formLayout] = anon_sym_formLayout,
  [anon_sym_fields] = anon_sym_fields,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_declaration] = sym_declaration,
  [sym_properties_block] = sym_properties_block,
  [sym_declaration_block] = sym_declaration_block,
  [sym_boolean] = sym_boolean,
  [sym_quoted_string] = sym_quoted_string,
  [sym_binary_operator] = sym_binary_operator,
  [sym_logical_concatenator_operator] = sym_logical_concatenator_operator,
  [sym_schema_column] = sym_schema_column,
  [sym_schema_type] = sym_schema_type,
  [sym_binary_operation] = sym_binary_operation,
  [sym_logic_operation] = sym_logic_operation,
  [sym_condition_expr] = sym_condition_expr,
  [sym_condition] = sym_condition,
  [sym_formLayout] = sym_formLayout,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_declaration_block_repeat1] = aux_sym_declaration_block_repeat1,
  [aux_sym_formLayout_repeat1] = aux_sym_formLayout_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_collection_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_collection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properties] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcond] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_formLayout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fields] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_block] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_concatenator_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_column] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_type] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_logic_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_formLayout] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_properties_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formLayout_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field_name] = "field_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_field_name, 0, .inherited = true},
    {field_field_name, 1, .inherited = true},
  [2] =
    {field_field_name, 4, .inherited = true},
  [3] =
    {field_field_name, 0},
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(92);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(196);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == '|') ADVANCE(89);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_collection_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_collection);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_code);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_getter);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATcond);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(195);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_formLayout);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_fields);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym_collection_name] = ACTIONS(1),
    [anon_sym_collection] = ACTIONS(1),
    [anon_sym_properties] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_getter] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_ATcond] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_formLayout] = ACTIONS(1),
    [anon_sym_fields] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(59),
    [sym_comment] = STATE(1),
    [sym_declaration] = STATE(29),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_collection] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      sym_binary_operator,
    ACTIONS(11), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_in,
  [21] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_boolean,
      sym_quoted_string,
  [42] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_properties,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_formLayout,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_declaration_block_repeat1,
    STATE(16), 2,
      sym_properties_block,
      sym_formLayout,
  [65] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_properties,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_formLayout,
    STATE(5), 2,
      sym_comment,
      aux_sym_declaration_block_repeat1,
    STATE(16), 2,
      sym_properties_block,
      sym_formLayout,
  [86] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_properties,
    ACTIONS(23), 1,
      anon_sym_formLayout,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_declaration_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(16), 2,
      sym_properties_block,
      sym_formLayout,
  [109] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_properties_block_repeat1,
    STATE(39), 1,
      sym_schema_column,
  [128] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(39), 1,
      sym_schema_column,
    STATE(8), 2,
      sym_comment,
      aux_sym_properties_block_repeat1,
  [145] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_properties_block_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(39), 1,
      sym_schema_column,
  [164] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(48), 1,
      anon_sym_getter,
    STATE(10), 1,
      sym_comment,
    STATE(30), 1,
      sym_schema_type,
    ACTIONS(46), 2,
      anon_sym_str,
      anon_sym_int,
  [181] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_collection,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(29), 1,
      sym_declaration,
  [200] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(52), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
  [213] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_collection,
    STATE(29), 1,
      sym_declaration,
    STATE(13), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [230] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(31), 1,
      sym_logical_concatenator_operator,
    ACTIONS(59), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [247] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(14), 1,
      sym_binary_operation,
    STATE(15), 1,
      sym_comment,
    STATE(52), 1,
      sym_logic_operation,
  [263] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_properties,
      anon_sym_RBRACE,
      anon_sym_formLayout,
  [275] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_properties,
      anon_sym_RBRACE,
      anon_sym_formLayout,
  [287] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(18), 2,
      sym_comment,
      aux_sym_formLayout_repeat1,
  [301] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [313] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_properties,
      anon_sym_RBRACE,
      anon_sym_formLayout,
  [325] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_formLayout_repeat1,
  [341] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(82), 3,
      anon_sym_properties,
      anon_sym_RBRACE,
      anon_sym_formLayout,
  [353] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [365] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_formLayout_repeat1,
    STATE(24), 1,
      sym_comment,
  [381] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_properties,
      anon_sym_RBRACE,
      anon_sym_formLayout,
  [393] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [405] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(27), 1,
      sym_comment,
  [418] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [429] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [440] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(30), 1,
      sym_comment,
  [453] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(31), 1,
      sym_comment,
    STATE(61), 1,
      sym_binary_operation,
  [466] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      sym_declaration_block,
  [479] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [490] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [501] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
  [514] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(36), 1,
      sym_comment,
  [527] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(118), 1,
      anon_sym_if,
    STATE(37), 1,
      sym_comment,
    STATE(43), 1,
      sym_condition,
  [540] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      anon_sym_ATcond,
    STATE(38), 1,
      sym_comment,
    STATE(40), 1,
      sym_condition_expr,
  [553] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(39), 1,
      sym_comment,
  [566] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
  [576] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_comment,
  [586] = 3,
    ACTIONS(130), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      sym_code,
    STATE(42), 1,
      sym_comment,
  [596] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_comment,
  [606] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
  [616] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_comment,
  [626] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(140), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(46), 1,
      sym_comment,
  [636] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      anon_sym_fields,
    STATE(47), 1,
      sym_comment,
  [646] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_comment,
  [656] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_comment,
  [666] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_comment,
  [676] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
  [686] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_comment,
  [696] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(154), 1,
      sym_collection_name,
    STATE(53), 1,
      sym_comment,
  [706] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_comment,
  [716] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(55), 1,
      sym_comment,
  [726] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_comment,
  [736] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
  [746] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      anon_sym_EQ_GT,
    STATE(58), 1,
      sym_comment,
  [756] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
  [766] = 3,
    ACTIONS(130), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      aux_sym_quoted_string_token1,
    STATE(60), 1,
      sym_comment,
  [776] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_comment,
  [786] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_comment,
  [796] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 181,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 287,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 405,
  [SMALL_STATE(28)] = 418,
  [SMALL_STATE(29)] = 429,
  [SMALL_STATE(30)] = 440,
  [SMALL_STATE(31)] = 453,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 479,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 501,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 540,
  [SMALL_STATE(39)] = 553,
  [SMALL_STATE(40)] = 566,
  [SMALL_STATE(41)] = 576,
  [SMALL_STATE(42)] = 586,
  [SMALL_STATE(43)] = 596,
  [SMALL_STATE(44)] = 606,
  [SMALL_STATE(45)] = 616,
  [SMALL_STATE(46)] = 626,
  [SMALL_STATE(47)] = 636,
  [SMALL_STATE(48)] = 646,
  [SMALL_STATE(49)] = 656,
  [SMALL_STATE(50)] = 666,
  [SMALL_STATE(51)] = 676,
  [SMALL_STATE(52)] = 686,
  [SMALL_STATE(53)] = 696,
  [SMALL_STATE(54)] = 706,
  [SMALL_STATE(55)] = 716,
  [SMALL_STATE(56)] = 726,
  [SMALL_STATE(57)] = 736,
  [SMALL_STATE(58)] = 746,
  [SMALL_STATE(59)] = 756,
  [SMALL_STATE(60)] = 766,
  [SMALL_STATE(61)] = 776,
  [SMALL_STATE(62)] = 786,
  [SMALL_STATE(63)] = 796,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(41),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 2), SHIFT_REPEAT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_block_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_operation, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_block_repeat1, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formLayout, 7, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formLayout_repeat1, 2, .production_id = 1),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formLayout_repeat1, 2, .production_id = 1), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formLayout, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formLayout_repeat1, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_formLayout_repeat1, 4, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_column, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_column, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_block, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_type, 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_type, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_type, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_type, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_properties_block_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_concatenator_operator, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_expr, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic_operation, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_aeria(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

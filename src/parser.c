#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_str = 2,
  anon_sym_int = 3,
  sym_capitalized_identifier = 4,
  sym_snakecased_identifier = 5,
  anon_sym_collection = 6,
  anon_sym_router = 7,
  anon_sym_contract = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_program = 11,
  sym_comment = 12,
  sym_type = 13,
  sym_collection_declaration = 14,
  sym_declaration = 15,
  sym_statement_block = 16,
  sym_column_declaration = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_statement_block_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_str] = "str",
  [anon_sym_int] = "int",
  [sym_capitalized_identifier] = "capitalized_identifier",
  [sym_snakecased_identifier] = "snakecased_identifier",
  [anon_sym_collection] = "collection",
  [anon_sym_router] = "router",
  [anon_sym_contract] = "contract",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_type] = "type",
  [sym_collection_declaration] = "collection_declaration",
  [sym_declaration] = "declaration",
  [sym_statement_block] = "statement_block",
  [sym_column_declaration] = "column_declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_int] = anon_sym_int,
  [sym_capitalized_identifier] = sym_capitalized_identifier,
  [sym_snakecased_identifier] = sym_snakecased_identifier,
  [anon_sym_collection] = anon_sym_collection,
  [anon_sym_router] = anon_sym_router,
  [anon_sym_contract] = anon_sym_contract,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_type] = sym_type,
  [sym_collection_declaration] = sym_collection_declaration,
  [sym_declaration] = sym_declaration,
  [sym_statement_block] = sym_statement_block,
  [sym_column_declaration] = sym_column_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
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
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [sym_capitalized_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_snakecased_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_collection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_router] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract] = {
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_column_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_capitalized_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_snakecased_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_collection);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_router);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [sym_capitalized_identifier] = ACTIONS(1),
    [anon_sym_collection] = ACTIONS(1),
    [anon_sym_router] = ACTIONS(1),
    [anon_sym_contract] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(18),
    [sym_comment] = STATE(1),
    [sym_collection_declaration] = STATE(8),
    [sym_declaration] = STATE(9),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_collection] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_collection,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(8), 1,
      sym_collection_declaration,
    STATE(9), 1,
      sym_declaration,
  [22] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_collection,
    STATE(8), 1,
      sym_collection_declaration,
    STATE(9), 1,
      sym_declaration,
    STATE(3), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [42] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(16), 1,
      sym_snakecased_identifier,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_statement_block_repeat1,
    STATE(13), 1,
      sym_column_declaration,
  [61] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(16), 1,
      sym_snakecased_identifier,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_statement_block_repeat1,
    STATE(13), 1,
      sym_column_declaration,
  [80] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(22), 1,
      sym_snakecased_identifier,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_column_declaration,
    STATE(6), 2,
      sym_comment,
      aux_sym_statement_block_repeat1,
  [97] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_comment,
    STATE(15), 1,
      sym_type,
    ACTIONS(27), 2,
      anon_sym_str,
      anon_sym_int,
  [111] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [122] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [133] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      sym_statement_block,
  [146] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [157] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [168] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(39), 2,
      sym_snakecased_identifier,
      anon_sym_RBRACE,
  [179] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(41), 2,
      sym_snakecased_identifier,
      anon_sym_RBRACE,
  [190] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym_snakecased_identifier,
      anon_sym_RBRACE,
  [201] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_collection,
  [212] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(47), 1,
      sym_capitalized_identifier,
    STATE(17), 1,
      sym_comment,
  [222] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
  [232] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 222,
  [SMALL_STATE(19)] = 232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_declaration, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_declaration, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_commentLine = 2,
  sym_commentBlock = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_LBRACK_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACE = 9,
  anon_sym_enum = 10,
  anon_sym_class = 11,
  anon_sym_COLON = 12,
  anon_sym_delete = 13,
  sym_integer = 14,
  sym_float = 15,
  anon_sym_DQUOTE = 16,
  sym_escapeSequence = 17,
  sym__stringContent = 18,
  sym_compilationUnit = 19,
  sym_entry = 20,
  sym_entrySimple = 21,
  sym_entryArray = 22,
  sym_array = 23,
  sym_enum = 24,
  sym_class = 25,
  sym_deleteClass = 26,
  sym_literal = 27,
  sym_string = 28,
  aux_sym_compilationUnit_repeat1 = 29,
  aux_sym_array_repeat1 = 30,
  aux_sym_enum_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_commentLine] = "commentLine",
  [sym_commentBlock] = "commentBlock",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enum] = "enum",
  [anon_sym_class] = "class",
  [anon_sym_COLON] = ":",
  [anon_sym_delete] = "delete",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_DQUOTE] = "\"",
  [sym_escapeSequence] = "escapeSequence",
  [sym__stringContent] = "_stringContent",
  [sym_compilationUnit] = "compilationUnit",
  [sym_entry] = "entry",
  [sym_entrySimple] = "entrySimple",
  [sym_entryArray] = "entryArray",
  [sym_array] = "array",
  [sym_enum] = "enum",
  [sym_class] = "class",
  [sym_deleteClass] = "deleteClass",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [aux_sym_compilationUnit_repeat1] = "compilationUnit_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_commentLine] = sym_commentLine,
  [sym_commentBlock] = sym_commentBlock,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_delete] = anon_sym_delete,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escapeSequence] = sym_escapeSequence,
  [sym__stringContent] = sym__stringContent,
  [sym_compilationUnit] = sym_compilationUnit,
  [sym_entry] = sym_entry,
  [sym_entrySimple] = sym_entrySimple,
  [sym_entryArray] = sym_entryArray,
  [sym_array] = sym_array,
  [sym_enum] = sym_enum,
  [sym_class] = sym_class,
  [sym_deleteClass] = sym_deleteClass,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [aux_sym_compilationUnit_repeat1] = aux_sym_compilationUnit_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [sym_commentLine] = {
    .visible = true,
    .named = true,
  },
  [sym_commentBlock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escapeSequence] = {
    .visible = true,
    .named = true,
  },
  [sym__stringContent] = {
    .visible = false,
    .named = true,
  },
  [sym_compilationUnit] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_entrySimple] = {
    .visible = true,
    .named = true,
  },
  [sym_entryArray] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_deleteClass] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilationUnit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_inherited = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_inherited] = "inherited",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_inherited, 3},
    {field_name, 1},
  [5] =
    {field_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 21,
        ',', 16,
        '/', 2,
        ':', 18,
        ';', 13,
        '=', 12,
        '[', 5,
        '\\', 6,
        '{', 15,
        '}', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_commentLine);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_commentBlock);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_escapeSequence);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__stringContent);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__stringContent);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_delete);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_commentLine] = ACTIONS(3),
    [sym_commentBlock] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escapeSequence] = ACTIONS(1),
  },
  [1] = {
    [sym_compilationUnit] = STATE(46),
    [sym_entry] = STATE(7),
    [sym_entrySimple] = STATE(16),
    [sym_entryArray] = STATE(16),
    [sym_enum] = STATE(16),
    [sym_class] = STATE(16),
    [sym_deleteClass] = STATE(16),
    [aux_sym_compilationUnit_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_commentLine] = ACTIONS(3),
    [sym_commentBlock] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_delete] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_class,
    ACTIONS(26), 1,
      anon_sym_delete,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(16), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [32] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(4), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(16), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [63] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(16), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [94] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(6), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(16), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [125] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(16), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [156] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(16), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [187] = 8,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(33), 2,
      sym_array,
      sym_literal,
  [214] = 7,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(44), 2,
      sym_array,
      sym_literal,
  [238] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(51), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [253] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(55), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [268] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(59), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [283] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(63), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [298] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(67), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [313] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(71), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [328] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(75), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [343] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(79), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [358] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(83), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [373] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(87), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [388] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(91), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [403] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(95), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [418] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(99), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [433] = 6,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
    STATE(61), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [453] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_escapeSequence,
    ACTIONS(107), 1,
      sym__stringContent,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(101), 2,
      sym_commentLine,
      sym_commentBlock,
  [470] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_escapeSequence,
    ACTIONS(113), 1,
      sym__stringContent,
    STATE(24), 1,
      aux_sym_string_repeat1,
    ACTIONS(101), 2,
      sym_commentLine,
      sym_commentBlock,
  [487] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_escapeSequence,
    ACTIONS(120), 1,
      sym__stringContent,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(101), 2,
      sym_commentLine,
      sym_commentBlock,
  [504] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [514] = 4,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [528] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [538] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [548] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [558] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [568] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [582] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [596] = 4,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [610] = 4,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [624] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(151), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [634] = 4,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [648] = 4,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [662] = 3,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [673] = 3,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [684] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [693] = 3,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [704] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [713] = 3,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [724] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [732] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [740] = 2,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [748] = 2,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [756] = 2,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [764] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [772] = 2,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [780] = 2,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [788] = 2,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [796] = 2,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [804] = 2,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [812] = 2,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [820] = 2,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [828] = 2,
    ACTIONS(201), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [836] = 2,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [844] = 2,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [852] = 2,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 253,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 328,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 358,
  [SMALL_STATE(19)] = 373,
  [SMALL_STATE(20)] = 388,
  [SMALL_STATE(21)] = 403,
  [SMALL_STATE(22)] = 418,
  [SMALL_STATE(23)] = 433,
  [SMALL_STATE(24)] = 453,
  [SMALL_STATE(25)] = 470,
  [SMALL_STATE(26)] = 487,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 514,
  [SMALL_STATE(29)] = 528,
  [SMALL_STATE(30)] = 538,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 558,
  [SMALL_STATE(33)] = 568,
  [SMALL_STATE(34)] = 582,
  [SMALL_STATE(35)] = 596,
  [SMALL_STATE(36)] = 610,
  [SMALL_STATE(37)] = 624,
  [SMALL_STATE(38)] = 634,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 662,
  [SMALL_STATE(41)] = 673,
  [SMALL_STATE(42)] = 684,
  [SMALL_STATE(43)] = 693,
  [SMALL_STATE(44)] = 704,
  [SMALL_STATE(45)] = 713,
  [SMALL_STATE(46)] = 724,
  [SMALL_STATE(47)] = 732,
  [SMALL_STATE(48)] = 740,
  [SMALL_STATE(49)] = 748,
  [SMALL_STATE(50)] = 756,
  [SMALL_STATE(51)] = 764,
  [SMALL_STATE(52)] = 772,
  [SMALL_STATE(53)] = 780,
  [SMALL_STATE(54)] = 788,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 804,
  [SMALL_STATE(57)] = 812,
  [SMALL_STATE(58)] = 820,
  [SMALL_STATE(59)] = 828,
  [SMALL_STATE(60)] = 836,
  [SMALL_STATE(61)] = 844,
  [SMALL_STATE(62)] = 852,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entryArray, 5, 0, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entryArray, 5, 0, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 8, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deleteClass, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deleteClass, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrySimple, 4, 0, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entrySimple, 4, 0, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 6, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 7, 0, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rvparam(void) {
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

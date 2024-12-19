#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  sym_integer = 13,
  sym_float = 14,
  anon_sym_DQUOTE = 15,
  sym_escapeSequence = 16,
  sym__stringContent = 17,
  sym_compilationUnit = 18,
  sym_entry = 19,
  sym_entrySimple = 20,
  sym_entryArray = 21,
  sym_array = 22,
  sym_enum = 23,
  sym_class = 24,
  sym_literal = 25,
  sym_string = 26,
  aux_sym_compilationUnit_repeat1 = 27,
  aux_sym_array_repeat1 = 28,
  aux_sym_enum_repeat1 = 29,
  aux_sym_string_repeat1 = 30,
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
      if (lookahead == 'e') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_class);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
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
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escapeSequence] = ACTIONS(1),
  },
  [1] = {
    [sym_compilationUnit] = STATE(51),
    [sym_entry] = STATE(4),
    [sym_entrySimple] = STATE(11),
    [sym_entryArray] = STATE(11),
    [sym_enum] = STATE(11),
    [sym_class] = STATE(11),
    [aux_sym_compilationUnit_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_commentLine] = ACTIONS(3),
    [sym_commentBlock] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(18), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(11), 4,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
  [28] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(5), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(11), 4,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
  [55] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(11), 4,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
  [82] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(11), 4,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
  [109] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(7), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(11), 4,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
  [136] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(11), 4,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
  [163] = 8,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_integer,
    ACTIONS(40), 1,
      sym_float,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(32), 2,
      sym_array,
      sym_literal,
  [190] = 7,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      sym_integer,
    ACTIONS(40), 1,
      sym_float,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(44), 2,
      sym_array,
      sym_literal,
  [214] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(46), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [228] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(50), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [242] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(54), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [256] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(58), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [270] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(62), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [284] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(66), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [298] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(70), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [312] = 6,
    ACTIONS(38), 1,
      sym_integer,
    ACTIONS(40), 1,
      sym_float,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_string,
    STATE(53), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [332] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(74), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [346] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(78), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [360] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(82), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [374] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(86), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [388] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(90), 3,
      anon_sym_enum,
      anon_sym_class,
      sym_identifier,
  [402] = 5,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_escapeSequence,
    ACTIONS(98), 1,
      sym__stringContent,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(92), 2,
      sym_commentLine,
      sym_commentBlock,
  [419] = 5,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_escapeSequence,
    ACTIONS(104), 1,
      sym__stringContent,
    STATE(23), 1,
      aux_sym_string_repeat1,
    ACTIONS(92), 2,
      sym_commentLine,
      sym_commentBlock,
  [436] = 5,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym_escapeSequence,
    ACTIONS(111), 1,
      sym__stringContent,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(92), 2,
      sym_commentLine,
      sym_commentBlock,
  [453] = 4,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [467] = 4,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [481] = 4,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [495] = 4,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [509] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [519] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [529] = 4,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [543] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [553] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [563] = 4,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [577] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [587] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [597] = 4,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [611] = 3,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [622] = 3,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [633] = 3,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(164), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [644] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [653] = 3,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [664] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [673] = 2,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [681] = 2,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [689] = 2,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [697] = 2,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [705] = 2,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [713] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [721] = 2,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [729] = 2,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [737] = 2,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [745] = 2,
    ACTIONS(184), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [753] = 2,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [761] = 2,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [769] = 2,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [777] = 2,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [785] = 2,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 256,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 453,
  [SMALL_STATE(27)] = 467,
  [SMALL_STATE(28)] = 481,
  [SMALL_STATE(29)] = 495,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 519,
  [SMALL_STATE(32)] = 529,
  [SMALL_STATE(33)] = 543,
  [SMALL_STATE(34)] = 553,
  [SMALL_STATE(35)] = 563,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 587,
  [SMALL_STATE(38)] = 597,
  [SMALL_STATE(39)] = 611,
  [SMALL_STATE(40)] = 622,
  [SMALL_STATE(41)] = 633,
  [SMALL_STATE(42)] = 644,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 664,
  [SMALL_STATE(45)] = 673,
  [SMALL_STATE(46)] = 681,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 705,
  [SMALL_STATE(50)] = 713,
  [SMALL_STATE(51)] = 721,
  [SMALL_STATE(52)] = 729,
  [SMALL_STATE(53)] = 737,
  [SMALL_STATE(54)] = 745,
  [SMALL_STATE(55)] = 753,
  [SMALL_STATE(56)] = 761,
  [SMALL_STATE(57)] = 769,
  [SMALL_STATE(58)] = 777,
  [SMALL_STATE(59)] = 785,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entryArray, 5, 0, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entryArray, 5, 0, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, 0, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, 0, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrySimple, 4, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entrySimple, 4, 0, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 7, 0, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, 0, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 6, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 8, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  anon_sym_PLUS_EQ = 7,
  anon_sym_DASH_EQ = 8,
  anon_sym_LBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  anon_sym_enum = 12,
  anon_sym_class = 13,
  anon_sym_COLON = 14,
  anon_sym_delete = 15,
  sym_integer = 16,
  sym_float = 17,
  anon_sym_DQUOTE = 18,
  sym_quoteEscape = 19,
  sym__stringContent = 20,
  sym_compilationUnit = 21,
  sym_entry = 22,
  sym_entrySimple = 23,
  sym_entryArray = 24,
  sym_array = 25,
  sym_enum = 26,
  sym_class = 27,
  sym_deleteClass = 28,
  sym_literal = 29,
  sym_string = 30,
  aux_sym_compilationUnit_repeat1 = 31,
  aux_sym_array_repeat1 = 32,
  aux_sym_enum_repeat1 = 33,
  aux_sym_string_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_commentLine] = "commentLine",
  [sym_commentBlock] = "commentBlock",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
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
  [sym_quoteEscape] = "quoteEscape",
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
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
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
  [sym_quoteEscape] = sym_quoteEscape,
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
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
  [sym_quoteEscape] = {
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
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '"', 32,
        '+', 6,
        ',', 24,
        '-', 7,
        '/', 3,
        ':', 26,
        ';', 19,
        '=', 18,
        '[', 8,
        '{', 23,
        '}', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_commentLine);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_commentBlock);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_quoteEscape);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__stringContent);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__stringContent);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__stringContent);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'n' &&
          lookahead != 'r' &&
          lookahead != 't') ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
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
  [23] = {.lex_state = 2},
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
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
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
    [sym_quoteEscape] = ACTIONS(1),
  },
  [1] = {
    [sym_compilationUnit] = STATE(47),
    [sym_entry] = STATE(7),
    [sym_entrySimple] = STATE(19),
    [sym_entryArray] = STATE(19),
    [sym_enum] = STATE(19),
    [sym_class] = STATE(19),
    [sym_deleteClass] = STATE(19),
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
    STATE(19), 5,
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
    STATE(19), 5,
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
    STATE(19), 5,
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
    STATE(19), 5,
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
    STATE(19), 5,
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
    STATE(19), 5,
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
    STATE(27), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(34), 2,
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
    STATE(27), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(46), 2,
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
    STATE(27), 1,
      sym_string,
    STATE(57), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [453] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_quoteEscape,
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
      sym_quoteEscape,
    ACTIONS(114), 1,
      sym__stringContent,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(101), 2,
      sym_commentLine,
      sym_commentBlock,
  [487] = 5,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_quoteEscape,
    ACTIONS(121), 1,
      sym__stringContent,
    STATE(25), 1,
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
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [528] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(130), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [538] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [552] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [566] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [576] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(140), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [586] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [600] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [610] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(148), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [620] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [634] = 4,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [648] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [658] = 4,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [672] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [681] = 3,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [692] = 3,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [703] = 3,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [714] = 3,
    ACTIONS(173), 1,
      anon_sym_EQ,
    ACTIONS(175), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [725] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [734] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [742] = 2,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [750] = 2,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [758] = 2,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [766] = 2,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [774] = 2,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [782] = 2,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [790] = 2,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [798] = 2,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [806] = 2,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [814] = 2,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [822] = 2,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [830] = 2,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [838] = 2,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [846] = 2,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [854] = 2,
    ACTIONS(207), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(31)] = 552,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 576,
  [SMALL_STATE(34)] = 586,
  [SMALL_STATE(35)] = 600,
  [SMALL_STATE(36)] = 610,
  [SMALL_STATE(37)] = 620,
  [SMALL_STATE(38)] = 634,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 672,
  [SMALL_STATE(42)] = 681,
  [SMALL_STATE(43)] = 692,
  [SMALL_STATE(44)] = 703,
  [SMALL_STATE(45)] = 714,
  [SMALL_STATE(46)] = 725,
  [SMALL_STATE(47)] = 734,
  [SMALL_STATE(48)] = 742,
  [SMALL_STATE(49)] = 750,
  [SMALL_STATE(50)] = 758,
  [SMALL_STATE(51)] = 766,
  [SMALL_STATE(52)] = 774,
  [SMALL_STATE(53)] = 782,
  [SMALL_STATE(54)] = 790,
  [SMALL_STATE(55)] = 798,
  [SMALL_STATE(56)] = 806,
  [SMALL_STATE(57)] = 814,
  [SMALL_STATE(58)] = 822,
  [SMALL_STATE(59)] = 830,
  [SMALL_STATE(60)] = 838,
  [SMALL_STATE(61)] = 846,
  [SMALL_STATE(62)] = 854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entryArray, 5, 0, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entryArray, 5, 0, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 8, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deleteClass, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deleteClass, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrySimple, 4, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entrySimple, 4, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 6, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 7, 0, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

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
  sym_enumBody = 27,
  sym_class = 28,
  sym_classBody = 29,
  sym_deleteClass = 30,
  sym_literal = 31,
  sym_string = 32,
  aux_sym_compilationUnit_repeat1 = 33,
  aux_sym_array_repeat1 = 34,
  aux_sym_enumBody_repeat1 = 35,
  aux_sym_string_repeat1 = 36,
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
  [sym_enumBody] = "enumBody",
  [sym_class] = "class",
  [sym_classBody] = "classBody",
  [sym_deleteClass] = "deleteClass",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [aux_sym_compilationUnit_repeat1] = "compilationUnit_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_enumBody_repeat1] = "enumBody_repeat1",
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
  [sym_enumBody] = sym_enumBody,
  [sym_class] = sym_class,
  [sym_classBody] = sym_classBody,
  [sym_deleteClass] = sym_deleteClass,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [aux_sym_compilationUnit_repeat1] = aux_sym_compilationUnit_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_enumBody_repeat1] = aux_sym_enumBody_repeat1,
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
  [sym_enumBody] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_classBody] = {
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
  [aux_sym_enumBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_inherited = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_inherited] = "inherited",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_body, 2},
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_inherited, 3},
    {field_name, 1},
  [8] =
    {field_name, 0},
  [9] =
    {field_body, 4},
    {field_inherited, 3},
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '"', 34,
        '+', 6,
        ',', 25,
        '-', 7,
        '/', 3,
        ':', 27,
        ';', 20,
        '=', 19,
        '[', 8,
        '{', 24,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(21);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_commentLine);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_commentBlock);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_quoteEscape);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__stringContent);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__stringContent);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__stringContent);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'n' &&
          lookahead != 'r' &&
          lookahead != 't') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
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
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
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
    [sym_compilationUnit] = STATE(50),
    [sym_entry] = STATE(4),
    [sym_entrySimple] = STATE(8),
    [sym_entryArray] = STATE(8),
    [sym_enum] = STATE(8),
    [sym_class] = STATE(8),
    [sym_deleteClass] = STATE(8),
    [aux_sym_compilationUnit_repeat1] = STATE(4),
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
    STATE(8), 5,
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
    STATE(5), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(8), 5,
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
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(8), 5,
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
    STATE(2), 2,
      sym_entry,
      aux_sym_compilationUnit_repeat1,
    STATE(8), 5,
      sym_entrySimple,
      sym_entryArray,
      sym_enum,
      sym_class,
      sym_deleteClass,
  [125] = 8,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(22), 2,
      sym_array,
      sym_literal,
  [152] = 7,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    STATE(40), 2,
      sym_array,
      sym_literal,
  [176] = 3,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(47), 4,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_delete,
      sym_identifier,
  [191] = 3,
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
  [206] = 3,
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
  [221] = 3,
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
  [236] = 3,
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
  [251] = 3,
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
  [266] = 3,
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
  [281] = 3,
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
  [296] = 3,
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
  [311] = 6,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_string,
    STATE(48), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [331] = 5,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_COLON,
    STATE(52), 1,
      sym_classBody,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [348] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_quoteEscape,
    ACTIONS(93), 1,
      sym__stringContent,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(87), 2,
      sym_commentLine,
      sym_commentBlock,
  [365] = 5,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_quoteEscape,
    ACTIONS(99), 1,
      sym__stringContent,
    STATE(21), 1,
      aux_sym_string_repeat1,
    ACTIONS(87), 2,
      sym_commentLine,
      sym_commentBlock,
  [382] = 5,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_quoteEscape,
    ACTIONS(106), 1,
      sym__stringContent,
    STATE(21), 1,
      aux_sym_string_repeat1,
    ACTIONS(87), 2,
      sym_commentLine,
      sym_commentBlock,
  [399] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [413] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [423] = 4,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_classBody,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [437] = 4,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_enumBody_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [451] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [461] = 4,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_enumBody_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [475] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(128), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [485] = 4,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_enumBody_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [499] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [509] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(134), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [519] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(136), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [529] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [539] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [553] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_array_repeat1,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [567] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [578] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [587] = 3,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [598] = 3,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_enumBody,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [609] = 2,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [618] = 3,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [629] = 2,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [637] = 2,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [645] = 2,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [653] = 2,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [661] = 2,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [669] = 2,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [677] = 2,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [685] = 2,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [693] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [701] = 2,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [709] = 2,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [717] = 2,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [725] = 2,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [733] = 2,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [741] = 2,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_commentLine,
      sym_commentBlock,
  [749] = 2,
    ACTIONS(187), 1,
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
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 266,
  [SMALL_STATE(15)] = 281,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 365,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 413,
  [SMALL_STATE(24)] = 423,
  [SMALL_STATE(25)] = 437,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 461,
  [SMALL_STATE(28)] = 475,
  [SMALL_STATE(29)] = 485,
  [SMALL_STATE(30)] = 499,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 519,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 553,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 578,
  [SMALL_STATE(38)] = 587,
  [SMALL_STATE(39)] = 598,
  [SMALL_STATE(40)] = 609,
  [SMALL_STATE(41)] = 618,
  [SMALL_STATE(42)] = 629,
  [SMALL_STATE(43)] = 637,
  [SMALL_STATE(44)] = 645,
  [SMALL_STATE(45)] = 653,
  [SMALL_STATE(46)] = 661,
  [SMALL_STATE(47)] = 669,
  [SMALL_STATE(48)] = 677,
  [SMALL_STATE(49)] = 685,
  [SMALL_STATE(50)] = 693,
  [SMALL_STATE(51)] = 701,
  [SMALL_STATE(52)] = 709,
  [SMALL_STATE(53)] = 717,
  [SMALL_STATE(54)] = 725,
  [SMALL_STATE(55)] = 733,
  [SMALL_STATE(56)] = 741,
  [SMALL_STATE(57)] = 749,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilationUnit_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilationUnit, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deleteClass, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deleteClass, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrySimple, 4, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entrySimple, 4, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 5, 0, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, 0, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 4, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entryArray, 5, 0, 6),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entryArray, 5, 0, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, 0, 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 6, 0, 7),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumBody_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumBody_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classBody, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classBody, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumBody, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

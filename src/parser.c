#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  sym_id = 1,
  sym_num = 2,
  sym_skip = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_if = 6,
  anon_sym_then = 7,
  anon_sym_else = 8,
  anon_sym_end = 9,
  anon_sym_while = 10,
  anon_sym_do = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_EQ = 19,
  anon_sym_EQ_LT = 20,
  anon_sym_TILDE = 21,
  anon_sym_AMP_AMP = 22,
  sym_comment = 23,
  sym_program = 24,
  sym_stmt = 25,
  sym_asgn = 26,
  sym_seq = 27,
  sym_if = 28,
  sym_while = 29,
  sym__aexp = 30,
  sym_plus = 31,
  sym_minus = 32,
  sym_times = 33,
  sym__bexp = 34,
  sym_eqb = 35,
  sym_leb = 36,
  sym_negb = 37,
  sym_andb = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [sym_num] = "num",
  [sym_skip] = "skip",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_LT] = "=<",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP_AMP] = "&&",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_stmt] = "stmt",
  [sym_asgn] = "asgn",
  [sym_seq] = "seq",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym__aexp] = "_aexp",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_times] = "times",
  [sym__bexp] = "_bexp",
  [sym_eqb] = "eqb",
  [sym_leb] = "leb",
  [sym_negb] = "negb",
  [sym_andb] = "andb",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [sym_num] = sym_num,
  [sym_skip] = sym_skip,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_LT] = anon_sym_EQ_LT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_stmt] = sym_stmt,
  [sym_asgn] = sym_asgn,
  [sym_seq] = sym_seq,
  [sym_if] = sym_if,
  [sym_while] = sym_while,
  [sym__aexp] = sym__aexp,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_times] = sym_times,
  [sym__bexp] = sym__bexp,
  [sym_eqb] = sym_eqb,
  [sym_leb] = sym_leb,
  [sym_negb] = sym_negb,
  [sym_andb] = sym_andb,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_skip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_asgn] = {
    .visible = true,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym__aexp] = {
    .visible = false,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_times] = {
    .visible = true,
    .named = true,
  },
  [sym__bexp] = {
    .visible = false,
    .named = true,
  },
  [sym_eqb] = {
    .visible = true,
    .named = true,
  },
  [sym_leb] = {
    .visible = true,
    .named = true,
  },
  [sym_negb] = {
    .visible = true,
    .named = true,
  },
  [sym_andb] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequent = 4,
  field_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequent] = "consequent",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_body, 3},
    {field_condition, 1},
  [3] =
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead == '~') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '~') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(44);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'k') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_id);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_skip);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_else);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_end);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_while);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
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
  [44] = {.lex_state = 3},
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
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_skip] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(81),
    [sym_stmt] = STATE(80),
    [sym_asgn] = STATE(66),
    [sym_seq] = STATE(66),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_id] = ACTIONS(5),
    [sym_skip] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_while] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(72), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [33] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(59), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [66] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(75), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [99] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(63), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [132] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(78), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_id,
    ACTIONS(33), 1,
      sym_num,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(73), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      sym_num,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(57), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [231] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(43), 1,
      sym_num,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(57), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [264] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(43), 1,
      sym_num,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(68), 5,
      sym__bexp,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [297] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      sym_skip,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_while,
    STATE(64), 1,
      sym_stmt,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(66), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [326] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_else,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(65), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [357] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(71), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [388] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      sym_skip,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_while,
    STATE(64), 1,
      sym_stmt,
    STATE(66), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [413] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(79), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [438] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(69), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(70), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 9,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(61), 8,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 8,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP_AMP,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 9,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP_AMP,
  [552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(65), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(77), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(71), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [665] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(76), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [707] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_id,
    ACTIONS(51), 1,
      sym_skip,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_while,
    STATE(67), 1,
      sym_stmt,
    STATE(58), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 2,
      sym_id,
      sym_num,
    STATE(48), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 2,
      sym_id,
      sym_num,
    STATE(19), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 2,
      sym_id,
      sym_num,
    STATE(46), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 2,
      sym_id,
      sym_num,
    STATE(50), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 2,
      sym_id,
      sym_num,
    STATE(23), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 2,
      sym_id,
      sym_num,
    STATE(24), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 2,
      sym_id,
      sym_num,
    STATE(28), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 2,
      sym_id,
      sym_num,
    STATE(53), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 2,
      sym_id,
      sym_num,
    STATE(55), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 2,
      sym_id,
      sym_num,
    STATE(52), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 2,
      sym_id,
      sym_num,
    STATE(54), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 2,
      sym_id,
      sym_num,
    STATE(45), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 2,
      sym_id,
      sym_num,
    STATE(18), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 2,
      sym_id,
      sym_num,
    STATE(20), 4,
      sym__aexp,
      sym_plus,
      sym_minus,
      sym_times,
  [987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(111), 3,
      anon_sym_then,
      anon_sym_do,
      anon_sym_AMP_AMP,
  [1005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_then,
      anon_sym_do,
      anon_sym_AMP_AMP,
  [1023] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(127), 1,
      anon_sym_EQ_LT,
  [1045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [1063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(127), 1,
      anon_sym_EQ_LT,
  [1082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      anon_sym_EQ_LT,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [1135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [1152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
  [1168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [1184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [1194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(143), 2,
      anon_sym_then,
      anon_sym_do,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(151), 1,
      anon_sym_do,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(161), 1,
      anon_sym_end,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_end,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      anon_sym_end,
  [1328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_end,
    ACTIONS(169), 1,
      anon_sym_SEMI,
  [1338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(171), 1,
      anon_sym_then,
  [1348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(175), 1,
      anon_sym_then,
  [1376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      anon_sym_end,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(181), 1,
      anon_sym_else,
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(183), 1,
      anon_sym_do,
  [1406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      anon_sym_else,
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [1426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [1433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON_EQ,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 326,
  [SMALL_STATE(13)] = 357,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 438,
  [SMALL_STATE(17)] = 463,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 503,
  [SMALL_STATE(20)] = 520,
  [SMALL_STATE(21)] = 537,
  [SMALL_STATE(22)] = 552,
  [SMALL_STATE(23)] = 577,
  [SMALL_STATE(24)] = 596,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 640,
  [SMALL_STATE(27)] = 665,
  [SMALL_STATE(28)] = 690,
  [SMALL_STATE(29)] = 707,
  [SMALL_STATE(30)] = 732,
  [SMALL_STATE(31)] = 749,
  [SMALL_STATE(32)] = 766,
  [SMALL_STATE(33)] = 783,
  [SMALL_STATE(34)] = 800,
  [SMALL_STATE(35)] = 817,
  [SMALL_STATE(36)] = 834,
  [SMALL_STATE(37)] = 851,
  [SMALL_STATE(38)] = 868,
  [SMALL_STATE(39)] = 885,
  [SMALL_STATE(40)] = 902,
  [SMALL_STATE(41)] = 919,
  [SMALL_STATE(42)] = 936,
  [SMALL_STATE(43)] = 953,
  [SMALL_STATE(44)] = 970,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 1005,
  [SMALL_STATE(47)] = 1023,
  [SMALL_STATE(48)] = 1045,
  [SMALL_STATE(49)] = 1063,
  [SMALL_STATE(50)] = 1082,
  [SMALL_STATE(51)] = 1099,
  [SMALL_STATE(52)] = 1118,
  [SMALL_STATE(53)] = 1135,
  [SMALL_STATE(54)] = 1152,
  [SMALL_STATE(55)] = 1168,
  [SMALL_STATE(56)] = 1184,
  [SMALL_STATE(57)] = 1194,
  [SMALL_STATE(58)] = 1204,
  [SMALL_STATE(59)] = 1213,
  [SMALL_STATE(60)] = 1224,
  [SMALL_STATE(61)] = 1233,
  [SMALL_STATE(62)] = 1242,
  [SMALL_STATE(63)] = 1250,
  [SMALL_STATE(64)] = 1260,
  [SMALL_STATE(65)] = 1270,
  [SMALL_STATE(66)] = 1280,
  [SMALL_STATE(67)] = 1288,
  [SMALL_STATE(68)] = 1298,
  [SMALL_STATE(69)] = 1308,
  [SMALL_STATE(70)] = 1318,
  [SMALL_STATE(71)] = 1328,
  [SMALL_STATE(72)] = 1338,
  [SMALL_STATE(73)] = 1348,
  [SMALL_STATE(74)] = 1358,
  [SMALL_STATE(75)] = 1366,
  [SMALL_STATE(76)] = 1376,
  [SMALL_STATE(77)] = 1386,
  [SMALL_STATE(78)] = 1396,
  [SMALL_STATE(79)] = 1406,
  [SMALL_STATE(80)] = 1416,
  [SMALL_STATE(81)] = 1426,
  [SMALL_STATE(82)] = 1433,
  [SMALL_STATE(83)] = 1440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seq, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aexp, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_times, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aexp, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqb, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leb, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asgn, 3, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bexp, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negb, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_andb, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_imp(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

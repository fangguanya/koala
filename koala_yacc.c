/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "yacc/koala.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);


#line 78 "koala_yacc.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "koala_yacc.h".  */
#ifndef YY_YY_KOALA_YACC_H_INCLUDED
# define YY_YY_KOALA_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ELLIPSIS = 258,
    ADD_ASSIGN = 259,
    SUB_ASSIGN = 260,
    MUL_ASSIGN = 261,
    DIV_ASSIGN = 262,
    MOD_ASSIGN = 263,
    AND_ASSIGN = 264,
    OR_ASSIGN = 265,
    XOR_ASSIGN = 266,
    RIGHT_ASSIGN = 267,
    LEFT_ASSIGN = 268,
    EQ = 269,
    NE = 270,
    GE = 271,
    LE = 272,
    AND = 273,
    OR = 274,
    NOT = 275,
    SHIFT_LEFT = 276,
    SHIFT_RIGHT = 277,
    INC = 278,
    DEC = 279,
    TOKEN_THIS = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    DO = 284,
    FOR = 285,
    IN = 286,
    SWITCH = 287,
    CASE = 288,
    BREAK = 289,
    CONTINUE = 290,
    DEFAULT = 291,
    VAR = 292,
    FUNC = 293,
    RETURN = 294,
    STRUCT = 295,
    INTERFACE = 296,
    TYPE = 297,
    CONST = 298,
    PACKAGE = 299,
    IMPORT = 300,
    INT8 = 301,
    INT16 = 302,
    INT32 = 303,
    INT64 = 304,
    UINT8 = 305,
    UINT16 = 306,
    UINT32 = 307,
    UINT64 = 308,
    FLOAT32 = 309,
    FLOAT64 = 310,
    BOOL = 311,
    STRING = 312,
    TOKEN_NIL = 313,
    TOKEN_TRUE = 314,
    TOKEN_FALSE = 315,
    INTEGER = 316,
    HEX = 317,
    OCT = 318,
    FLOAT = 319,
    STRING_LITERAL = 320,
    ID = 321,
    OP = 322,
    IFX = 323,
    NO_CODE_BLOCK = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "yacc/koala.y" /* yacc.c:355  */

  char unary_op;
  char *ident;
  int64 ival;
  float64 fval;
  char *str_val;
  struct value *value;
  struct list_head *list;
  struct expr_node *expr_node;

#line 199 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "koala_yacc.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    87,    90,     2,
      75,    76,    79,    82,    72,    83,    71,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    70,
      88,    80,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,    92,    74,    84,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   133,   133,   137,   142,   146,   147,   151,   152,   153,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   173,   174,   175,   176,   180,   184,   188,
     189,   190,   191,   192,   193,   194,   198,   202,   203,   207,
     208,   214,   215,   216,   217,   218,   219,   220,   221,   225,
     226,   227,   231,   232,   236,   240,   241,   245,   246,   247,
     248,   249,   250,   254,   255,   259,   260,   264,   265,   271,
     272,   273,   274,   278,   279,   280,   281,   287,   288,   289,
     290,   294,   298,   299,   304,   305,   309,   310,   314,   317,
     318,   319,   323,   324,   328,   329,   333,   334,   338,   342,
     343,   344,   348,   349,   350,   354,   355,   359,   363,   364,
     369,   370,   371,   375,   376,   380,   381,   387,   390,   393,
     399,   402,   405,   411,   414,   417,   423,   428,   431,   436,
     441,   446,   454,   455,   456,   457,   461,   462,   466,   470,
     471,   475,   476,   482,   483,   488,   489,   490,   491,   492,
     493,   497,   498,   502,   508,   511,   517,   518,   522,   526,
     529,   532,   535,   557,   560,   563,   566,   572,   575,   578,
     581,   587,   590,   597,   601,   604,   605,   609,   612,   613,
     614,   615,   619,   622,   623,   627,   630,   634,   637,   641,
     644,   648,   651,   655,   658,   662,   668,   669,   673,   674,
     680,   681,   685,   686,   690,   691,   692,   696,   697,   698,
     699,   700,   701,   702,   703,   704,   705,   709,   712
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELLIPSIS", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "XOR_ASSIGN", "RIGHT_ASSIGN", "LEFT_ASSIGN", "EQ", "NE", "GE", "LE",
  "AND", "OR", "NOT", "SHIFT_LEFT", "SHIFT_RIGHT", "INC", "DEC",
  "TOKEN_THIS", "IF", "ELSE", "WHILE", "DO", "FOR", "IN", "SWITCH", "CASE",
  "BREAK", "CONTINUE", "DEFAULT", "VAR", "FUNC", "RETURN", "STRUCT",
  "INTERFACE", "TYPE", "CONST", "PACKAGE", "IMPORT", "INT8", "INT16",
  "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64", "FLOAT32",
  "FLOAT64", "BOOL", "STRING", "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE",
  "INTEGER", "HEX", "OCT", "FLOAT", "STRING_LITERAL", "ID", "OP", "IFX",
  "NO_CODE_BLOCK", "';'", "'.'", "','", "'{'", "'}'", "'('", "')'", "'['",
  "']'", "'*'", "'='", "':'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "$accept", "semicolons",
  "qualified_name", "type_name_list", "type_name", "primitive_type",
  "function_type", "array_type", "field_name", "program",
  "package_statement", "import_statements", "import_statement",
  "declarations", "type_declaration", "field_declarations",
  "field_declaration", "interface_function_declarations",
  "interface_function_declaration", "return_type_list",
  "parameter_type_list", "parameter_list", "function_declaration",
  "anonymous_function_declaration", "method_declaration", "method_name",
  "code_block", "local_variable_declaration_statements",
  "local_variable_declaration_statement", "statemnet",
  "selection_statement", "if_statement", "else_statemnet",
  "switch_statement", "iteration_statemnet", "for_init", "for_expr",
  "for_incr", "jump_statement", "variable_declaration", "variable_list",
  "variable_type", "primary_expression", "just_not_name",
  "complex_primary", "literal_name", "array_complex_primary",
  "array_access", "field_access", "method_call", "method_access",
  "initializer_expression", "struct_initializer", "field_initializer_list",
  "field_initializer", "postfix_expression", "real_postfix_expression",
  "argument_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression", "expression",
  "expressions", "expression_list", "assignment_expression",
  "assignment_variable_list", "assignment_variable",
  "compound_assignment_operator", "expression_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      59,    46,    44,   123,   125,    40,    41,    91,    93,    42,
      61,    58,    43,    45,   126,    33,    47,    37,    60,    62,
      38,    94,   124
};
# endif

#define YYPACT_NINF -276

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-276)))

#define YYTABLE_NINF -207

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     162,   -58,    20,    33,    42,    42,    46,   189,   189,  -276,
     -15,  -276,  -276,  -276,  -276,  -276,   825,   -51,    36,   860,
    -276,   182,   205,  -276,   189,   -15,  -276,   -15,  -276,  -276,
    -276,  -276,    54,    41,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,    70,    85,   603,    67,
    -276,  -276,  -276,  -276,     4,   103,    64,    66,   111,   114,
     120,  -276,   129,  -276,     3,  -276,   -15,   957,   128,  -276,
     127,   785,   785,  -276,   158,  -276,  -276,  -276,  -276,  -276,
    -276,   383,   785,  -276,  -276,  -276,  -276,   166,   135,  -276,
    -276,   146,   169,  -276,   143,   151,   194,   213,   220,  -276,
    -276,   254,  -276,  -276,   785,   102,   197,   260,     1,   272,
     207,   208,   210,   285,   288,  -276,  -276,   105,  -276,   603,
    -276,  1053,   892,   -14,   892,    96,   238,    -7,  -276,  -276,
     120,   989,  -276,   139,  -276,  1053,   126,  -276,  -276,    69,
     227,  -276,   228,   184,  -276,   187,   234,   785,   438,   247,
     785,   493,  -276,  -276,  -276,   785,   785,   785,   785,   785,
     785,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,  -276,   603,   192,  -276,   666,  1053,  -276,
     241,  -276,   250,   892,   241,  -276,   892,  1053,    17,  -276,
     242,    39,  -276,  -276,  -276,  1053,   989,  -276,   892,   142,
     785,   255,  -276,  -276,   245,   248,  -276,   191,   196,  -276,
     262,  -276,   249,   251,  -276,  -276,  -276,   102,   102,   197,
     197,   260,   260,   260,   260,     1,     1,   272,   207,   208,
     210,   285,  -276,  -276,   253,   258,   241,   263,   280,   548,
    -276,    26,   729,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,    44,   340,  -276,  -276,    61,   145,   286,   153,  -276,
    -276,  1053,   241,  -276,  -276,   241,  -276,   120,  -276,  -276,
    1021,  -276,  -276,  -276,  -276,   241,  -276,   892,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,   785,   785,   329,   306,
     785,  -276,   202,  -276,  -276,     0,   603,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,   785,  -276,  1053,
    -276,  -276,  -276,  -276,  -276,  1053,   925,   178,   179,  -276,
     241,  -276,   282,   283,   287,  -276,   757,  -276,   291,   292,
    -276,   126,   146,  -276,   251,  -276,  -276,  -276,   120,   925,
     925,  -276,   241,   241,   785,  -276,   785,   293,  -276,   241,
    -276,  -276,   120,  -276,   120,   342,  -276,   297,   298,  -276,
    -276,  -276,  -276,  -276,    15,   305,   241,  -276,  -276,  -276,
    -276,  -276
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    33,    34,    37,
      35,    41,    45,    47,    43,   113,     0,     0,     0,     0,
       3,     0,     0,     1,    30,    31,    38,    32,    42,    46,
      48,    44,     0,     0,    14,    15,    16,    17,    10,    11,
      12,    13,    18,    19,    20,    21,     0,     0,     0,     8,
     115,     7,   116,     9,     0,     0,     0,     0,     0,     0,
       0,     2,     0,    36,     0,    39,    29,     0,     0,   114,
       0,     0,     0,   120,     0,   129,   130,   131,   126,   127,
     128,     0,     0,   163,   164,   165,   166,   117,     0,   144,
     154,   119,   122,   118,     0,   123,   124,   125,     0,   197,
     143,   159,   155,   167,     0,   171,   174,   177,   182,   185,
     187,   189,   191,   193,   195,   196,   198,     0,   110,     0,
      81,     0,     0,     0,     0,     0,     0,     0,    51,     4,
       0,    23,    65,     0,    22,     0,   117,   160,   161,     0,
       3,   145,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,   156,   157,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,    67,     0,     0,    63,
       0,    69,     0,     0,     0,    77,     0,     0,     0,    52,
       0,     0,    55,    40,    24,     0,    25,    27,     0,     0,
       0,     0,   147,   146,   121,     0,   148,     0,     0,   138,
       0,   140,     0,   158,   168,   169,   170,   172,   173,   175,
     176,   181,   180,   178,   179,   183,   184,   186,   188,   190,
     192,   194,   199,   112,     0,     0,     0,     0,     0,     0,
      83,   117,     0,    84,    87,    89,    92,    93,    90,    91,
      86,   123,   124,   217,   218,     0,   202,     0,     0,     5,
      70,     0,     0,    71,    78,     0,    79,     0,    49,    53,
       0,    50,    56,    66,    26,     0,    73,     0,   153,    28,
     152,   136,   150,   149,   137,   139,     0,     0,     0,     0,
       0,   108,     0,    82,    85,     0,     0,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,    88,     0,
      64,    68,    72,    80,    54,     3,     0,     0,     0,    74,
       0,    75,     0,     0,     0,   104,     0,   103,     0,     0,
     109,   204,     0,   203,   200,   201,     6,    57,     0,     0,
       0,    76,     0,     0,     0,   106,     0,     0,   102,     0,
      58,    59,     0,    61,     0,    94,    99,     0,     0,   107,
     105,    98,    60,    62,     0,     0,     0,    97,    96,    95,
     100,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -276,   -20,    -4,  -276,    45,  -276,  -276,  -276,  -276,  -276,
    -276,   370,    18,    21,    77,  -276,   190,  -276,   188,  -118,
     110,   -54,    82,  -276,   112,  -276,    62,  -276,   141,  -276,
    -276,    22,  -276,  -276,  -276,  -276,  -276,  -276,  -276,    -6,
    -276,   365,  -276,    90,  -276,  -276,  -276,  -170,  -161,  -276,
    -276,  -276,  -276,   239,   193,  -276,  -276,  -276,   -61,  -276,
     130,   133,    -2,   134,   224,   226,   223,   225,   229,  -276,
     -77,   235,   -72,  -276,  -276,   104,  -276,  -275
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,   136,   258,   179,    51,    52,    53,   142,     6,
       7,     8,     9,    10,    11,   188,   189,   191,   192,   180,
     133,   123,    12,    89,    13,    18,   181,   242,   243,   244,
     245,   246,   369,   247,   248,   326,   346,   358,   249,    14,
      16,    54,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   143,   144,   101,   102,   212,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   254,   255,   256,   307,   257
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    65,   125,    31,   146,   184,   251,    15,   145,
     137,   138,    49,   194,   328,    49,   252,   162,   163,    31,
      55,    31,     1,     2,    56,    73,    26,     3,    25,    27,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     128,   234,    26,   154,    87,    66,    23,   175,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   182,   190,
      31,    50,   183,    49,    50,   262,    20,   134,   265,   129,
     205,   359,   251,   210,   118,    82,   208,    87,   274,   213,
     275,   252,   130,   187,   119,   199,    17,    28,   177,   164,
     165,   268,    29,    88,   214,   215,   216,    62,  -204,    19,
     253,  -142,    28,   147,    28,   190,  -204,    29,    20,    29,
     193,    57,   132,   271,    68,    87,  -205,    49,    49,   251,
      49,  -133,    30,   278,  -205,   251,    88,    49,   252,    67,
     121,    49,   121,   295,   252,   121,    69,    30,    62,    30,
     122,   296,   124,    28,    87,   198,    70,    87,    29,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   320,
     221,   222,   223,   224,    88,   253,   176,   292,   182,   120,
      87,   250,   186,   241,    49,   173,   251,   174,    30,    49,
     197,   155,    49,    49,   126,   252,   185,   127,   156,   157,
      61,    49,    49,    88,    49,   129,    88,    62,   338,     1,
       2,  -142,   134,   147,     3,   135,     4,     5,   148,   322,
     323,   195,   253,   329,   182,   196,   318,   149,   277,    88,
     150,   352,   354,   259,   334,   309,     1,     2,  -133,   310,
     335,     3,   267,   139,     5,    87,   250,    62,   241,    -8,
     273,  -142,   260,   147,  -141,   263,   264,   314,   266,   347,
     195,   182,    61,    62,   339,   340,   201,    49,   202,   174,
     276,   203,   233,   201,   174,   282,    49,   357,   174,   253,
     283,  -134,   330,    49,   174,    61,    64,   152,   153,   158,
     159,   160,   161,   327,    88,   241,   166,   167,   217,   218,
    -135,   331,    87,   219,   220,   151,   337,   168,   288,   169,
     225,   226,   170,   171,   187,    49,   311,   172,   -28,   200,
     204,    49,    49,   209,   177,   132,   261,   270,   350,   351,
     353,   279,  -132,   174,   312,   285,   281,   313,   286,    71,
      72,    73,   362,   287,   363,    49,    49,   319,   289,   321,
     284,    88,   241,     1,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,   336,   290,   308,   324,   342,   343,
     176,   348,   344,   360,    75,    76,    77,    78,   349,   364,
      79,    80,    20,   365,   366,   370,   325,    24,   269,   272,
     317,    82,   341,   294,    60,   332,   368,   207,    83,    84,
      85,    86,   227,   229,   280,   228,   230,     0,     0,   333,
       0,   231,     0,     0,   355,   356,    71,    72,    73,   232,
       0,   361,  -206,     0,     0,     0,     0,  -134,     0,     0,
    -206,    74,     0,     0,    33,     0,   367,     0,   371,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    75,    76,    77,    78,     0,     0,    79,    80,   140,
       0,     0,     0,     0,     0,     0,    81,   141,    82,     0,
      47,    71,    72,    73,     0,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,    33,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    75,    76,    77,    78,
       0,     0,    79,    80,   140,     0,     0,     0,     0,     0,
       0,    81,   206,    82,     0,    47,    71,    72,    73,     0,
      83,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,    33,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    75,    76,    77,    78,     0,     0,    79,    80,    20,
       0,     0,     0,     0,     0,     0,    81,     0,    82,   211,
      47,    71,    72,    73,     0,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,    33,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    75,    76,    77,    78,
       0,     0,    79,    80,    20,     0,     0,     0,   291,     0,
       0,    81,     0,    82,     0,    47,    71,    72,    73,     0,
      83,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,    33,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    75,    76,    77,    78,     0,     0,    79,    80,    20,
       0,     0,     0,     0,     0,     0,    81,     0,    82,     0,
      47,     0,     0,     0,     0,    83,    84,    85,    86,    71,
      72,    73,   234,     0,   235,   236,   237,     0,   238,     0,
       0,     0,     0,     1,     0,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,     0,     0,
      79,    80,    20,     0,     0,     0,     0,     0,     0,     0,
     240,    82,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,    71,    72,    73,   234,     0,   235,   236,   237,
       0,   238,     0,     0,     0,     0,     1,     0,   239,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,     0,     0,    75,    76,    77,
      78,     0,     0,    79,    80,    20,     0,     0,     0,     0,
       0,     0,     0,   293,    82,     0,     0,     0,    71,    72,
      73,    83,    84,    85,    86,    75,    76,    77,    78,     0,
       0,    79,    80,    20,     0,     0,     0,   345,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    75,    76,    77,    78,     0,     0,    79,
      80,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,    32,     0,     0,    33,    83,    84,    85,
      86,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,    46,    32,     0,
      58,    59,    47,     0,     0,    48,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    47,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,   177,    33,   178,     0,    47,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,    61,     0,     0,    33,     0,
     178,     0,    47,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
      33,     0,     0,   131,    47,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,    33,     0,   178,     0,    47,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,   315,     0,     0,
       0,     0,     0,     0,    33,     0,     0,   316,    47,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       4,     5,    22,    57,    10,    82,   124,   177,    66,    81,
      71,    72,    16,   131,   289,    19,   177,    16,    17,    25,
      71,    27,    37,    38,    75,    25,     8,    42,     7,     8,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      60,    26,    24,   104,    48,    24,     0,   119,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    72,    66,
      66,    16,    76,    67,    19,   183,    66,    74,   186,    66,
     147,   346,   242,   150,    70,    75,   148,    81,   196,   151,
     198,   242,    79,    66,    80,   139,    66,    10,    73,    88,
      89,    74,    10,    48,   155,   156,   157,    71,    72,    66,
     177,    75,    25,    77,    27,    66,    80,    25,    66,    27,
     130,    75,    67,    74,    73,   119,    72,   121,   122,   289,
     124,    77,    10,   200,    80,   295,    81,   131,   289,    75,
      66,   135,    66,    72,   295,    66,    66,    25,    71,    27,
      76,    80,    76,    66,   148,    76,    61,   151,    66,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   277,
     162,   163,   164,   165,   119,   242,   121,   239,    72,    66,
     174,   177,    76,   177,   178,    70,   346,    72,    66,   183,
     135,    79,   186,   187,    73,   346,   124,    73,    86,    87,
      70,   195,   196,   148,   198,    66,   151,    71,   316,    37,
      38,    75,    74,    77,    42,    78,    44,    45,    73,   286,
     287,    72,   289,   290,    72,    76,   270,    71,    76,   174,
      77,   339,   340,   178,   296,    72,    37,    38,    77,    76,
     307,    42,   187,    75,    45,   239,   242,    71,   242,    73,
     195,    75,   180,    77,    75,   183,   184,   267,   186,   326,
      72,    72,    70,    71,    76,    76,    72,   261,    74,    72,
     198,    74,    70,    72,    72,    74,   270,   344,    72,   346,
      74,    77,    70,   277,    72,    70,    71,    23,    24,    82,
      83,    21,    22,   289,   239,   289,    14,    15,   158,   159,
      77,   295,   296,   160,   161,    75,   316,    90,   236,    91,
     166,   167,    92,    18,    66,   309,   261,    19,    81,    81,
      76,   315,   316,    66,    73,   270,    66,    75,   338,   339,
     340,    66,    77,    72,   262,    76,    78,   265,    75,    23,
      24,    25,   352,    75,   354,   339,   340,   275,    75,   277,
      78,   296,   346,    37,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   309,    75,    70,    28,    76,    76,
     315,    70,    75,    70,    58,    59,    60,    61,    76,    27,
      64,    65,    66,    76,    76,    70,    70,     7,   188,   191,
     270,    75,   320,   242,    19,   295,   364,   148,    82,    83,
      84,    85,   168,   170,   201,   169,   171,    -1,    -1,   295,
      -1,   172,    -1,    -1,   342,   343,    23,    24,    25,   174,
      -1,   349,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    38,    -1,    -1,    41,    -1,   364,    -1,   366,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      77,    23,    24,    25,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    77,    23,    24,    25,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    76,
      77,    23,    24,    25,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    23,    24,    25,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    23,
      24,    25,    26,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    23,    24,    25,    26,    -1,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    23,    24,
      25,    82,    83,    84,    85,    58,    59,    60,    61,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    58,    59,    60,    61,    -1,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    38,    -1,    -1,    41,    82,    83,    84,
      85,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    38,    -1,
      40,    41,    77,    -1,    -1,    80,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    77,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    41,    75,    -1,    77,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    41,    -1,
      75,    -1,    77,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    76,    77,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    75,    -1,    77,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    76,    77,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   102,   103,   104,   105,
     106,   107,   115,   117,   132,    66,   133,    66,   118,    66,
      66,    95,    95,     0,   104,   106,   105,   106,   107,   115,
     117,   132,    38,    41,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    72,    77,    80,    95,
      97,    98,    99,   100,   134,    71,    75,    75,    40,    41,
     134,    70,    71,    94,    71,    94,   106,    75,    73,    66,
      61,    23,    24,    25,    38,    58,    59,    60,    61,    64,
      65,    73,    75,    82,    83,    84,    85,    95,    97,   116,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   148,   149,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,    70,    80,
      66,    66,    76,   114,    76,   114,    73,    73,    94,    66,
      79,    76,    97,   113,    74,    78,    95,   151,   151,    75,
      66,    74,   101,   146,   147,   165,   163,    77,    73,    71,
      77,    75,    23,    24,   151,    79,    86,    87,    82,    83,
      21,    22,    16,    17,    88,    89,    14,    15,    90,    91,
      92,    18,    19,    70,    72,   165,    97,    73,    75,    97,
     112,   119,    72,    76,   112,   119,    76,    66,   108,   109,
      66,   110,   111,    94,   112,    72,    76,    97,    76,   114,
      81,    72,    74,    74,    76,   163,    74,   146,   165,    66,
     163,    76,   150,   165,   151,   151,   151,   153,   153,   154,
     154,   155,   155,   155,   155,   156,   156,   157,   158,   159,
     160,   161,   164,    70,    26,    28,    29,    30,    32,    39,
      74,    95,   120,   121,   122,   123,   124,   126,   127,   131,
     132,   140,   141,   163,   166,   167,   168,   170,    96,    97,
     119,    66,   112,   119,   119,   112,   119,    97,    74,   109,
      75,    74,   111,    97,   112,   112,   119,    76,   163,    66,
     147,    78,    74,    74,    78,    76,    75,    75,   119,    75,
      75,    70,   165,    74,   121,    72,    80,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   169,    70,    72,
      76,    97,   119,   119,    94,    66,    76,   113,   114,   119,
     112,   119,   163,   163,    28,    70,   128,   132,   170,   163,
      70,    95,   136,   168,   165,   163,    97,    94,   112,    76,
      76,   119,    76,    76,    75,    70,   129,   163,    70,    76,
      94,    94,   112,    94,   112,   119,   119,   163,   130,   170,
      70,   119,    94,    94,    27,    76,    76,   119,   124,   125,
      70,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    95,    96,    96,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,    99,   100,   101,   102,
     102,   102,   102,   102,   102,   102,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   107,
     107,   107,   108,   108,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   116,   116,   116,   116,   117,   117,   117,
     117,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   127,
     127,   127,   128,   128,   128,   129,   129,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   136,   137,   137,   137,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   140,   140,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   148,   148,   149,   149,   150,   151,
     151,   151,   151,   152,   152,   152,   152,   153,   153,   153,
     153,   154,   154,   154,   155,   155,   155,   156,   156,   156,
     156,   156,   157,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   168,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     4,     5,     4,     1,     3,
       2,     2,     2,     1,     1,     1,     3,     1,     2,     3,
       5,     1,     2,     1,     2,     1,     2,     1,     2,     6,
       6,     4,     1,     2,     3,     1,     2,     4,     5,     5,
       6,     5,     6,     1,     3,     1,     3,     2,     4,     5,
       6,     6,     7,     4,     5,     5,     6,     5,     6,     6,
       7,     3,     3,     2,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     5,     7,     1,     1,     5,     5,
       7,     7,     2,     1,     1,     2,     1,     1,     2,     3,
       4,     5,     6,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     4,     4,     3,     4,
       3,     1,     1,     1,     1,     2,     3,     3,     3,     4,
       4,     1,     3,     3,     1,     1,     2,     2,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 137 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(ID);
    STRING_SET(node->s, (yyvsp[0].ident));
    (yyval.expr_node) = node;
  }
#line 1750 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 314 "yacc/koala.y" /* yacc.c:1646  */
    {
    expr_tree_print((yyvsp[-1].expr_node));
  }
#line 1758 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 117:
#line 387 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1766 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 390 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1774 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 393 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1782 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 399 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1790 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 402 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1798 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 405 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1806 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 411 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1814 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 414 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1822 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 125:
#line 417 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1830 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 126:
#line 423 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(INTEGER);
    node->i = (yyvsp[0].ival);
    (yyval.expr_node) = node;
  }
#line 1840 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 127:
#line 428 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1848 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 128:
#line 431 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(STRING_LITERAL);
    STRING_SET(node->s, (yyvsp[0].str_val));
    (yyval.expr_node) = node;
  }
#line 1858 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 129:
#line 436 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(TOKEN_NIL);
    node->f = 0.0;
    (yyval.expr_node) = node;
  }
#line 1868 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 130:
#line 441 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(BOOL);
    node->b = 1;
    (yyval.expr_node) = node;
  }
#line 1878 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 131:
#line 446 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(BOOL);
    node->b = 0;
    (yyval.expr_node) = node;
  }
#line 1888 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 508 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1896 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 511 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1904 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 526 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1912 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 529 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1920 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 532 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1928 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 535 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].unary_op) == '+') {
      (yyval.expr_node) = (yyvsp[0].expr_node);
    } else if ((yyvsp[-1].unary_op) == '-') {
      (yyvsp[0].expr_node)->i = - (yyvsp[0].expr_node)->i;
      (yyval.expr_node) = (yyvsp[0].expr_node);
    } else if ((yyvsp[-1].unary_op) == '~') {
      (yyvsp[0].expr_node)->i = ~(yyvsp[0].expr_node)->i;
      (yyval.expr_node) = (yyvsp[0].expr_node);
    } else {
      if ((yyvsp[0].expr_node)->type == BOOL) {
        (yyvsp[0].expr_node)->b = !(yyvsp[0].expr_node)->b;
        (yyval.expr_node) = (yyvsp[0].expr_node);
      } else {
        yyerror("not a bool type, cannot NOT operation\n");
        exit(-1);
      }
    }
  }
#line 1952 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 557 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '+';
  }
#line 1960 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 560 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '-';
  }
#line 1968 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 563 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '~';
  }
#line 1976 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 566 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '!';
  }
#line 1984 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 572 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1992 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 575 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2000 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 578 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2008 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 581 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2016 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 587 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2024 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 590 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(OP);
    node->op = '+';
    node->left = (yyvsp[-2].expr_node);
    node->right = (yyvsp[0].expr_node);
    (yyval.expr_node) = node;
  }
#line 2036 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 597 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2042 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 601 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2050 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 604 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2056 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 605 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2062 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 609 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2070 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 612 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2076 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 613 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2082 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 614 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2088 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 615 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 619 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2102 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 622 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2108 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 623 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2114 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 627 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2122 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 630 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2128 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 634 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2136 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 637 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2142 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 641 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2150 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 644 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2156 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 648 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2164 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 651 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2170 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 655 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2178 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 658 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2184 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 662 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2192 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 709 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2200 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 712 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2208 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2212 "koala_yacc.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 719 "yacc/koala.y" /* yacc.c:1906  */


extern char *yytext;

int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

extern FILE *yyin;

int main(int argc, char *argv[])
{
  int i;
  printf("%d\n", argc);
  for (i = 0; i < argc; i++)
  {
    printf("%s\n", argv[i]);
  }

  koala_compiler_init();
  yyin = fopen(argv[1], "r");
  yyparse();
}

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
    ANY_TYPE = 313,
    TOKEN_NULL = 314,
    TOKEN_TRUE = 315,
    TOKEN_FALSE = 316,
    INTEGER = 317,
    HEX = 318,
    OCT = 319,
    FLOAT = 320,
    STRING_LITERAL = 321,
    ID = 322,
    IFX = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "yacc/koala.y" /* yacc.c:355  */

  char *ident;
  uint64 ival;
  double fval;
  char *str_val;
  struct value *value;
  struct list_head *list;

#line 196 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "koala_yacc.c" /* yacc.c:358  */

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
#define YYFINAL  98
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    85,    88,     2,
      72,    73,    76,    80,    71,    81,    70,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    69,
      86,    91,    87,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    90,    78,    82,     2,     2,     2,
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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   129,   129,   130,   134,   135,   139,   140,   144,   145,
     146,   147,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   167,   168,   169,   170,   174,
     178,   182,   183,   184,   185,   186,   187,   188,   192,   196,
     197,   201,   202,   208,   209,   216,   217,   221,   222,   223,
     227,   228,   232,   236,   237,   241,   242,   243,   244,   245,
     246,   250,   251,   255,   256,   260,   261,   384,   385,   389,
     390,   391,   395,   396,   400,   401,   402,   403,   407,   408,
     409,   410,   411,   412,   416,   417,   418,   419,   423,   424,
     428,   432,   433,   437,   438,   444,   449,   450,   451,   452,
     453,   454,   458,   459,   463,   469,   470,   474,   475,   479,
     483,   484,   485,   486,   490,   491,   492,   493,   497,   498,
     499,   500,   504,   505,   506,   510,   511,   512,   516,   517,
     518,   519,   520,   524,   525,   526,   530,   531,   535,   536,
     540,   541,   545,   546,   550,   551,   555,   559,   560,   566,
     567,   571,   572,   576,   577,   578,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   595,   596
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
  "FLOAT64", "BOOL", "STRING", "ANY_TYPE", "TOKEN_NULL", "TOKEN_TRUE",
  "TOKEN_FALSE", "INTEGER", "HEX", "OCT", "FLOAT", "STRING_LITERAL", "ID",
  "IFX", "';'", "'.'", "','", "'('", "')'", "'['", "']'", "'*'", "'{'",
  "'}'", "':'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'&'", "'^'", "'|'", "'='", "$accept", "semicolons", "qualified_name",
  "type_name_list", "type_name", "primitive_type", "function_type",
  "array_type", "field_name", "program", "package_statement",
  "import_statements", "import_statement", "declarations",
  "type_declaration", "field_declarations", "field_declaration",
  "interface_function_declarations", "interface_function_declaration",
  "return_type_list", "parameter_type_list", "parameter_list",
  "primary_expression", "just_not_name", "complex_primary",
  "complex_primary_no_parenthesis", "literal_name",
  "array_complex_primary", "array_access", "field_access", "method_call",
  "method_access", "initializer_expression", "struct_initializer",
  "field_initializer_list", "field_initializer", "postfix_expression",
  "real_postfix_expression", "argument_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression", "expression",
  "expression_list", "assignment_expression", "assignment_variable_list",
  "assignment_variable", "compound_assignment_operator",
  "expression_statement", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,    59,
      46,    44,    40,    41,    91,    93,    42,   123,   125,    58,
      43,    45,   126,    33,    47,    37,    60,    62,    38,    94,
     124,    61
};
# endif

#define YYPACT_NINF -201

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-201)))

#define YYTABLE_NINF -156

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     325,   601,   601,  -201,   -67,   -45,   -12,   -12,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,   601,     9,
     417,  -201,  -201,  -201,  -201,   199,   -50,  -201,  -201,  -201,
      40,   371,   371,  -201,   463,  -201,  -201,    -2,  -201,    23,
    -201,    34,   248,   273,    37,    41,  -201,  -201,     6,  -201,
    -201,   601,   -48,    -5,    76,     3,   106,    36,    16,    28,
      97,   107,    61,    61,   -53,   323,  -201,   -24,    72,    73,
    -201,  -201,   699,   639,    53,    59,    60,    75,    78,  -201,
      80,   -22,  -201,  -201,    -8,    88,   601,   509,  -201,   371,
     463,  -201,   463,  -201,  -201,    93,   601,   555,  -201,  -201,
    -201,   601,   601,   601,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   601,   601,  -201,
      92,    92,   249,   601,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,   601,   729,    94,  -201,     8,    85,
      86,    61,    92,   -44,    92,    91,   789,   601,    99,  -201,
     601,  -201,  -201,    95,  -201,    -6,    -4,   463,  -201,   100,
    -201,    96,   101,  -201,  -201,  -201,   -48,   -48,    -5,    -5,
      76,    76,    76,    76,     3,     3,   106,    36,    16,    28,
      97,  -201,   -24,    -2,  -201,   101,  -201,   789,  -201,  -201,
     789,   729,   113,   143,    92,    61,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,    13,  -201,  -201,  -201,
     789,   -43,  -201,   116,   -35,  -201,    92,   789,  -201,    61,
    -201,  -201,   114,  -201,  -201,  -201,    92,   759,   789,   669,
      30,    33,  -201,    92,    61,   669,   118,   669,    92,    92,
      61,   789,    92,    61,    92,  -201,    92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    69,     0,     0,     0,     0,    16,    17,
      18,    19,    12,    13,    14,    15,    20,    21,    22,    23,
      24,    81,    82,    83,    78,    79,    80,     4,     0,     0,
       0,   114,   115,   116,   117,    67,     0,     8,    10,    11,
       0,    35,    36,    39,    37,    43,   105,    68,    71,    73,
      74,     0,    75,    76,    77,     0,    70,    95,   110,   106,
     118,     0,   122,   125,   128,   133,   136,   138,   140,   142,
     144,   146,     0,     0,     0,   151,    45,    67,    75,    76,
     111,   112,     0,     0,     0,     0,     0,     0,     4,    96,
       0,     0,   102,   147,     0,     0,     0,     0,     1,    32,
      33,    40,    34,    44,    46,     0,     0,     0,   107,   108,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
     166,   167,     0,     0,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,     0,    25,     9,    63,     0,     0,
       0,     0,    38,     0,    41,    72,     0,     0,     0,    98,
       0,    97,     5,     0,    99,     0,     0,    31,    90,     0,
      92,     0,   109,   119,   120,   121,   123,   124,   126,   127,
     132,   131,   129,   130,   134,   135,   137,   139,   141,   143,
     145,     3,   153,     0,   152,   149,   150,     0,    61,    26,
       0,    27,     0,     0,    49,     0,    29,   104,    30,   103,
     148,    88,   101,   100,    89,    91,     0,     6,    64,    28,
       0,     0,    50,     0,     0,    53,    42,     0,    62,     0,
      47,    51,     0,    48,    54,     7,    52,     0,     4,     0,
       0,     0,    65,    55,     0,     0,     0,     0,    56,    57,
       0,     0,    59,     0,    58,    66,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,   -71,     0,  -201,   -49,  -201,  -201,  -201,  -201,  -201,
    -201,   146,   -30,   -26,   -40,  -201,   -29,  -201,   -33,  -200,
     -42,  -201,  -201,    62,  -201,  -201,  -201,  -201,    10,    17,
    -201,  -201,  -201,  -201,   102,    35,  -201,  -201,  -201,    24,
    -201,    25,    27,   -27,    31,    89,    90,    98,    87,   103,
    -201,   -19,   -76,  -201,  -201,    84,  -201,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   130,    77,   216,    36,    37,    38,    39,    90,    40,
      41,    42,    43,    44,    45,   221,   222,   224,   225,   199,
     148,   241,    46,    47,    48,    49,    50,    51,    78,    79,
      54,    55,    56,    57,    91,    92,    58,    59,   171,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    94,    73,    74,    75,   144,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,   219,   131,   223,   103,    82,    84,    85,   104,    86,
      52,    93,   101,   152,   154,   100,   102,    53,   132,   118,
     119,   166,    83,   162,   220,    80,    81,    97,   111,   108,
     109,   172,   205,   147,   151,   230,   112,   113,   133,   244,
      98,    35,    35,   233,    35,   250,    95,   253,   -94,   158,
      96,    52,    52,    -9,    52,    27,   159,   195,    53,    53,
     103,    53,   103,   160,   104,   158,   104,   160,   105,   101,
     161,    87,   212,   167,   213,   114,   115,   163,    93,   200,
     204,   201,   146,   146,   227,   110,   228,   169,    93,   120,
     121,   180,   181,   182,   183,   -93,   198,   116,   117,    35,
      35,   200,    35,   245,   246,   125,   247,   206,   106,    52,
      52,   -87,    52,   107,    93,   127,    53,    53,   126,    53,
     122,   123,   129,    95,   124,   196,   128,   103,   129,   153,
     129,   104,   192,   155,   226,   173,   174,   175,   207,   176,
     177,   210,    52,   178,   179,   146,   -85,   -86,   217,    53,
     156,   218,   198,   184,   185,   162,   146,   -30,   236,   157,
     168,   191,   202,   203,    95,   -84,   208,    35,   243,   215,
     211,   229,   160,   248,   249,   214,   252,    52,   235,   254,
     220,   223,   256,   232,    53,   251,   237,    99,   147,   242,
     198,   234,   231,   209,   193,   240,   198,   146,   198,   165,
     146,   146,   255,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,   186,   189,   187,   194,     0,     0,     0,
     146,     0,     0,     0,   188,     0,     0,   146,     0,     0,
       0,   190,     0,     0,     0,     0,     0,   146,   146,   146,
       0,     0,     0,     0,     0,   146,     0,   146,     0,     0,
       0,   146,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,     0,     0,     0,     0,     0,     0,     0,    95,
    -153,   -94,     0,    96,     3,     0,    -9,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,     4,     0,     0,
    -153,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,    25,    26,    27,     0,     0,  -154,
       0,    28,   -85,    29,     0,     0,    30,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     0,     0,  -154,
       0,     0,     0,     0,  -155,     0,     0,   -86,     1,     2,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,  -155,     0,     0,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
      25,    26,    27,     0,     1,     2,     3,    28,     0,    29,
       0,     0,    30,     0,     0,    31,    32,    33,    34,     4,
       0,     0,     0,     5,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    25,    26,    27,     0,
       1,     2,     3,    28,     0,    29,     0,     0,    30,     0,
       0,    31,    32,    33,    34,     4,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,    25,    26,    88,     0,     1,     2,     3,    28,
       0,    29,     0,     0,    30,    89,     0,    31,    32,    33,
      34,     4,     0,     0,     0,     5,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,    25,    26,
      27,     0,     1,     2,     3,    28,     0,    29,     0,     0,
      30,     0,     0,    31,    32,    33,    34,     4,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,    25,    26,    88,     0,     1,     2,
       3,    28,     0,    29,     0,     0,    30,   164,     0,    31,
      32,    33,    34,     4,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
      25,    26,    27,     0,     1,     2,     3,    28,   170,    29,
       0,     0,    30,     0,     0,    31,    32,    33,    34,     4,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    25,    26,    27,     0,
       0,     0,     0,    28,     0,    29,     0,     4,    30,   149,
     150,    31,    32,    33,    34,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     4,     0,     0,
       0,     0,     0,    29,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     4,   129,     0,
       0,   197,     0,    29,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     4,     0,     0,
       0,     0,   145,    29,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     4,     0,     0,
       0,   197,     0,    29,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,   238,     4,     0,     0,
       0,     0,   239,    29,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
       0,   201,    73,    38,    44,    72,     6,     7,    44,    28,
       0,    30,    42,    84,    85,    41,    42,     0,    71,    16,
      17,    97,    67,    67,    67,     1,     2,    77,    76,    23,
      24,   107,    76,    82,    83,    78,    84,    85,    91,   239,
       0,    41,    42,    78,    44,   245,    70,   247,    72,    71,
      74,    41,    42,    77,    44,    67,    78,   133,    41,    42,
     100,    44,   102,    71,   100,    71,   102,    71,    70,    99,
      78,    62,    78,    99,    78,    80,    81,    96,    97,    71,
     151,    73,    82,    83,    71,    61,    73,   106,   107,    86,
      87,   118,   119,   120,   121,    72,   145,    21,    22,    99,
     100,    71,   102,    73,    71,    89,    73,   156,    74,    99,
     100,    74,   102,    72,   133,    18,    99,   100,    90,   102,
      14,    15,    69,    70,    88,   144,    19,   167,    69,    70,
      69,   167,   132,    73,   205,   111,   112,   113,   157,   114,
     115,   160,   132,   116,   117,   145,    74,    74,   197,   132,
      75,   200,   201,   122,   123,    67,   156,    79,   229,    79,
      67,    69,    77,    77,    70,    74,    67,   167,   239,    73,
      75,   220,    71,   244,   245,    75,   247,   167,   227,   250,
      67,    38,   253,    67,   167,    67,    72,    41,   237,   238,
     239,   224,   221,   158,   132,   237,   245,   197,   247,    97,
     200,   201,   251,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   124,   127,   125,   132,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   126,    -1,    -1,   227,    -1,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,   237,   238,   239,
      -1,    -1,    -1,    -1,    -1,   245,    -1,   247,    -1,    -1,
      -1,   251,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    74,    25,    -1,    77,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    38,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    71,
      -1,    72,    74,    74,    -1,    -1,    77,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    91,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    -1,    23,    24,    25,    72,    -1,    74,
      -1,    -1,    77,    -1,    -1,    80,    81,    82,    83,    38,
      -1,    -1,    -1,    42,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    67,    -1,
      23,    24,    25,    72,    -1,    74,    -1,    -1,    77,    -1,
      -1,    80,    81,    82,    83,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    67,    -1,    23,    24,    25,    72,
      -1,    74,    -1,    -1,    77,    78,    -1,    80,    81,    82,
      83,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      67,    -1,    23,    24,    25,    72,    -1,    74,    -1,    -1,
      77,    -1,    -1,    80,    81,    82,    83,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    67,    -1,    23,    24,
      25,    72,    -1,    74,    -1,    -1,    77,    78,    -1,    80,
      81,    82,    83,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    -1,    23,    24,    25,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    80,    81,    82,    83,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    38,    77,    40,
      41,    80,    81,    82,    83,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    38,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    38,    69,    -1,
      -1,    72,    -1,    74,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    38,    -1,    -1,
      -1,    -1,    73,    74,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    38,    -1,    -1,
      -1,    72,    -1,    74,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    38,    -1,    -1,
      -1,    -1,    73,    74,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    24,    25,    38,    42,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    65,    66,    67,    72,    74,
      77,    80,    81,    82,    83,    94,    96,    97,    98,    99,
     101,   102,   103,   104,   105,   106,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   128,   129,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   145,   146,   147,   149,    94,   120,   121,
     131,   131,    72,    67,    94,    94,   143,    62,    67,    78,
     100,   126,   127,   143,   144,    70,    74,    77,     0,   103,
     105,   104,   105,   106,   149,    70,    74,    72,    23,    24,
     131,    76,    84,    85,    80,    81,    21,    22,    16,    17,
      86,    87,    14,    15,    88,    89,    90,    18,    19,    69,
      93,    93,    71,    91,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   148,    73,    94,    96,   112,    40,
      41,    96,    93,    70,    93,    73,    75,    79,    71,    78,
      71,    78,    67,   143,    78,   126,   144,   105,    67,   143,
      73,   130,   144,   131,   131,   131,   133,   133,   134,   134,
     135,   135,   135,   135,   136,   136,   137,   138,   139,   140,
     141,    69,    94,   115,   147,   144,   143,    72,    96,   111,
      71,    73,    77,    77,    93,    76,    96,   143,    67,   127,
     143,    75,    78,    78,    75,    73,    95,    96,    96,   111,
      67,   107,   108,    38,   109,   110,    93,    71,    73,    96,
      78,   108,    67,    78,   110,    96,    93,    72,    67,    73,
     112,   113,    96,    93,   111,    73,    71,    73,    93,    93,
     111,    67,    93,   111,    93,    96,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    99,
     100,   101,   101,   101,   101,   101,   101,   101,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   106,   106,   106,
     107,   107,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   120,   120,
     121,   122,   122,   123,   123,   124,   125,   125,   125,   125,
     125,   125,   126,   126,   127,   128,   128,   129,   129,   130,
     131,   131,   131,   131,   132,   132,   132,   132,   133,   133,
     133,   133,   134,   134,   134,   135,   135,   135,   136,   136,
     136,   136,   136,   137,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     4,     5,     4,
       1,     3,     2,     2,     2,     1,     1,     1,     3,     1,
       2,     3,     5,     1,     2,     1,     2,     6,     6,     4,
       1,     2,     3,     1,     2,     5,     6,     6,     7,     6,
       7,     1,     3,     1,     3,     2,     4,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     4,     4,
       3,     4,     3,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     1,     3,     3,     1,     1,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     3,     3,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2
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
        case 78:
#line 407 "yacc/koala.y" /* yacc.c:1646  */
    {printf("%llu\n", (yyvsp[0].ival));}
#line 1627 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 497 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1633 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 498 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1639 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 499 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1645 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 500 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1651 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 504 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1657 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 505 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1663 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 506 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1669 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 125:
#line 510 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1675 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 126:
#line 511 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1681 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 127:
#line 512 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1687 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 128:
#line 516 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1693 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 129:
#line 517 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1699 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 130:
#line 518 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1705 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 131:
#line 519 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1711 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 132:
#line 520 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1717 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 524 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1723 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 525 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1729 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 526 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1735 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 530 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1741 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 531 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1747 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 535 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1753 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 536 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1759 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 540 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1765 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 541 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1771 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 545 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1777 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 546 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1783 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 550 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1789 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 551 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1795 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 1799 "koala_yacc.c" /* yacc.c:1646  */
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
#line 646 "yacc/koala.y" /* yacc.c:1906  */


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

int main()
{
  koala_compiler_init();
  yyin = fopen("./test.koala", "r");
  yyparse();
}

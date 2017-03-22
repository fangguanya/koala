/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

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
    IDENTIFIER = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "yacc/koala.y" /* yacc.c:355  */

  string identifier;
  int primitive_type;
  char *ident;
  uint64 ival;
  float64 fval;
  string str_val;
  linked_list_t *linked_list;
  type_info_t *new_type_info;
  func_proto_type_t *func_proto_type;
  array_type_t *array_type;
  expr_t *expression;

#line 199 "koala_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "koala_yacc.c" /* yacc.c:358  */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1091

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  371

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,     2,     2,    84,    87,     2,
      70,    71,    76,    79,    67,    80,    75,    83,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    74,
      85,    77,    86,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    89,    69,    81,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   136,   136,   147,   150,   156,   159,   162,   165,   168,
     174,   177,   180,   183,   186,   189,   192,   195,   198,   201,
     204,   207,   213,   216,   219,   222,   228,   234,   235,   239,
     240,   241,   242,   243,   244,   245,   249,   253,   254,   258,
     259,   265,   266,   267,   268,   269,   270,   271,   272,   276,
     277,   278,   282,   283,   287,   288,   292,   293,   294,   295,
     296,   297,   301,   302,   308,   309,   310,   311,   316,   317,
     318,   319,   326,   327,   328,   329,   333,   336,   341,   342,
     346,   347,   353,   357,   358,   359,   363,   364,   368,   369,
     373,   374,   378,   382,   383,   384,   388,   389,   390,   394,
     395,   399,   403,   404,   412,   415,   418,   424,   429,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   487,   488,   492,   493,   499,   502,   505,   511,   514,
     517,   520,   523,   526,   532,   535,   543,   551,   554,   557,
     560,   566,   567,   571,   574,   582,   590,   593,   596,   599,
     605,   608,   611,   614,   620,   623,   626,   632,   635,   638,
     644,   647,   650,   653,   656,   662,   665,   668,   674,   677,
     683,   686,   692,   695,   701,   704,   710,   713,   719,   725,
     727,   731,   732,   738,   739,   743,   744,   748,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   767,   772
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
  "INTEGER", "HEX", "OCT", "FLOAT", "STRING_LITERAL", "IDENTIFIER", "','",
  "'{'", "'}'", "'('", "')'", "'['", "']'", "';'", "'.'", "'*'", "'='",
  "':'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "$accept", "qualified_name", "type_name_list", "type_name",
  "primitive_type", "function_type", "array_type", "return_type_list",
  "program", "package_statement", "import_statements", "import_statement",
  "declarations", "type_declaration", "field_declarations",
  "interface_function_declarations", "interface_function_declaration",
  "parameter_list", "function_declaration",
  "anonymous_function_declaration", "method_declaration", "code_block",
  "local_variable_declaration_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "if_statement", "else_statemnet",
  "switch_statement", "iteration_statemnet", "for_init", "for_expr",
  "for_incr", "jump_statement", "variable_declaration", "var_list",
  "initializer_expression", "field_initial_list", "array_initial_list",
  "primary_expression", "constant", "postfix_expression",
  "argument_expression_list", "unary_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression", "basic_expression",
  "expression", "expression_list", "assignment_expression",
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
     315,   316,   317,   318,   319,   320,   321,    44,   123,   125,
      40,    41,    91,    93,    59,    46,    42,    61,    58,    43,
      45,   126,    33,    47,    37,    60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -269

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-269)))

#define YYTABLE_NINF -188

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -40,    38,    72,    80,    80,    47,    -1,    -1,  -269,
      69,  -269,  -269,  -269,  -269,  -269,   756,   -19,   911,  -269,
      -6,   115,  -269,    -1,    69,  -269,    69,  -269,  -269,  -269,
    -269,    23,    10,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,    97,    13,   524,  -269,    48,
    -269,  -269,  -269,     4,   118,    31,   133,    40,  -269,  -269,
      59,    69,   938,   138,  -269,   152,   719,   719,   134,  -269,
    -269,  -269,  -269,  -269,  -269,   347,   719,   719,   719,   719,
     719,   168,   161,   172,  -269,  -269,  -269,  -269,     7,  -269,
     -55,   135,   173,     2,   207,   155,   157,   164,   230,   238,
    -269,  -269,   -25,  -269,   524,  1019,   878,    53,   189,   194,
      67,  -269,   188,   965,    56,  -269,  -269,  1019,  -269,  -269,
    -269,    44,   185,   186,  -269,   104,   131,   143,   195,  -269,
    -269,  -269,  -269,   407,   719,   446,  -269,  -269,   669,   719,
     199,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   524,
    -269,   -10,  -269,   584,  1019,  -269,   200,  -269,   201,   878,
      46,  1019,   117,   208,   122,  -269,  -269,  -269,  1019,   965,
    -269,   878,    63,   524,   524,   204,  -269,   218,  -269,  -269,
    -269,  -269,   144,   151,   213,  -269,   159,   163,  -269,    73,
    -269,   212,  -269,  -269,  -269,  -269,   -55,   -55,   135,   135,
     173,   173,   173,   173,     2,     2,   207,   155,   157,   164,
     230,  -269,  -269,   216,   220,   200,   221,   223,   485,  -269,
     371,   644,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,   -44,   620,   214,    74,  -269,  1019,   200,  -269,
     878,   105,   222,  1019,  -269,   992,  -269,  -269,  -269,  -269,
     200,  -269,   878,  -269,  -269,   217,   219,  -269,  -269,  -269,
    -269,  -269,   719,  -269,  -269,   719,   719,   266,   284,   719,
    -269,    22,  -269,  -269,    80,   524,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,   719,  -269,  -269,  -269,
    -269,   200,  -269,   878,  -269,   224,  1019,   788,   111,   114,
    -269,   200,  -269,   524,   524,  -269,   229,   233,   231,  -269,
     694,  -269,   232,   234,  -269,  -269,  -269,   244,  -269,  -269,
     200,  -269,  -269,  -269,   239,   818,   848,  -269,  -269,  -269,
     200,   200,   719,  -269,   719,   240,  -269,   200,  -269,  -269,
    -269,   241,  -269,   242,   285,  -269,   246,   248,  -269,  -269,
    -269,  -269,  -269,   -13,   249,   200,  -269,  -269,  -269,  -269,
    -269
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    33,    34,    37,
      35,    41,    45,    47,    43,   107,     0,     0,     0,     2,
       0,     0,     1,    30,    31,    38,    32,    42,    46,    48,
      44,     0,     0,    14,    15,    16,    17,    10,    11,    12,
      13,    18,    19,    20,    21,     0,     0,     0,     6,     0,
       5,     8,     7,     0,     0,     0,     0,     0,    36,    39,
       0,    29,     0,     0,   108,     0,     0,     0,     0,   131,
     132,   133,   128,   129,   130,     0,     0,     0,     0,     0,
       0,   125,     0,     0,   119,   180,   134,   126,   143,   150,
     154,   157,   160,   165,   168,   170,   172,   174,   176,   178,
     179,   181,     0,   104,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    22,     0,     3,     9,     0,   125,   144,
     145,     0,   128,     2,   109,     0,     0,     0,     0,   146,
     147,   148,   149,     0,     0,     0,   135,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,    62,     0,     0,    27,     0,    64,     0,     0,
       0,     0,     0,     0,     0,    54,    40,    23,     0,    24,
      26,     0,     0,     0,     0,     0,   111,     0,   112,   110,
     127,   113,     0,     0,     0,   116,     0,     0,   139,     0,
     141,     0,   137,   151,   152,   153,   155,   156,   158,   159,
     164,   163,   161,   162,   166,   167,   169,   171,   173,   175,
     177,   182,   106,     0,     0,     0,     0,     0,     0,    77,
     125,     0,    78,    81,    83,    86,    87,    84,    85,    80,
     198,   199,     0,   185,     0,     0,    65,     0,     0,    66,
       0,     0,     0,     0,    49,     0,    50,    55,     4,    25,
       0,    68,     0,   123,   121,     0,     0,   115,   114,   120,
     118,   117,     0,   140,   138,     0,     0,     0,     0,     0,
     102,     0,    76,    79,     0,     0,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,     0,    82,    28,    63,
      67,     0,    72,     0,    52,     0,     2,     0,     0,     0,
      69,     0,    70,     0,     0,   142,     0,     0,     0,    98,
       0,    97,     0,     0,   103,   187,   186,   183,   184,    73,
       0,    74,    53,    56,     0,     0,     0,    71,   122,   124,
       0,     0,     0,   100,     0,     0,    96,     0,    75,    57,
      58,     0,    60,     0,    88,    93,     0,     0,   101,    99,
      92,    59,    61,     0,     0,     0,    91,    90,    89,    94,
      95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,    -4,  -157,   -14,   -41,  -269,    33,   -53,  -269,  -269,
     313,    12,     9,     1,  -269,  -269,   148,  -116,    71,  -269,
      95,    27,  -269,    93,  -269,  -269,   -38,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,    -2,  -269,  -269,   193,   192,  -269,
    -269,  -269,  -269,     6,    90,    91,     3,   103,   175,   178,
     179,   177,   181,  -269,   -73,  -144,   -66,  -269,  -269,    52,
    -269,  -268
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   118,   114,   165,    50,    51,    52,   166,     6,     7,
       8,     9,    10,    11,   172,   174,   175,   107,    12,    84,
      13,   167,   231,   232,   233,   234,   235,   368,   236,   237,
     320,   344,   357,   238,    14,    16,    85,   125,   126,    86,
      87,    88,   199,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   241,   242,   243,
     296,   244
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    21,    49,   128,    57,   182,    82,   245,    30,   127,
     322,    27,    48,   223,    48,   221,    24,    26,   148,   149,
      25,   141,    30,   284,    30,    27,    15,    27,   142,   143,
     136,   137,    61,   285,    82,    25,     1,     2,   161,   263,
     264,     3,   159,    81,     5,     1,     2,    22,   115,   160,
       3,    53,     4,     5,   251,   163,    54,   159,    48,    30,
     177,   194,    27,    82,   222,   200,   201,   193,    58,   197,
     105,    81,   119,   120,    65,   106,   358,   138,    63,   139,
      83,    28,   140,   129,   130,   131,   132,   150,   151,   159,
     240,   162,    82,    62,    82,    28,   324,    28,   308,   109,
      81,    48,    48,   180,    17,    29,     1,     2,    83,    48,
     105,     3,   105,    48,   111,   181,   248,   250,    82,    29,
     168,    29,   103,   178,   169,   104,   259,   179,   260,    81,
     168,    81,    28,   173,   262,   112,   116,    83,    18,   309,
     272,   178,    82,    82,   273,   298,    19,   203,   204,   205,
     115,   210,   211,   212,   213,    81,    29,   252,   240,   230,
      48,   239,   281,    64,   258,    48,    83,    48,    83,   338,
     339,   185,   168,   186,    48,    48,   303,    48,   178,    81,
      81,   168,   335,   253,   108,   336,   254,    82,   173,    59,
      60,   256,    83,   246,   146,   147,   249,   301,   187,   315,
     188,   110,   316,   317,   121,   240,   323,   116,   261,   311,
     159,   185,   189,   267,   144,   145,    83,    83,   159,   327,
     268,   152,   153,   328,    81,   117,   187,   230,   270,   239,
     159,   134,   271,   299,   206,   207,   133,   208,   209,   305,
     135,   115,   154,    48,    82,   155,    48,   345,   157,    48,
     330,    48,   277,   156,   334,   214,   215,   158,    48,   170,
     171,    83,   176,   183,   184,   202,   190,   247,   163,   356,
     265,   240,    82,    82,   230,   300,   321,   302,   255,   266,
     325,    81,   351,   353,   269,   274,   275,   310,   297,   312,
     276,   278,   162,   279,   318,   313,   304,   314,   332,    48,
     340,   342,    48,    48,   341,   347,   346,    66,    67,    81,
      81,   159,   363,   349,   359,   361,   362,   364,    83,   365,
      23,     1,   257,   369,   283,   367,   192,   196,   329,   216,
     331,    48,    48,   217,   219,   218,   326,     0,   337,   220,
     230,     0,    69,    70,    71,    72,    83,    83,    73,    74,
      19,     0,     0,     0,    76,     0,     0,   348,   319,     0,
       0,     0,     0,    77,    78,    79,    80,   354,   355,     0,
      66,    67,     0,     0,   360,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,    68,     0,     0,     0,     0,
     366,     0,   370,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    69,    70,    71,   122,     0,
       0,    73,    74,   123,     0,    75,   124,    76,     0,    46,
       0,     0,     0,     0,     0,     0,    77,    78,    79,    80,
      66,    67,     0,     0,     0,     0,     0,     0,  -187,     0,
       0,     0,     0,     0,     0,    68,     0,     0,  -187,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    69,    70,    71,    72,    66,
      67,    73,    74,   123,     0,    75,   191,    76,     0,    46,
       0,     0,     0,     0,    68,     0,    77,    78,    79,    80,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    69,    70,    71,   122,    66,    67,
      73,    74,    19,     0,    75,   195,    76,     0,    46,     0,
       0,     0,     0,    68,     0,    77,    78,    79,    80,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    69,    70,    71,    72,    66,    67,    73,
      74,    19,     0,    75,     0,    76,     0,    46,     0,   280,
       0,     0,    68,     0,    77,    78,    79,    80,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    69,    70,    71,    72,     0,     0,    73,    74,
      19,     0,    75,     0,    76,     0,    46,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    80,    66,    67,     0,
     223,     0,   224,   225,   226,     0,   227,     0,     0,     0,
       0,     1,     0,   228,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,    71,    72,     0,     0,    73,    74,
      19,     0,     0,   229,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    80,    66,    67,     0,
     223,     0,   224,   225,   226,     0,   227,     0,     0,     0,
       0,     1,     0,   228,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,    71,    72,     0,     0,    73,    74,
      19,     0,     0,   282,    76,     0,     0,    66,    67,     0,
       0,     0,     0,    77,    78,    79,    80,    69,    70,    71,
      72,     0,     0,    73,    74,    19,     0,     0,     0,    76,
     198,     0,    66,    67,     0,     0,     0,     0,    77,    78,
      79,    80,    69,    70,    71,    72,     0,     0,    73,    74,
      19,     0,     0,     0,    76,     0,     0,     0,   343,     0,
       0,     0,     0,    77,    78,    79,    80,    69,    70,    71,
      72,     0,     0,    73,    74,    19,     0,     0,     0,    76,
       0,     0,     0,     0,    31,     0,     0,    32,    77,    78,
      79,    80,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    45,     0,     0,    31,     0,    46,    32,
       0,     0,     0,    47,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    31,     0,   164,    32,
      46,     0,   333,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    31,     0,   164,    32,
      46,     0,   350,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    31,     0,   164,    32,
      46,     0,   352,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,   163,     0,   164,    31,
      46,    55,    56,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    31,    19,     0,    32,
       0,     0,     0,    46,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    31,    19,     0,    32,     0,     0,   113,
      46,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      31,    19,     0,    32,     0,   164,     0,    46,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,    31,   306,     0,
      32,     0,     0,   307,    46,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,    46
};

static const yytype_int16 yycheck[] =
{
       4,     5,    16,    76,    18,   121,    47,   164,    10,    75,
     278,    10,    16,    26,    18,   159,     7,     8,    16,    17,
       8,    76,    24,    67,    26,    24,    66,    26,    83,    84,
      23,    24,    23,    77,    75,    23,    37,    38,   104,   183,
     184,    42,    67,    47,    45,    37,    38,     0,    62,    74,
      42,    70,    44,    45,   170,    68,    75,    67,    62,    61,
     113,   134,    61,   104,    74,   138,   139,   133,    74,   135,
      66,    75,    66,    67,    61,    71,   344,    70,    68,    72,
      47,    10,    75,    77,    78,    79,    80,    85,    86,    67,
     163,   105,   133,    70,   135,    24,    74,    26,   255,    68,
     104,   105,   106,   117,    66,    10,    37,    38,    75,   113,
      66,    42,    66,   117,    74,    71,   169,    71,   159,    24,
      67,    26,    74,    67,    71,    77,   179,    71,   181,   133,
      67,   135,    61,    66,    71,    76,    69,   104,    66,   255,
      67,    67,   183,   184,    71,    71,    66,   141,   142,   143,
     164,   148,   149,   150,   151,   159,    61,   171,   231,   163,
     164,   163,   228,    66,   178,   169,   133,   171,   135,   313,
     314,    67,    67,    69,   178,   179,    71,   181,    67,   183,
     184,    67,    71,    66,    66,    71,    69,   228,    66,    74,
      75,    69,   159,   166,    21,    22,   169,   250,    67,   272,
      69,    68,   275,   276,    70,   278,   279,    69,   181,   262,
      67,    67,    69,    69,    79,    80,   183,   184,    67,   285,
      69,    14,    15,   296,   228,    73,    67,   231,    69,   231,
      67,    70,    69,   247,   144,   145,    68,   146,   147,   253,
      68,   255,    87,   247,   285,    88,   250,   320,    18,   253,
     303,   255,   225,    89,   307,   152,   153,    19,   262,    70,
      66,   228,    74,    78,    78,    66,    71,    66,    68,   342,
      66,   344,   313,   314,   278,   248,   278,   250,    70,    61,
     284,   285,   335,   336,    71,    73,    70,   260,    74,   262,
      70,    70,   306,    70,    28,    78,    74,    78,    74,   303,
      71,    70,   306,   307,    71,    71,    74,    23,    24,   313,
     314,    67,    27,    74,    74,    74,    74,    71,   285,    71,
       7,    37,   174,    74,   231,   363,   133,   135,   301,   154,
     303,   335,   336,   155,   157,   156,   284,    -1,   311,   158,
     344,    -1,    58,    59,    60,    61,   313,   314,    64,    65,
      66,    -1,    -1,    -1,    70,    -1,    -1,   330,    74,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,   340,   341,    -1,
      23,    24,    -1,    -1,   347,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    38,    -1,    -1,    -1,    -1,
     363,    -1,   365,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    65,    66,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    23,
      24,    64,    65,    66,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    38,    -1,    79,    80,    81,    82,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    23,    24,
      64,    65,    66,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    38,    -1,    79,    80,    81,    82,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    23,    24,    64,
      65,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    38,    -1,    79,    80,    81,    82,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    -1,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    23,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    -1,    39,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    23,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    -1,    -1,    69,    70,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    58,    59,    60,
      61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    -1,    23,    24,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    58,    59,    60,
      61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    79,    80,
      81,    82,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    38,    -1,    72,    41,
      -1,    -1,    -1,    77,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    38,    -1,    70,    41,
      72,    -1,    74,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    38,    -1,    70,    41,
      72,    -1,    74,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    38,    -1,    70,    41,
      72,    -1,    74,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    -1,    70,    38,
      72,    40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    66,    -1,    41,
      -1,    -1,    -1,    72,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    66,    -1,    41,    -1,    -1,    71,
      72,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    66,    -1,    41,    -1,    70,    -1,    72,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    66,    -1,
      41,    -1,    -1,    71,    72,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,    98,    99,   100,   101,
     102,   103,   108,   110,   124,    66,   125,    66,    66,    66,
      91,    91,     0,   100,   102,   101,   102,   103,   108,   110,
     124,    38,    41,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    67,    72,    77,    91,    93,
      94,    95,    96,    70,    75,    40,    41,    93,    74,    74,
      75,   102,    70,    68,    66,    61,    23,    24,    38,    58,
      59,    60,    61,    64,    65,    68,    70,    79,    80,    81,
      82,    91,    94,    96,   109,   126,   129,   130,   131,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    74,    77,    66,    71,   107,    66,    68,
      68,    74,    76,    71,    92,    93,    69,    73,    91,   133,
     133,    70,    61,    66,    69,   127,   128,   146,   144,   133,
     133,   133,   133,    68,    70,    68,    23,    24,    70,    72,
      75,    76,    83,    84,    79,    80,    21,    22,    16,    17,
      85,    86,    14,    15,    87,    88,    89,    18,    19,    67,
      74,   146,    93,    68,    70,    93,    97,   111,    67,    71,
      70,    66,   104,    66,   105,   106,    74,    97,    67,    71,
      93,    71,   107,    78,    78,    67,    69,    67,    69,    69,
      71,    69,   127,   146,   144,    69,   128,   146,    71,   132,
     144,   144,    66,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   139,   140,   141,
     142,   145,    74,    26,    28,    29,    30,    32,    39,    69,
      91,   112,   113,   114,   115,   116,   118,   119,   123,   124,
     144,   147,   148,   149,   151,    92,   111,    66,    97,   111,
      71,   107,    93,    66,    69,    70,    69,   106,    93,    97,
      97,   111,    71,   145,   145,    66,    61,    69,    69,    71,
      69,    69,    67,    71,    73,    70,    70,   111,    70,    70,
      74,   146,    69,   113,    67,    77,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   150,    74,    71,    93,
     111,    97,   111,    71,    74,    93,    66,    71,    92,   107,
     111,    97,   111,    78,    78,   144,   144,   144,    28,    74,
     120,   124,   151,   144,    74,    91,   149,   146,   144,   111,
      97,   111,    74,    74,    97,    71,    71,   111,   145,   145,
      71,    71,    70,    74,   121,   144,    74,    71,   111,    74,
      74,    97,    74,    97,   111,   111,   144,   122,   151,    74,
     111,    74,    74,    27,    71,    71,   111,   116,   117,    74,
     111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    96,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   109,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   119,   120,   120,   120,   121,
     121,   122,   123,   123,   124,   124,   124,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   135,   135,   135,   136,   136,   136,
     137,   137,   137,   137,   137,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     5,     4,     1,     3,     3,
       2,     2,     2,     1,     1,     1,     3,     1,     2,     3,
       5,     1,     2,     1,     2,     1,     2,     1,     2,     6,
       6,     4,     3,     4,     1,     2,     4,     5,     5,     6,
       5,     6,     2,     4,     5,     6,     6,     7,     4,     5,
       5,     6,     7,     8,     8,     9,     3,     2,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     5,     7,
       1,     1,     5,     5,     7,     7,     2,     1,     1,     2,
       1,     1,     2,     3,     4,     5,     6,     1,     3,     2,
       3,     3,     3,     3,     4,     4,     3,     4,     4,     1,
       4,     3,     5,     3,     5,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     4,     3,
       4,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
        case 2:
#line 136 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.str_val) = (yyvsp[0].identifier);
  }
#line 1728 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 147 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.linked_list) = null;
  }
#line 1736 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 150 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.linked_list) = null;
  }
#line 1744 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 156 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.new_type_info) = new_type_info((yyvsp[0].primitive_type), null);
  }
#line 1752 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 6:
#line 159 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_DEFINED, (yyvsp[0].str_val).val);
  }
#line 1760 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 7:
#line 162 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_ARRAY, (yyvsp[0].array_type));
  }
#line 1768 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 165 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_FUNC, (yyvsp[0].func_proto_type));
  }
#line 1776 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 168 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_INTF, null);
  }
#line 1784 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 174 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1792 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 177 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1800 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 180 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1808 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 183 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1816 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 186 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1824 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 189 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1832 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 192 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1840 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 195 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1848 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 198 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1856 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 201 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1864 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 204 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1872 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 207 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1880 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 213 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1888 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 216 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1896 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 219 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1904 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 25:
#line 222 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1912 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 26:
#line 228 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.array_type) = new_array_type((yyvsp[-2].ival), (yyvsp[0].new_type_info));
  }
#line 1920 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 76:
#line 333 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 1928 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 81:
#line 347 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----statement\n");
  }
#line 1936 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 82:
#line 353 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 1945 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 104:
#line 412 "yacc/koala.y" /* yacc.c:1661  */
    {
    new_var_decl((yyvsp[-2].linked_list), (yyvsp[-1].new_type_info), null);
  }
#line 1953 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 105:
#line 415 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1961 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 106:
#line 418 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1969 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 107:
#line 424 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1979 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 108:
#line 429 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1989 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 125:
#line 499 "yacc/koala.y" /* yacc.c:1661  */
    {    /* IDENTIFIER { */
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 1997 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 126:
#line 502 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2005 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 127:
#line 505 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2013 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 128:
#line 511 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2021 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 129:
#line 514 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2029 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 130:
#line 517 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2037 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 131:
#line 520 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2045 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 132:
#line 523 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2053 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 133:
#line 526 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2061 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 134:
#line 532 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2069 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 135:
#line 535 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2082 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 136:
#line 543 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2095 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 137:
#line 551 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2103 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 138:
#line 554 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2111 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 139:
#line 557 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2119 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 140:
#line 560 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2127 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 143:
#line 571 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2135 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 574 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2148 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 582 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2161 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 590 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2169 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 593 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2177 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 596 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2185 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 599 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2193 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 605 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2201 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 608 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2209 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 611 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2217 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 614 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2225 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 620 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2233 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 155:
#line 623 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2241 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 156:
#line 626 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2249 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 157:
#line 632 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2257 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 158:
#line 635 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2265 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 159:
#line 638 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2273 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 160:
#line 644 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2281 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 161:
#line 647 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2289 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 162:
#line 650 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2297 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 163:
#line 653 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2305 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 164:
#line 656 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2313 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 165:
#line 662 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2321 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 166:
#line 665 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2329 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 167:
#line 668 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2337 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 168:
#line 674 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2345 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 169:
#line 677 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2353 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 170:
#line 683 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2361 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 171:
#line 686 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2369 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 692 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2377 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 695 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2385 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 701 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2393 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 704 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2401 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 710 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2409 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 713 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2417 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 719 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2425 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 725 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2432 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 198:
#line 767 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----basic_expression\n");
    show_expr((yyvsp[0].expression));
    putchar('\n');
  }
#line 2442 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 199:
#line 772 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2450 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2454 "koala_yacc.c" /* yacc.c:1661  */
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
#line 779 "yacc/koala.y" /* yacc.c:1906  */


int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

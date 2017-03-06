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
    OP = 323,
    IFX = 324,
    NO_CODE_BLOCK = 325
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

#line 200 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  219
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    88,    91,     2,
      74,    75,    78,    83,    73,    84,    72,    87,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    71,
      89,    81,    90,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    92,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    93,    80,    85,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   156,   161,   165,   166,   170,   171,   172,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   192,   193,   194,   195,   199,   203,   207,
     208,   209,   210,   211,   212,   213,   217,   221,   222,   226,
     227,   233,   234,   235,   236,   237,   238,   239,   240,   244,
     245,   246,   247,   251,   252,   256,   260,   261,   265,   266,
     267,   268,   269,   270,   274,   275,   279,   280,   284,   285,
     291,   292,   293,   294,   298,   299,   300,   301,   307,   308,
     309,   310,   314,   318,   319,   324,   325,   329,   330,   334,
     337,   338,   339,   343,   344,   348,   349,   353,   354,   358,
     362,   363,   364,   368,   369,   370,   374,   375,   379,   383,
     384,   389,   390,   391,   395,   396,   400,   401,   502,   505,
     511,   514,   517,   523,   526,   532,   535,   538,   541,   547,
     552,   555,   560,   565,   570,   578,   579,   580,   581,   585,
     586,   590,   594,   595,   599,   600,   606,   607,   612,   613,
     614,   615,   616,   617,   621,   622,   626,   632,   635,   641,
     642,   646,   650,   653,   656,   659,   681,   684,   687,   690,
     696,   699,   702,   705,   711,   714,   721,   725,   728,   729,
     733,   736,   737,   738,   739,   743,   746,   747,   751,   754,
     758,   761,   765,   768,   772,   775,   779,   782,   786,   792,
     793,   799,   800,   804,   805,   809,   810,   811,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   828,   831
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
  "OP", "IFX", "NO_CODE_BLOCK", "';'", "'.'", "','", "'('", "')'", "'['",
  "']'", "'*'", "'{'", "'}'", "'='", "':'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept", "semicolons",
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
  "complex_primary", "complex_primary_no_parenthesis", "literal_name",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    59,    46,    44,    40,    41,    91,    93,    42,   123,
     125,    61,    58,    43,    45,   126,    33,    47,    37,    60,
      62,    38,    94,   124
};
# endif

#define YYPACT_NINF -285

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-285)))

#define YYTABLE_NINF -208

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      92,   -47,   -44,    -1,    15,    15,    85,    34,    34,  -285,
     107,  -285,  -285,  -285,  -285,  -285,   368,    -9,    42,  1000,
    -285,   117,   145,  -285,    34,   107,  -285,   107,  -285,  -285,
    -285,  -285,    73,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,    55,    64,   920,    99,
    -285,  -285,  -285,  -285,   -19,   110,   -14,    48,   113,   131,
     109,   109,  -285,   135,  -285,   -28,  -285,   107,  1096,  -285,
     137,   920,   920,  -285,   147,  -285,  -285,  -285,  -285,  -285,
    -285,   920,   621,  -285,  -285,  -285,  -285,    82,   157,  -285,
    -285,   152,  -285,   164,  -285,   170,   171,   172,   173,   176,
    -285,  -285,    23,  -285,  -285,   920,   -33,   144,   208,    14,
     217,   160,   161,   159,   237,   238,  -285,    10,  -285,   920,
    -285,  1189,  1031,    -6,  1031,   122,   191,   221,  -285,  -285,
    -285,   109,  1127,  -285,   123,  1189,  -285,  -285,    71,   186,
     182,  -285,   185,   -48,  -285,    52,   920,   685,   201,   920,
     749,  -285,  -285,  -285,   920,   920,   920,   920,   920,   920,
     920,   920,   920,   920,   920,   920,   920,   920,   920,   920,
     920,   920,  -285,   920,    84,  -285,  1189,   436,  -285,   190,
    -285,   203,  1031,   190,  -285,  1031,  1189,   -40,  -285,   204,
     -29,  -285,  -285,  -285,  1189,  1127,  -285,  1031,   126,   197,
     920,   207,  -285,  -285,   198,  -285,    86,    87,  -285,   199,
    -285,   205,   206,  -285,  -285,  -285,   -33,   -33,   144,   144,
     208,   208,   208,   208,    14,    14,   217,   160,   161,   159,
     237,  -285,  -285,   132,  -285,   210,   211,   190,   213,   214,
     806,  -285,   364,   500,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,    89,   382,  -285,  -285,    70,   101,   218,  -285,
    1189,   190,  -285,  -285,   190,  -285,   109,  -285,  -285,   216,
    -285,  -285,  -285,  -285,   190,  -285,  1031,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  1189,  -285,   920,   920,   263,
     564,   920,  -285,   103,  -285,  -285,   963,   920,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   920,  -285,
    -285,  -285,  -285,  -285,  1158,  -285,   190,  -285,  -285,   220,
     222,   219,  -285,   863,  -285,   225,   224,  -285,    82,   152,
    -285,   206,  -285,  1189,  1065,   133,   136,  -285,   190,   190,
     920,  -285,   920,   229,  -285,   190,  -285,   109,  1065,  1065,
     275,  -285,   230,   231,  -285,  -285,  -285,  -285,  -285,   109,
    -285,   109,   -22,   236,   190,  -285,  -285,  -285,  -285,  -285,
    -285,  -285
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    33,    34,    37,
      35,    41,    45,    47,    43,   114,     0,     0,     0,     0,
       3,     0,     0,     1,    30,    31,    38,    32,    42,    46,
      48,    44,     0,    14,    15,    16,    17,    10,    11,    12,
      13,    18,    19,    20,    21,    22,     0,     0,     0,     8,
     116,     7,   117,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,    36,     0,    39,    29,     0,   115,
       0,     0,     0,   120,     0,   132,   133,   134,   129,   130,
     131,     0,     0,   166,   167,   168,   169,   118,     0,   147,
     157,   119,   122,   124,   125,     0,   126,   127,   128,     0,
     121,   146,   162,   158,   170,     0,   174,   177,   180,   185,
     188,   190,   192,   194,   196,   198,   199,     0,   111,     0,
      82,     0,     0,     0,     0,     0,     0,     0,    51,    52,
       4,     0,    23,    66,     0,     0,   163,   164,     0,     0,
       3,   148,     0,     0,   154,     0,     0,     0,     0,     0,
       0,   159,   160,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,    68,     0,     0,    64,     0,
      70,     0,     0,     0,    78,     0,     0,     0,    53,     0,
       0,    56,    40,    24,     0,    25,    27,     0,     0,   123,
       0,     0,   150,   149,     0,   151,     0,     0,   141,     0,
     143,     0,   161,   171,   172,   173,   175,   176,   178,   179,
     184,   183,   181,   182,   186,   187,   189,   191,   193,   195,
     197,   200,   113,     0,     5,     0,     0,     0,     0,     0,
       0,    84,   118,     0,    85,    88,    90,    93,    94,    91,
      92,    87,   126,   127,   218,   219,     0,   203,     0,    71,
       0,     0,    72,    79,     0,    80,     0,    49,    54,     0,
      50,    57,    67,    26,     0,    74,     0,   156,    28,   155,
     139,   153,   152,   140,   142,     0,    65,     0,     0,     0,
       0,     0,   109,     0,    83,    86,     0,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,     0,    89,
      69,    73,    81,    55,     0,    75,     0,    76,     6,     0,
       0,     0,   105,     0,   104,     0,     0,   110,   205,     0,
     204,   201,   202,     3,     0,     0,     0,    77,     0,     0,
       0,   107,     0,     0,   103,     0,    58,     0,     0,     0,
      95,   100,     0,     0,   108,   106,    99,    59,    60,     0,
      62,     0,     0,     0,     0,    61,    63,    98,    97,    96,
     101,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,   -12,    -4,  -285,    18,  -285,   289,  -285,  -285,  -285,
    -285,   302,     5,    36,     1,  -285,   124,  -285,   128,  -108,
      -2,   -54,     8,  -285,    11,  -285,    40,  -285,    77,  -285,
    -285,   -49,  -285,  -285,  -285,  -285,  -285,  -285,  -285,    -8,
    -285,  -285,  -285,    25,  -285,  -285,  -285,  -285,  -163,  -155,
    -285,  -285,  -285,  -285,   177,   118,  -285,  -285,  -285,   -64,
    -285,    76,    83,    22,    79,   156,   158,   162,   155,   163,
    -285,   -25,   -77,  -285,  -285,    31,  -285,  -284
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    64,    87,   233,    88,    51,    52,    53,   142,     6,
       7,     8,     9,    10,    11,   187,   188,   190,   191,   179,
     134,   123,    12,    89,    13,    18,   180,   243,   244,   245,
     246,   247,   369,   248,   249,   323,   342,   353,   250,    14,
      16,    54,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   143,   144,   102,   103,   211,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   255,   256,   257,   308,   258
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    31,   125,   235,   145,   325,   136,   137,   189,
      66,    28,    49,    26,   252,    49,   183,    31,    29,    31,
      15,    30,   253,    17,   193,   201,    28,   186,    28,    26,
     161,   162,   202,    29,    50,    29,    30,    60,    30,   130,
     267,   153,   174,    25,    27,   154,   151,   152,   128,   129,
     131,   270,   118,   121,   155,   156,   139,   177,   354,    31,
      67,   122,   119,    55,    49,    56,    19,   181,    28,   182,
     207,     1,     2,   212,   261,    29,     3,   264,    30,     5,
     252,   172,    20,   173,   198,    23,   133,   273,   253,   274,
     213,   214,   215,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,   163,   164,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   121,    57,    49,    49,   192,
      49,   204,    69,   124,   209,   173,    70,   252,    49,     1,
       2,    49,   203,   252,     3,   253,     4,     5,   121,   175,
     178,   253,   178,   296,     1,     2,   197,    68,   231,     3,
     178,   297,   254,   196,    63,   232,  -145,   173,   146,   201,
     173,    -8,  -206,   293,   184,  -136,   281,   282,   316,   251,
    -206,    63,    49,   242,   327,   277,   173,   120,    49,   252,
      62,    49,    49,   220,   221,   222,   223,   253,    62,    63,
      49,    49,   126,    49,   234,   181,   194,   185,   195,   181,
     178,   276,   130,   178,   266,   285,   194,   286,   348,   181,
     127,   349,   272,   178,   135,   178,    62,    65,   254,   259,
     331,   138,   262,   263,   148,   265,   347,   157,   158,   159,
     160,   165,   166,   216,   217,   251,   147,   275,  -144,   242,
     359,   361,   218,   219,   224,   225,   149,  -136,  -137,  -138,
     150,   167,   169,   168,   313,   170,    49,   171,   186,   189,
     336,   199,   319,   320,   -28,   254,   326,   200,   208,   177,
     260,   269,    49,  -135,   278,   280,   283,   289,   310,   173,
     284,    49,   324,   332,   287,   288,   242,   290,   291,   309,
     314,   321,   328,   340,   178,   338,   344,   339,   343,   345,
     355,   311,   362,   318,   312,   363,   364,   370,    61,    24,
      49,   268,   335,   368,   315,   352,   317,   254,   271,   279,
     295,   329,   346,   226,   206,   229,   227,   330,     0,    49,
      49,   228,   133,     0,   230,   357,   358,   360,   242,     0,
       0,     0,     0,     0,    49,    49,     0,   365,     0,   366,
       0,   175,   178,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,   178,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   350,   351,
       0,     0,     0,     0,     0,   356,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,     0,     0,     0,     0,
       0,     0,   367,     0,   371,     0,    32,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    63,  -205,  -145,     0,
     146,    46,     0,    -8,    47,  -205,     0,     0,     0,    48,
       0,     0,     0,     0,     0,  -207,     0,     0,  -137,    71,
      72,    73,   235,  -207,   236,   237,   238,     0,   239,     0,
       0,     0,     0,     1,    74,   240,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    75,    76,    77,    78,     0,
       0,    79,    80,    20,     0,     0,     0,     0,     0,     0,
      81,     0,    47,     0,     0,    82,   241,     0,     0,    83,
      84,    85,    86,    71,    72,    73,   235,     0,   236,   237,
     238,     0,   239,     0,     0,     0,     0,     1,    74,   240,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    75,
      76,    77,    78,     0,     0,    79,    80,    20,     0,     0,
       0,     0,     0,     0,    81,     0,    47,     0,     0,    82,
     294,     0,     0,    83,    84,    85,    86,    71,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    74,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    75,    76,    77,    78,     0,     0,    79,
      80,    20,     0,     0,     0,   322,     0,     0,    81,     0,
      47,     0,     0,    82,    71,    72,    73,    83,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      75,    76,    77,    78,     0,     0,    79,    80,   140,     0,
       0,     0,     0,     0,     0,    81,     0,    47,     0,     0,
      82,   141,     0,     0,    83,    84,    85,    86,    71,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    75,    76,    77,    78,     0,     0,
      79,    80,   140,     0,     0,     0,     0,     0,     0,    81,
       0,    47,     0,     0,    82,   205,     0,     0,    83,    84,
      85,    86,    71,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    75,    76,
      77,    78,     0,     0,    79,    80,    20,     0,     0,     0,
       0,     0,     0,    81,   210,    47,     0,     0,    82,    71,
      72,    73,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    75,    76,    77,    78,     0,
       0,    79,    80,    20,     0,     0,     0,   292,     0,     0,
      81,     0,    47,     0,     0,    82,    71,    72,    73,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    75,    76,    77,    78,     0,     0,    79,    80,
      20,     0,     0,     0,   341,     0,     0,    81,     0,    47,
       0,     0,    82,    71,    72,    73,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    75,
      76,    77,    78,     0,     0,    79,    80,    20,    73,     0,
       0,     0,     0,     0,    81,     0,    47,     0,     0,    82,
       0,    74,     0,    83,    84,    85,    86,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    75,    76,    77,    78,     0,     0,    79,    80,
      20,     0,     0,     0,     0,     0,     0,    81,    32,    47,
      58,    59,    82,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,   176,     0,    47,     0,     0,
     177,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,    62,     0,     0,   176,
       0,    47,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,   132,    47,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,   176,     0,    47,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,   334,    47,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    47
};

static const yytype_int16 yycheck[] =
{
       4,     5,    10,    57,    26,    82,   290,    71,    72,    38,
      22,    10,    16,     8,   177,    19,   124,    25,    10,    27,
      67,    10,   177,    67,   132,    73,    25,    67,    27,    24,
      16,    17,    80,    25,    16,    27,    25,    19,    27,    67,
      80,   105,   119,     7,     8,    78,    23,    24,    60,    61,
      78,    80,    71,    67,    87,    88,    81,    79,   342,    67,
      24,    75,    81,    72,    68,    74,    67,    73,    67,    75,
     147,    37,    38,   150,   182,    67,    42,   185,    67,    45,
     243,    71,    67,    73,   138,     0,    68,   195,   243,   197,
     154,   155,   156,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    89,    90,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    67,    74,   121,   122,   131,
     124,   146,    67,    75,   149,    73,    62,   290,   132,    37,
      38,   135,    80,   296,    42,   290,    44,    45,    67,   121,
     122,   296,   124,    73,    37,    38,    75,    74,   173,    42,
     132,    81,   177,   135,    72,    71,    74,    73,    76,    73,
      73,    79,    73,   240,   124,    76,    80,    80,   276,   177,
      81,    72,   176,   177,    71,   200,    73,    67,   182,   342,
      71,   185,   186,   161,   162,   163,   164,   342,    71,    72,
     194,   195,    79,   197,   176,    73,    73,    75,    75,    73,
     182,    75,    67,   185,   186,    73,    73,    75,    75,    73,
      79,    75,   194,   195,    77,   197,    71,    72,   243,   179,
     297,    74,   182,   183,    72,   185,   334,    83,    84,    21,
      22,    14,    15,   157,   158,   243,    79,   197,    74,   243,
     348,   349,   159,   160,   165,   166,    76,    76,    76,    76,
      74,    91,    93,    92,   266,    18,   260,    19,    67,    38,
     314,    75,   287,   288,    82,   290,   291,    82,    67,    79,
      67,    67,   276,    76,    67,    77,    77,   237,   260,    73,
      75,   285,   290,   308,    74,    74,   290,    74,    74,    71,
      74,    28,   296,    74,   276,    75,    71,    75,   323,    75,
      71,   261,    27,   285,   264,    75,    75,    71,    19,     7,
     314,   187,   314,   362,   274,   340,   276,   342,   190,   201,
     243,   296,   334,   167,   147,   170,   168,   296,    -1,   333,
     334,   169,   314,    -1,   171,   347,   348,   349,   342,    -1,
      -1,    -1,    -1,    -1,   348,   349,    -1,   359,    -1,   361,
      -1,   333,   334,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   348,   349,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   338,   339,
      -1,    -1,    -1,    -1,    -1,   345,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   362,    -1,   364,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    72,    73,    74,    -1,
      76,    73,    -1,    79,    76,    81,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    23,
      24,    25,    26,    81,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    -1,    79,    80,    -1,    -1,    83,
      84,    85,    86,    23,    24,    25,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,
      80,    -1,    -1,    83,    84,    85,    86,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      76,    -1,    -1,    79,    23,    24,    25,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      79,    80,    -1,    -1,    83,    84,    85,    86,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    -1,    -1,    79,    80,    -1,    -1,    83,    84,
      85,    86,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    23,
      24,    25,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    76,    -1,    -1,    79,    23,    24,    25,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    76,
      -1,    -1,    79,    23,    24,    25,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    67,    25,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,
      -1,    38,    -1,    83,    84,    85,    86,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    38,    76,
      40,    41,    79,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      79,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    76,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   103,   104,   105,   106,
     107,   108,   116,   118,   133,    67,   134,    67,   119,    67,
      67,    96,    96,     0,   105,   107,   106,   107,   108,   116,
     118,   133,    38,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    73,    76,    81,    96,
      98,    99,   100,   101,   135,    72,    74,    74,    40,    41,
      98,   100,    71,    72,    95,    72,    95,   107,    74,    67,
      62,    23,    24,    25,    38,    59,    60,    61,    62,    65,
      66,    74,    79,    83,    84,    85,    86,    96,    98,   117,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   150,   151,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,    71,    81,
      67,    67,    75,   115,    75,   115,    79,    79,    95,    95,
      67,    78,    75,    98,   114,    77,   153,   153,    74,   165,
      67,    80,   102,   148,   149,   166,    76,    79,    72,    76,
      74,    23,    24,   153,    78,    87,    88,    83,    84,    21,
      22,    16,    17,    89,    90,    14,    15,    91,    92,    93,
      18,    19,    71,    73,   166,    98,    74,    79,    98,   113,
     120,    73,    75,   113,   120,    75,    67,   109,   110,    38,
     111,   112,    95,   113,    73,    75,    98,    75,   115,    75,
      82,    73,    80,    80,   165,    80,   148,   166,    67,   165,
      75,   152,   166,   153,   153,   153,   155,   155,   156,   156,
     157,   157,   157,   157,   158,   158,   159,   160,   161,   162,
     163,   165,    71,    97,    98,    26,    28,    29,    30,    32,
      39,    80,    96,   121,   122,   123,   124,   125,   127,   128,
     132,   133,   142,   143,   165,   167,   168,   169,   171,   120,
      67,   113,   120,   120,   113,   120,    98,    80,   110,    67,
      80,   112,    98,   113,   113,   120,    75,   165,    67,   149,
      77,    80,    80,    77,    75,    73,    75,    74,    74,   120,
      74,    74,    71,   166,    80,   122,    73,    81,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   170,    71,
      98,   120,   120,    95,    74,   120,   113,   120,    98,   165,
     165,    28,    71,   129,   133,   171,   165,    71,    96,   137,
     169,   166,   165,    67,    75,   114,   115,   120,    75,    75,
      74,    71,   130,   165,    71,    75,    95,   113,    75,    75,
     120,   120,   165,   131,   171,    71,   120,    95,    95,   113,
      95,   113,    27,    75,    75,    95,    95,   120,   125,   126,
      71,   120
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   101,   102,   103,
     103,   103,   103,   103,   103,   103,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   108,
     108,   108,   108,   109,   109,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     128,   128,   128,   129,   129,   129,   130,   130,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   141,   142,
     142,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   153,   153,   153,   153,   154,   154,   154,   154,
     155,   155,   155,   155,   156,   156,   156,   157,   157,   157,
     158,   158,   158,   158,   158,   159,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     5,     4,     1,     3,
       2,     2,     2,     1,     1,     1,     3,     1,     2,     3,
       5,     1,     2,     1,     2,     1,     2,     1,     2,     6,
       6,     4,     4,     1,     2,     3,     1,     2,     5,     6,
       6,     7,     6,     7,     1,     3,     1,     3,     2,     4,
       5,     6,     6,     7,     4,     5,     5,     6,     5,     6,
       6,     7,     3,     3,     2,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     5,     7,     1,     1,     5,
       5,     7,     7,     2,     1,     1,     2,     1,     1,     2,
       3,     4,     5,     6,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     4,
       4,     3,     4,     3,     1,     1,     1,     1,     2,     3,
       3,     3,     4,     4,     1,     3,     3,     1,     1,     2,
       2,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
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
        case 3:
#line 156 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(ID);
    STRING_SET(node->s, (yyvsp[0].ident));
    (yyval.expr_node) = node;
  }
#line 1777 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 334 "yacc/koala.y" /* yacc.c:1646  */
    {
    expr_tree_print((yyvsp[-1].expr_node));
  }
#line 1785 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 502 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1793 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 505 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1801 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 511 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1809 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 514 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1817 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 517 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1825 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 523 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1833 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 526 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1841 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 125:
#line 532 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1849 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 126:
#line 535 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 127:
#line 538 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1865 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 128:
#line 541 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1873 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 129:
#line 547 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(INTEGER);
    node->i = (yyvsp[0].ival);
    (yyval.expr_node) = node;
  }
#line 1883 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 130:
#line 552 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1891 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 131:
#line 555 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(STRING_LITERAL);
    STRING_SET(node->s, (yyvsp[0].str_val));
    (yyval.expr_node) = node;
  }
#line 1901 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 132:
#line 560 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(TOKEN_NULL);
    node->f = 0.0;
    (yyval.expr_node) = node;
  }
#line 1911 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 565 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(BOOL);
    node->b = 1;
    (yyval.expr_node) = node;
  }
#line 1921 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 570 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(BOOL);
    node->b = 0;
    (yyval.expr_node) = node;
  }
#line 1931 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 632 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1939 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 635 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1947 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 650 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 1955 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 653 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1963 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 656 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1971 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 659 "yacc/koala.y" /* yacc.c:1646  */
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
#line 1995 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 681 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '+';
  }
#line 2003 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 684 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '-';
  }
#line 2011 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 687 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '~';
  }
#line 2019 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 690 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.unary_op) = '!';
  }
#line 2027 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 696 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2035 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 699 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2043 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 702 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2051 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 705 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2059 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 711 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2067 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 714 "yacc/koala.y" /* yacc.c:1646  */
    {
    struct expr_node *node = new_expr_node(OP);
    node->op = '+';
    node->left = (yyvsp[-2].expr_node);
    node->right = (yyvsp[0].expr_node);
    (yyval.expr_node) = node;
  }
#line 2079 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 721 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2085 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 725 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2093 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 728 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2099 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 729 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2105 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 733 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2113 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 736 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2119 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 737 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2125 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 738 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2131 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 739 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2137 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 743 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2145 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 746 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2151 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 747 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2157 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 751 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2165 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 754 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2171 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 758 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2179 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 761 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2185 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 765 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2193 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 768 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2199 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 772 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2207 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 775 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2213 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 779 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2221 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 782 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2227 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 786 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2235 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 828 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
  }
#line 2243 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 219:
#line 831 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2251 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2255 "koala_yacc.c" /* yacc.c:1646  */
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
#line 883 "yacc/koala.y" /* yacc.c:1906  */


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

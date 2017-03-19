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

  string id;
  int primitive_type;
  char unary_op;
  char *ident;
  int64 ival;
  float64 fval;
  char *str_val;
  linked_list_t *linked_list;
  type_info_t *new_type_info;
  func_proto_type_t *func_proto_type;
  array_type_t *array_type;

#line 202 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 217 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

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
      74,    75,    79,    82,    71,    83,    70,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    78,
      88,    80,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    92,    73,    84,     2,     2,     2,
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
       0,   125,   125,   129,   136,   139,   145,   148,   151,   154,
     157,   163,   166,   169,   172,   175,   178,   181,   184,   187,
     190,   193,   196,   202,   205,   208,   211,   217,   223,   224,
     228,   229,   230,   231,   232,   233,   234,   238,   242,   243,
     247,   248,   254,   255,   256,   257,   258,   259,   260,   261,
     265,   266,   267,   271,   272,   276,   280,   281,   285,   286,
     287,   288,   289,   290,   294,   295,   301,   302,   303,   304,
     309,   310,   311,   312,   319,   320,   321,   322,   326,   327,
     332,   333,   337,   338,   342,   345,   346,   347,   351,   352,
     356,   357,   361,   362,   366,   370,   371,   372,   376,   377,
     378,   382,   383,   387,   391,   392,   400,   403,   406,   412,
     417,   436,   439,   442,   448,   451,   454,   460,   463,   466,
     472,   474,   477,   480,   483,   486,   492,   493,   494,   495,
     499,   500,   504,   508,   509,   513,   514,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   535,
     536,   540,   541,   547,   550,   556,   557,   561,   565,   568,
     571,   574,   580,   582,   584,   586,   591,   594,   597,   600,
     606,   609,   612,   616,   619,   620,   624,   627,   628,   629,
     630,   634,   637,   638,   642,   645,   649,   652,   656,   659,
     663,   666,   670,   673,   677,   683,   684,   688,   689,   695,
     696,   700,   701,   705,   706,   707,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   724,   727
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
  "NO_CODE_BLOCK", "'.'", "','", "'{'", "'}'", "'('", "')'", "'['", "']'",
  "';'", "'*'", "'='", "':'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "$accept", "qualified_name",
  "type_name_list", "type_name", "primitive_type", "function_type",
  "array_type", "return_type_list", "program", "package_statement",
  "import_statements", "import_statement", "declarations",
  "type_declaration", "field_declarations", "field_declaration",
  "interface_function_declarations", "interface_function_declaration",
  "parameter_list", "function_declaration",
  "anonymous_function_declaration", "method_declaration", "code_block",
  "local_variable_declaration_statements",
  "local_variable_declaration_statement", "statemnet",
  "selection_statement", "if_statement", "else_statemnet",
  "switch_statement", "iteration_statemnet", "for_init", "for_expr",
  "for_incr", "jump_statement", "variable_declaration", "var_list",
  "primary_expression", "just_not_name", "complex_primary", "const_name",
  "array_complex_primary", "array_access", "field_access", "method_call",
  "method_access", "initializer_expression", "field_initial_list",
  "array_initial_list", "postfix_expression", "real_postfix_expression",
  "argument_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression", "base_expression",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      46,    44,   123,   125,    40,    41,    91,    93,    59,    42,
      61,    58,    43,    45,   126,    33,    47,    37,    60,    62,
      38,    94,   124
};
# endif

#define YYPACT_NINF -286

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-286)))

#define YYTABLE_NINF -206

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,   -48,    -2,    38,    40,    40,   112,   145,   145,  -286,
     178,  -286,  -286,  -286,  -286,  -286,   918,   -50,  1093,  -286,
     -24,    39,  -286,   145,   178,  -286,   178,  -286,  -286,  -286,
    -286,    50,    61,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,    91,   135,   678,    98,   -30,
    -286,  -286,  -286,   141,     4,   152,   155,   156,   181,  -286,
     -26,  -286,   178,  1124,   177,  -286,   185,   878,   878,  -286,
     184,  -286,  -286,  -286,  -286,  -286,  -286,   406,   878,  -286,
    -286,  -286,  -286,   149,   207,   182,  -286,  -286,   194,   208,
    -286,   209,   210,   212,   213,   218,  -286,   190,  -286,  -286,
     878,    87,   174,   239,     0,   256,   203,   193,   202,   277,
     282,  -286,  -286,    16,  -286,   678,   222,  1217,  1056,    -9,
     238,    62,  -286,  -286,   228,  1155,    70,  -286,  -286,  1217,
     130,  -286,  -286,    18,   229,   230,  -286,    -6,    10,    89,
     234,   460,   878,   878,   514,   246,   878,   568,  -286,  -286,
    -286,   878,   878,   878,   878,   878,   878,   878,   878,   878,
     878,   878,   878,   878,   878,   878,   878,   878,   878,   678,
    -286,    80,    32,  -286,   741,  1217,  -286,   241,  -286,   251,
    1056,  1217,    90,  -286,   244,   118,  -286,  -286,  -286,  1217,
    1155,  -286,  1056,   134,   878,   878,   253,  -286,   260,  -286,
    -286,   247,  -286,   107,   124,   245,   249,  -286,   166,   180,
    -286,   248,  -286,   252,   255,  -286,  -286,  -286,    87,    87,
     174,   174,   239,   239,   239,   239,     0,     0,   256,   203,
     193,   202,   277,  -286,  -286,  1056,   151,   254,   258,   241,
     261,   262,   622,  -286,    21,   804,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,   361,   371,  -286,  -286,    49,   409,
     259,   158,  -286,  1217,   241,  -286,   263,  -286,  -286,  1186,
    -286,  -286,  -286,  -286,   241,  -286,  1056,  -286,  -286,   257,
     264,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,   241,
    -286,  1056,   878,   878,   302,   834,   878,  -286,   121,  -286,
    -286,    44,   678,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,   878,  -286,  -286,  -286,  -286,  -286,  1217,
     954,   171,   173,  -286,   241,  -286,   878,   878,  -286,   241,
    -286,   265,   271,   273,  -286,   327,  -286,   270,   274,  -286,
     130,   194,  -286,   255,  -286,  -286,   276,   988,  1022,  -286,
    -286,  -286,  -286,   241,   241,   878,  -286,   878,   278,  -286,
     241,  -286,  -286,   279,  -286,   280,   312,  -286,   284,   285,
    -286,  -286,  -286,  -286,  -286,   -17,   283,   241,  -286,  -286,
    -286,  -286,  -286
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    34,    35,    38,
      36,    42,    46,    48,    44,   109,     0,     0,     0,     2,
       0,     0,     1,    31,    32,    39,    33,    43,    47,    49,
      45,     0,     0,    15,    16,    17,    18,    11,    12,    13,
      14,    19,    20,    21,    22,     0,     0,     0,     7,     0,
       6,     9,     8,     0,     0,     0,     0,     0,     0,    37,
       0,    40,    30,     0,     0,   110,     0,     0,     0,   114,
       0,   123,   124,   125,   120,   121,   122,     0,     0,   162,
     163,   164,   165,   111,     0,     0,   147,   153,   113,   116,
     112,     0,   117,   118,   119,     0,   196,   158,   154,   166,
       0,   170,   173,   176,   181,   184,   186,   188,   190,   192,
     194,   195,   197,     0,   106,     0,     0,     0,     0,     0,
       0,     0,    52,     3,     0,    23,     0,     4,    10,     0,
     111,   159,   160,     0,   120,     2,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,    64,     0,     0,    28,     0,    66,     0,
       0,     0,     0,    53,     0,     0,    56,    41,    24,     0,
      25,    27,     0,     0,     0,     0,     0,   139,     0,   140,
     138,   115,   141,     0,     0,     0,     0,   144,     0,     0,
     132,     0,   134,     0,   157,   167,   168,   169,   171,   172,
     174,   175,   180,   179,   177,   178,   182,   183,   185,   187,
     189,   191,   193,   198,   108,     0,     0,     0,     0,     0,
       0,     0,     0,    79,   111,     0,    80,    83,    85,    88,
      89,    86,    87,    82,   117,   118,   216,   217,     0,   201,
       0,     0,    67,     0,     0,    68,     0,    50,    54,     0,
      51,    57,     5,    26,     0,    70,     0,   151,   149,     0,
       0,   143,   142,   130,   148,   146,   145,   131,   133,     0,
      74,     0,     0,     0,     0,     0,     0,   104,     0,    78,
      81,     0,     0,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,     0,    84,    29,    65,    69,    55,     2,
       0,     0,     0,    71,     0,    72,     0,     0,    75,     0,
      76,     0,     0,     0,   100,     0,    99,     0,     0,   105,
     203,     0,   202,   199,   200,    58,     0,     0,     0,    73,
     150,   152,    77,     0,     0,     0,   102,     0,     0,    98,
       0,    59,    60,     0,    62,     0,    90,    95,     0,     0,
     103,   101,    94,    61,    63,     0,     0,     0,    93,    92,
      91,    96,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,    -4,  -169,   -14,   -39,  -286,   -25,  -112,  -286,  -286,
     348,    33,    28,    13,  -286,   214,  -286,   204,  -130,    34,
    -286,    37,   -46,  -286,   150,  -286,  -286,   -12,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,    -5,  -286,  -286,    93,  -286,
    -286,  -286,  -163,  -159,  -286,  -286,  -286,   266,   281,  -286,
    -286,  -286,    59,  -286,   119,   123,   108,   113,   226,   232,
     233,   231,   235,  -286,     7,   237,   -70,  -286,  -286,    99,
    -286,  -285
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   130,   126,   176,    50,    51,    52,   177,     6,     7,
       8,     9,    10,    11,   182,   183,   185,   186,   119,    12,
      86,    13,   178,   245,   246,   247,   248,   249,   380,   250,
     251,   335,   357,   369,   252,    14,    16,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   137,   138,    97,
      98,   213,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   257,   258,   259,
     313,   260
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    21,    49,   193,    57,    30,   261,   139,    84,   237,
     337,   254,    48,   188,    48,   255,   158,   159,    15,    30,
      53,    30,    85,    27,    54,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,    24,    26,    27,    84,    27,
     123,    25,   236,    83,    28,   171,    58,    29,   114,   127,
     115,    62,    85,   124,    59,   174,    25,    30,    28,    48,
      28,    29,   179,    29,    17,   196,   180,   197,   264,    69,
     117,   204,   370,    83,   209,    27,    84,   214,   273,   118,
     274,   198,   254,   199,   117,   140,   255,   169,   160,   161,
      85,    58,  -203,   192,   170,  -136,    28,   142,   117,    29,
     321,  -203,    84,   173,    18,    84,    19,   235,    84,    60,
      19,    83,    22,    48,    48,   191,    85,    61,    78,    85,
     301,    48,    85,   289,    63,    48,   131,   132,   184,   302,
      84,   262,   254,    64,   265,   128,   255,    83,   254,   322,
      83,   189,   255,    83,    85,   190,   275,     1,     2,   205,
     206,   169,     3,   211,     4,     5,   181,    65,   234,   150,
     169,   127,   200,   267,   324,    83,   151,   266,    58,   253,
     244,    48,   298,   152,   153,   272,    48,    48,   196,   329,
     281,   256,     1,     2,   184,    48,    48,     3,    48,   290,
       5,   270,   169,   294,   254,   169,    66,   282,   255,   339,
      58,   277,   278,    84,  -136,   179,   142,   116,   346,   276,
     215,   216,   217,   148,   149,     1,     2,    85,   317,    58,
       3,   141,   179,  -136,   120,   142,   291,   121,   323,   189,
     325,    48,   343,   315,   122,   363,   365,   198,    83,   285,
     253,   244,   189,   328,   179,   330,   347,   123,   348,   316,
     128,   169,   256,   286,   144,   127,   154,   155,   133,    48,
     156,   157,   129,    84,   145,    48,   222,   223,   224,   225,
     162,   163,    48,   218,   219,   226,   227,    85,   349,   220,
     221,   143,  -135,   352,   165,   146,  -127,    48,  -128,  -129,
     336,   244,   147,   164,   166,   167,   172,   340,    83,   331,
     332,   168,   256,   338,   181,   173,   187,   366,   367,   201,
     194,   195,   210,   174,   372,    48,    48,   263,   269,   279,
     344,   280,   283,  -126,   284,   287,   169,   288,   292,   378,
     333,   382,   293,   350,   351,   295,   296,   314,   326,   375,
     353,   318,   358,    48,    48,   327,   354,   355,   359,   360,
      67,    68,    69,   244,   361,    23,   371,   373,   374,   376,
     377,   381,   368,   379,   256,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,    71,    72,    73,    74,   271,
     228,    75,    76,    19,   341,   300,   268,   229,   231,   230,
     342,    78,     0,   232,     0,   356,   233,   203,     0,    79,
      80,    81,    82,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,   208,     0,     0,     0,    67,
      68,    69,  -204,     0,     0,     0,     0,  -127,     0,     0,
       0,  -204,  -205,     0,    70,     0,     0,  -128,     0,     0,
       0,  -205,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    71,    72,    73,   134,     0,     0,
      75,    76,   135,     0,     0,     0,     0,     0,    77,   136,
      78,     0,    46,    67,    68,    69,     0,     0,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    71,    72,
      73,    74,     0,     0,    75,    76,   135,     0,     0,     0,
       0,     0,    77,   202,    78,     0,    46,    67,    68,    69,
       0,     0,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    71,    72,    73,   134,     0,     0,    75,    76,
      19,     0,     0,     0,     0,     0,    77,   207,    78,     0,
      46,    67,    68,    69,     0,     0,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    71,    72,    73,    74,
       0,     0,    75,    76,    19,     0,     0,     0,     0,     0,
      77,     0,    78,   212,    46,    67,    68,    69,     0,     0,
      79,    80,    81,    82,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      71,    72,    73,    74,     0,     0,    75,    76,    19,     0,
       0,     0,     0,     0,    77,     0,    78,     0,    46,     0,
     297,    67,    68,    69,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    71,    72,    73,    74,
       0,     0,    75,    76,    19,     0,     0,     0,     0,     0,
      77,     0,    78,     0,    46,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    67,    68,    69,   237,     0,   238,
     239,   240,     0,   241,     0,     0,     0,     0,     1,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,     0,     0,    75,    76,    19,     0,     0,
       0,     0,     0,     0,   243,    78,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    67,    68,    69,
     237,     0,   238,   239,   240,     0,   241,     0,     0,     0,
       0,     1,     0,   242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
       0,     0,    71,    72,    73,    74,     0,     0,    75,    76,
      19,     1,     0,     0,     0,     0,     0,   299,    78,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
       0,     0,    71,    72,    73,    74,     0,     0,    75,    76,
      19,    67,    68,    69,     0,     0,     0,     0,    78,     0,
       0,     0,   334,     0,     0,     0,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
       0,     0,    75,    76,    19,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,    31,     0,     0,    32,
      79,    80,    81,    82,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,    45,
       0,     0,    31,     0,    46,    32,     0,     0,    47,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,    31,     0,   175,    32,
      46,     0,   345,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
      31,     0,   175,    32,    46,     0,   362,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    31,     0,   175,    32,    46,     0,
     364,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,   174,     0,
     175,    31,    46,    55,    56,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    31,     0,     0,    32,     0,     0,     0,    46,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,    31,     0,     0,    32,     0,     0,   125,
      46,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    31,     0,     0,    32,     0,   175,
       0,    46,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,   319,     0,     0,    31,     0,     0,    32,     0,
       0,   320,    46,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
       4,     5,    16,   133,    18,    10,   175,    77,    47,    26,
     295,   174,    16,   125,    18,   174,    16,    17,    66,    24,
      70,    26,    47,    10,    74,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     7,     8,    24,    77,    26,
      66,     8,   172,    47,    10,   115,    70,    10,    78,    63,
      80,    23,    77,    79,    78,    72,    23,    62,    24,    63,
      26,    24,    71,    26,    66,    71,    75,    73,   180,    25,
      66,   141,   357,    77,   144,    62,   115,   147,   190,    75,
     192,    71,   245,    73,    66,    78,   245,    71,    88,    89,
     115,    70,    71,    75,    78,    74,    62,    76,    66,    62,
     269,    80,   141,   117,    66,   144,    66,    75,   147,    70,
      66,   115,     0,   117,   118,   129,   141,    78,    74,   144,
      71,   125,   147,   235,    74,   129,    67,    68,    66,    80,
     169,   177,   295,    72,   180,    73,   295,   141,   301,   269,
     144,    71,   301,   147,   169,    75,   192,    37,    38,   142,
     143,    71,    42,   146,    44,    45,    66,    66,    78,   100,
      71,   175,    73,    73,   276,   169,    79,   181,    70,   174,
     174,   175,   242,    86,    87,   189,   180,   181,    71,   291,
      73,   174,    37,    38,    66,   189,   190,    42,   192,   235,
      45,    73,    71,   239,   357,    71,    61,    73,   357,    78,
      70,   194,   195,   242,    74,    71,    76,    66,   320,    75,
     151,   152,   153,    23,    24,    37,    38,   242,   264,    70,
      42,    72,    71,    74,    72,    76,    75,    72,   274,    71,
     276,   235,   302,    75,    78,   347,   348,    71,   242,    73,
     245,   245,    71,   289,    71,   291,    75,    66,    75,   263,
      73,    71,   245,    73,    72,   269,    82,    83,    74,   263,
      21,    22,    77,   302,    70,   269,   158,   159,   160,   161,
      14,    15,   276,   154,   155,   162,   163,   302,   324,   156,
     157,    74,    74,   329,    91,    76,    76,   291,    76,    76,
     295,   295,    74,    90,    92,    18,    74,   301,   302,   292,
     293,    19,   295,   296,    66,   319,    78,   353,   354,    75,
      81,    81,    66,    72,   360,   319,   320,    66,    74,    66,
     313,    61,    77,    76,    75,    77,    71,    75,    74,   375,
      28,   377,    74,   326,   327,    74,    74,    78,    81,    27,
      75,    78,   335,   347,   348,    81,    75,    74,    78,    75,
      23,    24,    25,   357,    78,     7,    78,    78,    78,    75,
      75,    78,   355,   375,   357,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    58,    59,    60,    61,   185,
     164,    64,    65,    66,   301,   245,   182,   165,   167,   166,
     301,    74,    -1,   168,    -1,    78,   169,   141,    -1,    82,
      83,    84,    85,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,   144,    -1,    -1,    -1,    23,
      24,    25,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    71,    -1,    38,    -1,    -1,    76,    -1,    -1,
      -1,    80,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    23,    24,    25,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,    23,    24,    25,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      76,    23,    24,    25,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    23,    24,    25,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      78,    23,    24,    25,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    23,    24,    25,    26,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    23,    24,    25,
      26,    -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    37,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    58,    59,    60,    61,    -1,    -1,    64,    65,
      66,    23,    24,    25,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    38,    -1,    -1,    41,
      82,    83,    84,    85,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    38,    -1,    76,    41,    -1,    -1,    80,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    38,    -1,    74,    41,
      76,    -1,    78,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    74,    41,    76,    -1,    78,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    74,    41,    76,    -1,
      78,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    38,    76,    40,    41,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    76,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    75,
      76,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    38,    -1,    -1,    41,    -1,    74,
      -1,    76,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    75,    76,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   101,   102,   103,   104,
     105,   106,   112,   114,   128,    66,   129,    66,    66,    66,
      94,    94,     0,   103,   105,   104,   105,   106,   112,   114,
     128,    38,    41,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    71,    76,    80,    94,    96,
      97,    98,    99,    70,    74,    40,    41,    96,    70,    78,
      70,    78,   105,    74,    72,    66,    61,    23,    24,    25,
      38,    58,    59,    60,    61,    64,    65,    72,    74,    82,
      83,    84,    85,    94,    97,    99,   113,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   142,   143,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    78,    80,    66,    66,    75,   111,
      72,    72,    78,    66,    79,    75,    95,    96,    73,    77,
      94,   145,   145,    74,    61,    66,    73,   140,   141,   159,
     157,    72,    76,    74,    72,    70,    76,    74,    23,    24,
     145,    79,    86,    87,    82,    83,    21,    22,    16,    17,
      88,    89,    14,    15,    90,    91,    92,    18,    19,    71,
      78,   159,    74,    96,    72,    74,    96,   100,   115,    71,
      75,    66,   107,   108,    66,   109,   110,    78,   100,    71,
      75,    96,    75,   111,    81,    81,    71,    73,    71,    73,
      73,    75,    73,   140,   159,   157,   157,    73,   141,   159,
      66,   157,    75,   144,   159,   145,   145,   145,   147,   147,
     148,   148,   149,   149,   149,   149,   150,   150,   151,   152,
     153,   154,   155,   158,    78,    75,   111,    26,    28,    29,
      30,    32,    39,    73,    94,   116,   117,   118,   119,   120,
     122,   123,   127,   128,   135,   136,   157,   160,   161,   162,
     164,    95,   115,    66,   100,   115,    96,    73,   108,    74,
      73,   110,    96,   100,   100,   115,    75,   157,   157,    66,
      61,    73,    73,    77,    75,    73,    73,    77,    75,   100,
     115,    75,    74,    74,   115,    74,    74,    78,   159,    73,
     117,    71,    80,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,   163,    78,    75,    96,   115,    78,    66,
      75,    95,   111,   115,   100,   115,    81,    81,   115,   100,
     115,   157,   157,    28,    78,   124,   128,   164,   157,    78,
      94,   131,   162,   159,   157,    78,   100,    75,    75,   115,
     157,   157,   115,    75,    75,    74,    78,   125,   157,    78,
      75,    78,    78,   100,    78,   100,   115,   115,   157,   126,
     164,    78,   115,    78,    78,    27,    75,    75,   115,   120,
     121,    78,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   112,   112,
     113,   113,   113,   113,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   127,   127,   128,   128,   128,   129,
     129,   130,   130,   130,   131,   131,   131,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   134,   134,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   144,   145,   145,
     145,   145,   146,   146,   146,   146,   147,   147,   147,   147,
     148,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     150,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   164,   164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     5,     4,     1,     3,
       3,     2,     2,     2,     1,     1,     1,     3,     1,     2,
       3,     5,     1,     2,     1,     2,     1,     2,     1,     2,
       6,     6,     4,     1,     2,     3,     1,     2,     4,     5,
       5,     6,     5,     6,     2,     4,     5,     6,     6,     7,
       4,     5,     5,     6,     7,     8,     8,     9,     3,     2,
       1,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       5,     7,     1,     1,     5,     5,     7,     7,     2,     1,
       1,     2,     1,     1,     2,     3,     4,     5,     6,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     4,     3,     4,     3,     1,     1,     2,     3,     3,
       3,     3,     4,     4,     3,     4,     4,     1,     4,     3,
       5,     3,     5,     1,     1,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 125 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_string((yyvsp[0].id)));
  }
#line 1785 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 129 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_string((yyvsp[0].id)));
  }
#line 1794 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 136 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = null;
  }
#line 1802 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 139 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = null;
  }
#line 1810 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 145 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info((yyvsp[0].primitive_type), null);
  }
#line 1818 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_DEFINED, (yyvsp[0].linked_list));
  }
#line 1826 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 151 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_ARRAY, (yyvsp[0].array_type));
  }
#line 1834 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_FUNC, (yyvsp[0].func_proto_type));
  }
#line 1842 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 157 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_INTF, null);
  }
#line 1850 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 163 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1858 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 166 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1866 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 169 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1874 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1882 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 175 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1890 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 178 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1898 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 181 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1906 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 184 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1914 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 187 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1922 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 190 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1930 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 193 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1938 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 196 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1946 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 202 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1954 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 205 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1962 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 208 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1970 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 211 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1978 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 217 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.array_type) = new_array_type((yyvsp[-2].ival), (yyvsp[0].new_type_info));
  }
#line 1986 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 84:
#line 342 "yacc/koala.y" /* yacc.c:1646  */
    {
    //expr_tree_print($1);
  }
#line 1994 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 400 "yacc/koala.y" /* yacc.c:1646  */
    {
    new_var_decl((yyvsp[-2].linked_list), (yyvsp[-1].new_type_info), null);
  }
#line 2002 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 403 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2010 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 406 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2018 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 412 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("ID: %s\n", (yyvsp[0].id).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].id)));
  }
#line 2028 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 417 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("ID: %s\n", (yyvsp[0].id).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].id)));
  }
#line 2038 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 436 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2046 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 439 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2054 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 442 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2062 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 448 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2070 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 115:
#line 451 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2078 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 116:
#line 454 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2086 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 117:
#line 460 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 463 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2102 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 466 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2110 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 472 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2117 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 474 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2125 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 477 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2133 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 480 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2141 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 483 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2149 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 125:
#line 486 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2157 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 547 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2165 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 550 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2173 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 565 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2181 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 568 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2189 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 571 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2197 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 574 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2205 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 580 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2212 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 582 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2219 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 584 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2226 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 586 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2233 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 591 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2241 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 594 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2249 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 597 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2257 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 600 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2265 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 606 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2273 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 609 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2281 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 612 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2287 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 616 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2295 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 619 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2301 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 620 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2307 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 624 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2315 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 627 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2321 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 628 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2327 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 629 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2333 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 630 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2339 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 634 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2347 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 637 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2353 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 638 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2359 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 642 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2367 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 645 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2373 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 649 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2381 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 652 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2387 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 656 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2395 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 659 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2401 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 663 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2409 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 666 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2415 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 670 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2423 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 673 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2429 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 677 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2437 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 216:
#line 724 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2445 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 727 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2453 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2457 "koala_yacc.c" /* yacc.c:1646  */
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
#line 734 "yacc/koala.y" /* yacc.c:1906  */


int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

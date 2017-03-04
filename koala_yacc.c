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

  char *ident;
  uint64 ival;
  double fval;
  char *str_val;
  struct value *value;
  struct list_head *list;

#line 197 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

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
      73,    74,    77,    82,    72,    83,    71,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    70,
      88,    80,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,    92,    79,    84,     2,     2,     2,
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
       0,   130,   130,   131,   135,   136,   140,   141,   145,   146,
     147,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   167,   168,   169,   170,   174,   178,
     182,   183,   184,   185,   186,   187,   188,   192,   196,   197,
     201,   202,   208,   209,   210,   211,   212,   213,   214,   215,
     219,   220,   221,   222,   226,   227,   231,   235,   236,   240,
     241,   242,   243,   244,   245,   249,   250,   254,   255,   259,
     260,   266,   267,   268,   269,   273,   274,   275,   276,   282,
     283,   284,   285,   289,   293,   294,   299,   300,   304,   305,
     309,   310,   311,   312,   316,   317,   321,   322,   326,   327,
     331,   335,   336,   337,   341,   342,   343,   347,   348,   352,
     356,   357,   362,   363,   364,   368,   369,   373,   374,   475,
     476,   480,   481,   482,   486,   487,   491,   492,   493,   494,
     498,   499,   500,   501,   502,   503,   507,   508,   509,   510,
     514,   515,   519,   523,   524,   528,   529,   535,   536,   541,
     542,   543,   544,   545,   546,   550,   551,   555,   561,   562,
     566,   567,   571,   575,   576,   577,   578,   582,   583,   584,
     585,   589,   590,   591,   592,   596,   597,   598,   602,   603,
     604,   608,   609,   610,   611,   612,   616,   617,   618,   622,
     623,   627,   628,   632,   633,   637,   638,   642,   643,   647,
     651,   652,   658,   659,   663,   664,   668,   669,   670,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   687,
     688
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
  "IFX", "NO_CODE_BLOCK", "';'", "'.'", "','", "'('", "')'", "'['", "']'",
  "'*'", "'{'", "'}'", "'='", "':'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept", "semicolons",
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
      59,    46,    44,    40,    41,    91,    93,    42,   123,   125,
      61,    58,    43,    45,   126,    33,    47,    37,    60,    62,
      38,    94,   124
};
# endif

#define YYPACT_NINF -287

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-287)))

#define YYTABLE_NINF -209

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,   -37,   -34,     3,     6,     6,    76,    30,    30,  -287,
      71,  -287,  -287,  -287,  -287,  -287,   357,    20,    16,   974,
    -287,    65,   139,  -287,    30,    71,  -287,    71,  -287,  -287,
    -287,  -287,    43,  -287,  -287,  -287,  -287,  -287,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,    58,    60,   895,    78,
    -287,  -287,  -287,  -287,   -31,    77,   -14,    -9,    87,    90,
      89,    89,  -287,   105,   110,   -16,   110,    71,  1067,  -287,
     131,   895,   895,  -287,   130,  -287,  -287,  -287,  -287,  -287,
    -287,   895,   601,  -287,  -287,  -287,  -287,    75,   137,  -287,
    -287,   148,  -287,   149,  -287,   152,   159,   164,   168,   176,
    -287,  -287,    39,  -287,  -287,   895,   -45,   129,   209,    -6,
     223,   160,   161,   163,   233,   234,  -287,    40,  -287,   895,
    -287,  1157,  1004,   103,  1004,   104,   189,   220,   110,   110,
    -287,  -287,    89,  1097,  -287,   112,  1157,  -287,  -287,    11,
     185,   179,  -287,   181,    42,  -287,    54,   895,   664,   196,
     895,   727,  -287,  -287,  -287,   895,   895,   895,   895,   895,
     895,   895,   895,   895,   895,   895,   895,   895,   895,   895,
     895,   895,   895,  -287,   895,   115,  -287,  1157,   419,  -287,
     187,  -287,   199,  1004,   187,  -287,  1004,  1157,   -54,  -287,
     200,   -35,  -287,   110,  -287,  1157,  1097,  -287,  1004,   116,
     193,   895,   202,  -287,  -287,   194,  -287,    55,    73,  -287,
     195,  -287,   198,   204,  -287,  -287,  -287,   -45,   -45,   129,
     129,   209,   209,   209,   209,    -6,    -6,   223,   160,   161,
     163,   233,  -287,  -287,   124,  -287,   201,   208,   187,   211,
     212,   783,  -287,    91,   482,  -287,  -287,  -287,  -287,  -287,
    -287,  -287,  -287,   351,   380,  -287,  -287,   -26,   567,   207,
    -287,  1157,   187,  -287,  -287,   187,  -287,    89,  -287,  -287,
     213,  -287,  -287,  -287,  -287,   187,  -287,  1004,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,  1157,  -287,   895,   895,
     260,   545,   895,  -287,   127,  -287,  -287,   938,   895,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,   895,
    -287,  -287,  -287,  -287,   110,  1127,  -287,   187,  -287,  -287,
     215,   216,   218,  -287,   839,  -287,   222,   224,  -287,    75,
     148,  -287,   204,  -287,  1157,  1037,   128,   134,  -287,   187,
     187,   895,  -287,   895,   226,  -287,   187,   110,    89,  1037,
    1037,   267,  -287,   227,   229,  -287,  -287,  -287,   110,   110,
      89,   110,    89,   -22,   230,   187,   110,   110,  -287,  -287,
    -287,  -287,  -287
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    34,    35,    38,
      36,    42,    46,    48,    44,   115,     0,     0,     0,     0,
       4,     0,     0,     1,    31,    32,    39,    33,    43,    47,
      49,    45,     0,    15,    16,    17,    18,    11,    12,    13,
      14,    19,    20,    21,    22,    23,     0,     0,     0,     9,
     117,     8,   118,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,    37,     0,    40,    30,     0,   116,
       0,     0,     0,   121,     0,   133,   134,   135,   130,   131,
     132,     0,     0,   167,   168,   169,   170,   119,     0,   148,
     158,   120,   123,   125,   126,     0,   127,   128,   129,     0,
     122,   147,   163,   159,   171,     0,   175,   178,   181,   186,
     189,   191,   193,   195,   197,   199,   200,     0,   112,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    52,    53,
       5,     3,     0,    24,    67,     0,     0,   164,   165,     0,
       0,     4,   149,     0,     0,   155,     0,     0,     0,     0,
       0,     0,   160,   161,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,    69,     0,     0,    65,
       0,    71,     0,     0,     0,    79,     0,     0,     0,    54,
       0,     0,    57,    41,    25,     0,    26,    28,     0,     0,
     124,     0,     0,   151,   150,     0,   152,     0,     0,   142,
       0,   144,     0,   162,   172,   173,   174,   176,   177,   179,
     180,   185,   184,   182,   183,   187,   188,   190,   192,   194,
     196,   198,   201,   114,     0,     6,     0,     0,     0,     0,
       0,     0,    85,   119,     0,    86,    89,    91,    94,    95,
      92,    93,    88,   127,   128,   219,   220,     0,   204,     0,
      72,     0,     0,    73,    80,     0,    81,     0,    50,    55,
       0,    51,    58,    68,    27,     0,    75,     0,   157,    29,
     156,   140,   154,   153,   141,   143,     0,    66,     0,     0,
       0,     0,     0,   110,     0,    84,    87,     0,     0,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
      90,    70,    74,    82,    56,     0,    76,     0,    77,     7,
       0,     0,     0,   106,     0,   105,     0,     0,   111,   206,
       0,   205,   202,   203,     4,     0,     0,     0,    78,     0,
       0,     0,   108,     0,     0,   104,     0,    59,     0,     0,
       0,    96,   101,     0,     0,   109,   107,   100,    60,    61,
       0,    63,     0,     0,     0,     0,    62,    64,    99,    98,
      97,   102,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -287,   -13,    -4,  -287,    18,  -287,   278,  -287,  -287,  -287,
    -287,   298,    12,    19,     4,  -287,   118,  -287,   117,  -117,
      -5,   -51,    13,  -287,    25,  -287,    37,  -287,    63,  -287,
    -287,   -48,  -287,  -287,  -287,  -287,  -287,  -287,  -287,    -8,
    -287,  -287,  -287,    21,  -287,  -287,  -287,  -287,  -154,  -150,
    -287,  -287,  -287,  -287,   165,   107,  -287,  -287,  -287,   -50,
    -287,    83,    84,    -7,    81,   151,   147,   150,   146,   153,
    -287,   -63,   -74,  -287,  -287,    24,  -287,  -286
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    64,    87,   234,    88,    51,    52,    53,   143,     6,
       7,     8,     9,    10,    11,   188,   189,   191,   192,   180,
     135,   123,    12,    89,    13,    18,   181,   244,   245,   246,
     247,   248,   370,   249,   250,   324,   343,   354,   251,    14,
      16,    54,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   144,   145,   102,   103,   212,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   256,   257,   258,   309,   259
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    31,   190,   236,   326,   125,   184,   146,    66,
     162,   163,    49,   187,    28,    49,   194,    31,   140,    31,
      26,   137,   138,    29,   253,   268,    25,    27,   254,    28,
      15,    28,   155,    17,    50,    30,    26,    60,    29,   118,
      29,   156,   157,    67,   271,   175,   297,   128,   129,   119,
      30,   130,    30,   121,   298,   154,   178,   355,   121,    31,
     122,   132,   152,   153,    49,   124,   262,     1,     2,   265,
      19,    28,     3,    20,   208,     5,    23,   213,   121,   274,
      29,   275,   164,   165,   205,   198,   134,   210,   199,    57,
     253,    55,    30,    56,   254,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,   214,   215,   216,     1,     2,
     173,   232,   174,     3,   202,   255,    68,    49,    49,   193,
      49,   203,    70,     1,     2,    69,   174,   202,     3,    49,
       4,     5,    49,   204,   282,    62,    63,   253,   278,   176,
     179,   254,   179,   253,   120,   174,    63,   254,  -146,    63,
     147,   179,   283,    -9,   197,   221,   222,   223,   224,    62,
     317,   185,    63,  -206,  -146,   126,   147,   294,   127,    -9,
     252,  -206,   130,    49,   243,   182,   182,   183,   186,    49,
     131,   255,    49,    49,   195,   233,   196,   174,   182,   253,
     277,    49,    49,   254,    49,   235,   286,   328,   287,   174,
     195,   179,   349,   139,   179,   267,   182,   136,   350,    62,
      65,   158,   159,   273,   179,   148,   179,   260,   348,   149,
     263,   264,  -145,   266,   332,   320,   321,   150,   255,   327,
     160,   161,   360,   362,  -137,   276,   252,   166,   167,  -138,
     243,   217,   218,  -139,   219,   220,   333,   225,   226,   151,
     168,   171,   169,   172,   314,   170,   187,    49,   190,   200,
     -29,   344,   201,   209,   337,   178,   261,   270,  -136,   279,
     281,   284,   285,    49,   288,   290,   174,   310,   353,   311,
     255,   289,    49,   325,   291,   292,   315,   243,   322,   339,
     340,   341,   345,   329,   363,   179,   356,    61,   346,   312,
     371,   364,   313,   365,   319,    24,   269,   296,   272,   280,
     336,    49,   316,   207,   318,   369,   228,   230,   330,   227,
     229,   331,   347,     0,     0,   231,     0,     0,     0,     0,
      49,    49,     0,   134,     0,   358,   359,   361,     0,   243,
       0,     0,     0,     0,     0,    49,    49,   366,     0,   367,
       0,     0,   176,   179,   338,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,     0,     0,   179,   179,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,     0,
       0,     0,     0,   357,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,     0,    32,     0,     0,     0,     0,
     368,     0,   372,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,  -207,    20,     0,  -137,     0,     0,    46,
       0,  -207,    47,     0,     0,     0,     0,    48,     0,     0,
       0,     0,    71,    72,    73,   236,     0,   237,   238,   239,
       0,   240,  -208,     0,     0,  -138,     1,    74,   241,     0,
    -208,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    75,    76,
      77,    78,     0,     0,    79,    80,    20,     0,     0,     0,
       0,     0,    81,     0,    47,     0,     0,    82,   242,     0,
       0,    83,    84,    85,    86,    71,    72,    73,   236,     0,
     237,   238,   239,     0,   240,     0,     0,     0,     0,     1,
      74,   241,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    75,    76,    77,    78,     0,     0,    79,    80,    20,
       0,     0,     0,     0,     0,    81,     0,    47,     0,     0,
      82,   295,     0,     0,    83,    84,    85,    86,    71,    72,
      73,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     0,     1,    74,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    75,    76,    77,    78,     0,     0,
      79,    80,    20,     0,     0,   323,     0,     0,    81,     0,
      47,     0,     0,    82,    71,    72,    73,    83,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      75,    76,    77,    78,     0,     0,    79,    80,   141,     0,
       0,     0,     0,     0,    81,     0,    47,     0,     0,    82,
     142,     0,     0,    83,    84,    85,    86,    71,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    75,    76,    77,    78,     0,     0,    79,
      80,   141,     0,     0,     0,     0,     0,    81,     0,    47,
       0,     0,    82,   206,     0,     0,    83,    84,    85,    86,
      71,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    75,    76,    77,    78,
       0,     0,    79,    80,    20,     0,     0,     0,     0,     0,
      81,   211,    47,     0,     0,    82,    71,    72,    73,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    75,    76,    77,    78,     0,     0,    79,    80,
      20,     0,     0,   293,     0,     0,    81,     0,    47,     0,
       0,    82,    71,    72,    73,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    75,    76,
      77,    78,     0,     0,    79,    80,    20,     0,     0,   342,
       0,     0,    81,     0,    47,     0,     0,    82,    71,    72,
      73,    83,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    75,    76,    77,    78,     0,     0,
      79,    80,    20,    73,     0,     0,     0,     0,    81,     0,
      47,     0,     0,    82,     0,     0,    74,    83,    84,    85,
      86,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    75,    76,    77,
      78,     0,     0,    79,    80,    20,     0,     0,     0,     0,
       0,    81,    32,    47,    58,    59,    82,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    47,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,   177,     0,    47,
       0,     0,   178,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    62,     0,     0,
     177,     0,    47,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,   133,    47,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
     177,     0,    47,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,   334,     0,     0,     0,     0,     0,
       0,   335,    47,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,    47
};

static const yytype_int16 yycheck[] =
{
       4,     5,    10,    38,    26,   291,    57,   124,    82,    22,
      16,    17,    16,    67,    10,    19,   133,    25,    81,    27,
       8,    71,    72,    10,   178,    79,     7,     8,   178,    25,
      67,    27,    77,    67,    16,    10,    24,    19,    25,    70,
      27,    86,    87,    24,    79,   119,    72,    60,    61,    80,
      25,    67,    27,    67,    80,   105,    78,   343,    67,    67,
      74,    77,    23,    24,    68,    74,   183,    37,    38,   186,
      67,    67,    42,    67,   148,    45,     0,   151,    67,   196,
      67,   198,    88,    89,   147,    74,    68,   150,   139,    73,
     244,    71,    67,    73,   244,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   155,   156,   157,    37,    38,
      70,   174,    72,    42,    72,   178,    73,   121,   122,   132,
     124,    79,    62,    37,    38,    67,    72,    72,    42,   133,
      44,    45,   136,    79,    79,    70,    71,   291,   201,   121,
     122,   291,   124,   297,    67,    72,    71,   297,    73,    71,
      75,   133,    79,    78,   136,   162,   163,   164,   165,    70,
     277,   124,    71,    72,    73,    78,    75,   241,    78,    78,
     178,    80,    67,   177,   178,    72,    72,    74,    74,   183,
      70,   244,   186,   187,    72,    70,    74,    72,    72,   343,
      74,   195,   196,   343,   198,   177,    72,    70,    74,    72,
      72,   183,    74,    73,   186,   187,    72,    76,    74,    70,
      71,    82,    83,   195,   196,    78,   198,   180,   335,    71,
     183,   184,    73,   186,   298,   288,   289,    75,   291,   292,
      21,    22,   349,   350,    75,   198,   244,    14,    15,    75,
     244,   158,   159,    75,   160,   161,   309,   166,   167,    73,
      90,    18,    91,    19,   267,    92,    67,   261,    38,    74,
      81,   324,    81,    67,   315,    78,    67,    67,    75,    67,
      76,    76,    74,   277,    73,   238,    72,    70,   341,   261,
     343,    73,   286,   291,    73,    73,    73,   291,    28,    74,
      74,    73,    70,   297,    27,   277,    70,    19,    74,   262,
      70,    74,   265,    74,   286,     7,   188,   244,   191,   202,
     315,   315,   275,   148,   277,   363,   169,   171,   297,   168,
     170,   297,   335,    -1,    -1,   172,    -1,    -1,    -1,    -1,
     334,   335,    -1,   315,    -1,   348,   349,   350,    -1,   343,
      -1,    -1,    -1,    -1,    -1,   349,   350,   360,    -1,   362,
      -1,    -1,   334,   335,   317,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,   349,   350,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,
      -1,    -1,    -1,   346,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    38,    -1,    -1,    -1,    -1,
     363,    -1,   365,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    67,    -1,    75,    -1,    -1,    72,
      -1,    80,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      -1,    32,    72,    -1,    -1,    75,    37,    38,    39,    -1,
      80,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    83,    84,    85,    23,    24,    25,    26,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    83,    84,    85,    23,    24,
      25,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    78,    23,    24,    25,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    83,    84,    85,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    78,    79,    -1,    -1,    82,    83,    84,    85,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    -1,    -1,    78,    23,    24,    25,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    70,    -1,    -1,    73,    -1,    75,    -1,
      -1,    78,    23,    24,    25,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    70,
      -1,    -1,    73,    -1,    75,    -1,    -1,    78,    23,    24,
      25,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    67,    25,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,    78,    -1,    -1,    38,    82,    83,    84,
      85,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    38,    75,    40,    41,    78,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    78,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    -1,
      73,    -1,    75,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    75,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   102,   103,   104,   105,
     106,   107,   115,   117,   132,    67,   133,    67,   118,    67,
      67,    95,    95,     0,   104,   106,   105,   106,   107,   115,
     117,   132,    38,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    72,    75,    80,    95,
      97,    98,    99,   100,   134,    71,    73,    73,    40,    41,
      97,    99,    70,    71,    94,    71,    94,   106,    73,    67,
      62,    23,    24,    25,    38,    59,    60,    61,    62,    65,
      66,    73,    78,    82,    83,    84,    85,    95,    97,   116,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   149,   150,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,    70,    80,
      67,    67,    74,   114,    74,   114,    78,    78,    94,    94,
      67,    70,    77,    74,    97,   113,    76,   152,   152,    73,
     164,    67,    79,   101,   147,   148,   165,    75,    78,    71,
      75,    73,    23,    24,   152,    77,    86,    87,    82,    83,
      21,    22,    16,    17,    88,    89,    14,    15,    90,    91,
      92,    18,    19,    70,    72,   165,    97,    73,    78,    97,
     112,   119,    72,    74,   112,   119,    74,    67,   108,   109,
      38,   110,   111,    94,   112,    72,    74,    97,    74,   114,
      74,    81,    72,    79,    79,   164,    79,   147,   165,    67,
     164,    74,   151,   165,   152,   152,   152,   154,   154,   155,
     155,   156,   156,   156,   156,   157,   157,   158,   159,   160,
     161,   162,   164,    70,    96,    97,    26,    28,    29,    30,
      32,    39,    79,    95,   120,   121,   122,   123,   124,   126,
     127,   131,   132,   141,   142,   164,   166,   167,   168,   170,
     119,    67,   112,   119,   119,   112,   119,    97,    79,   109,
      67,    79,   111,    97,   112,   112,   119,    74,   164,    67,
     148,    76,    79,    79,    76,    74,    72,    74,    73,    73,
     119,    73,    73,    70,   165,    79,   121,    72,    80,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   169,
      70,    97,   119,   119,    94,    73,   119,   112,   119,    97,
     164,   164,    28,    70,   128,   132,   170,   164,    70,    95,
     136,   168,   165,   164,    67,    74,   113,   114,   119,    74,
      74,    73,    70,   129,   164,    70,    74,    94,   112,    74,
      74,   119,   119,   164,   130,   170,    70,   119,    94,    94,
     112,    94,   112,    27,    74,    74,    94,    94,   119,   124,
     125,    70,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    99,    99,    99,    99,   100,   101,
     102,   102,   102,   102,   102,   102,   102,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   115,   116,   116,   116,   116,   117,
     117,   117,   117,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   127,   127,   127,   128,   128,   128,   129,   129,   130,
     131,   131,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   137,   137,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   140,
     141,   141,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   146,   146,   146,   146,   147,   147,   148,   149,   149,
     150,   150,   151,   152,   152,   152,   152,   153,   153,   153,
     153,   154,   154,   154,   154,   155,   155,   155,   156,   156,
     156,   157,   157,   157,   157,   157,   158,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     5,     4,     1,
       3,     2,     2,     2,     1,     1,     1,     3,     1,     2,
       3,     5,     1,     2,     1,     2,     1,     2,     1,     2,
       6,     6,     4,     4,     1,     2,     3,     1,     2,     5,
       6,     6,     7,     6,     7,     1,     3,     1,     3,     2,
       4,     5,     6,     6,     7,     4,     5,     5,     6,     5,
       6,     6,     7,     3,     3,     2,     1,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     5,     7,     1,     1,
       5,     5,     7,     7,     2,     1,     1,     2,     1,     1,
       2,     3,     4,     5,     6,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     4,     3,     4,     3,     1,     1,     1,     1,     2,
       3,     3,     3,     4,     4,     1,     3,     3,     1,     1,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
        case 130:
#line 498 "yacc/koala.y" /* yacc.c:1646  */
    {printf("%llu\n", (yyvsp[0].ival));}
#line 1767 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 589 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1773 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 590 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1779 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 591 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1785 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 592 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1791 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 596 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1797 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 597 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1803 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 598 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1809 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 602 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1815 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 603 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1821 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 604 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1827 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 608 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1833 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 609 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1839 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 610 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1845 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 611 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1851 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 612 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 616 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1863 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 617 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1869 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 618 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1875 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 622 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1881 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 623 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1887 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 627 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1893 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 628 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1899 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 632 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1905 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 633 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1911 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 637 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1917 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 638 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1923 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 642 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1929 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 643 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1935 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 1939 "koala_yacc.c" /* yacc.c:1646  */
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
#line 738 "yacc/koala.y" /* yacc.c:1906  */


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

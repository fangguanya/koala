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
  char *ident;
  uint64 ival;
  float64 fval;
  string str_val;
  linked_list_t *linked_list;
  type_info_t *new_type_info;
  func_proto_type_t *func_proto_type;
  array_type_t *array_type;
  expr_t *expression;

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
#define YYLAST   1311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

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
       0,   141,   141,   144,   150,   153,   159,   162,   165,   168,
     171,   177,   180,   183,   186,   189,   192,   195,   198,   201,
     204,   207,   210,   216,   219,   222,   225,   231,   237,   238,
     242,   243,   244,   245,   246,   247,   248,   252,   256,   257,
     261,   262,   268,   269,   270,   271,   272,   273,   274,   275,
     279,   280,   281,   285,   286,   290,   291,   295,   296,   297,
     298,   299,   300,   304,   305,   311,   312,   313,   314,   319,
     320,   321,   322,   329,   330,   331,   332,   336,   339,   344,
     345,   349,   350,   356,   360,   361,   362,   366,   367,   371,
     372,   376,   377,   381,   385,   386,   387,   391,   392,   393,
     397,   398,   402,   406,   407,   415,   418,   421,   427,   432,
     442,   443,   444,   445,   449,   450,   454,   458,   459,   463,
     464,   468,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   489,   490,   494,   495,   501,   504,
     507,   513,   516,   522,   525,   528,   534,   537,   540,   543,
     546,   549,   555,   558,   566,   577,   580,   588,   596,   599,
     602,   605,   611,   614,   617,   620,   626,   629,   632,   638,
     641,   644,   650,   653,   656,   659,   662,   668,   671,   674,
     680,   683,   689,   692,   698,   701,   707,   710,   716,   719,
     725,   731,   733,   737,   738,   744,   745,   749,   750,   754,
     755,   756,   760,   761,   762,   763,   764,   765,   766,   767,
     768,   769,   773,   778
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
  "type_declaration", "field_declarations",
  "interface_function_declarations", "interface_function_declaration",
  "parameter_list", "function_declaration",
  "anonymous_function_declaration", "method_declaration", "code_block",
  "local_variable_declaration_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "if_statement", "else_statemnet",
  "switch_statement", "iteration_statemnet", "for_init", "for_expr",
  "for_incr", "jump_statement", "variable_declaration", "var_list",
  "array_complex_primary", "array_access", "field_access", "method_call",
  "method_access", "argument_list", "initializer_expression",
  "field_initial_list", "array_initial_list", "primary_expression",
  "just_not_name", "complex_primary", "constant", "postfix_expression",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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

#define YYPACT_NINF -284

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-284)))

#define YYTABLE_NINF -202

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,   -42,   -32,    -2,     4,     4,    55,    78,    78,  -284,
     158,  -284,  -284,  -284,  -284,  -284,   936,    61,  1111,  -284,
     -20,     1,  -284,    78,   158,  -284,   158,  -284,  -284,  -284,
    -284,     7,    21,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,    30,    44,   677,    17,   -11,
    -284,  -284,  -284,    47,   -46,    73,    86,   145,   132,  -284,
     -51,  -284,   158,  1142,   134,  -284,   152,   896,   896,   167,
    -284,  -284,  -284,  -284,  -284,  -284,   405,   896,   896,   896,
     896,   896,    72,   186,   198,  -284,   156,   200,   203,   204,
     207,  -284,  -284,   214,   211,  -284,   129,  -284,     5,    90,
     159,     6,   241,   201,   202,   215,   276,   284,  -284,  -284,
      11,  -284,   677,   232,  1235,  1074,    84,   242,     0,  -284,
    -284,   231,  1173,   108,  -284,  -284,  1235,    92,  -284,  -284,
     -31,   230,   233,  -284,   115,   120,   128,   237,  -284,  -284,
    -284,  -284,   459,   896,   896,   513,   896,   567,   247,  -284,
    -284,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   677,
    -284,    26,   -30,  -284,   740,  1235,  -284,   248,  -284,   255,
    1074,  1235,    36,   250,    41,  -284,  -284,  -284,  1235,  1173,
    -284,  1074,   133,   677,   677,   271,  -284,   277,  -284,  -284,
     264,  -284,   165,   176,   265,   268,  -284,   180,   188,   269,
    -284,   272,   278,  -284,  -284,  -284,  -284,     5,     5,    90,
      90,   159,   159,   159,   159,     6,     6,   241,   201,   202,
     215,   276,  -284,  -284,  1074,   150,   274,   281,   248,   282,
     283,   621,  -284,   321,   803,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,   355,   404,  -284,  -284,   -34,   206,   273,
     151,  -284,  1235,   248,  -284,   291,  1235,  -284,  1204,  -284,
    -284,  -284,  -284,   248,  -284,  1074,  -284,  -284,   289,   293,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   248,  -284,
    1074,   896,   896,   322,   833,   896,  -284,    46,  -284,  -284,
     -26,   677,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   896,  -284,  -284,  -284,  -284,  -284,   297,  1235,
     972,   153,   160,  -284,   248,  -284,   677,   677,  -284,   248,
    -284,   301,   302,   304,  -284,   866,  -284,   303,   305,  -284,
      92,   214,  -284,   278,  -284,  -284,  -284,   307,  1006,  1040,
    -284,  -284,  -284,  -284,   248,   248,   896,  -284,   896,   308,
    -284,   248,  -284,  -284,   309,  -284,   310,   325,  -284,   314,
     318,  -284,  -284,  -284,  -284,  -284,   -10,   316,   248,  -284,
    -284,  -284,  -284,  -284
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    34,    35,    38,
      36,    42,    46,    48,    44,   108,     0,     0,     0,     2,
       0,     0,     1,    31,    32,    39,    33,    43,    47,    49,
      45,     0,     0,    15,    16,    17,    18,    11,    12,    13,
      14,    19,    20,    21,    22,     0,     0,     0,     7,     0,
       6,     9,     8,     0,     0,     0,     0,     0,     0,    37,
       0,    40,    30,     0,     0,   109,     0,     0,     0,     0,
     149,   150,   151,   146,   147,   148,     0,     0,     0,     0,
       0,     0,   138,     0,     0,   132,     0,   143,   144,   145,
       0,   192,   152,   140,   142,   139,   155,   162,   166,   169,
     172,   177,   180,   182,   184,   186,   188,   190,   191,   193,
       0,   105,     0,     0,     0,     0,     0,     0,     0,    52,
       3,     0,    23,     0,     4,    10,     0,   138,   156,   157,
       0,   146,     2,   122,     0,     0,     0,     0,   158,   159,
     160,   161,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,     0,     0,    63,     0,     0,    28,     0,    65,     0,
       0,     0,     0,     0,     0,    55,    41,    24,     0,    25,
      27,     0,     0,     0,     0,     0,   124,     0,   125,   123,
     141,   126,     0,     0,     0,     0,   129,     0,     0,     0,
     118,     0,   121,   116,   163,   164,   165,   167,   168,   170,
     171,   176,   175,   173,   174,   178,   179,   181,   183,   185,
     187,   189,   194,   107,     0,     0,     0,     0,     0,     0,
       0,     0,    78,   138,     0,    79,    82,    84,    87,    88,
      85,    86,    81,   143,   144,   212,   213,     0,   197,     0,
       0,    66,     0,     0,    67,     0,     0,    50,     0,    51,
      56,     5,    26,     0,    69,     0,   136,   134,     0,     0,
     128,   127,   114,   133,   131,   130,   115,   117,     0,    73,
       0,     0,     0,     0,     0,     0,   103,     0,    77,    80,
       0,     0,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,     0,    83,    29,    64,    68,    53,     0,     2,
       0,     0,     0,    70,     0,    71,     0,     0,    74,     0,
      75,     0,     0,     0,    99,     0,    98,     0,     0,   104,
     199,     0,   198,   195,   196,    54,    57,     0,     0,     0,
      72,   135,   137,    76,     0,     0,     0,   101,     0,     0,
      97,     0,    58,    59,     0,    61,     0,    89,    94,     0,
       0,   102,   100,    93,    60,    62,     0,     0,     0,    92,
      91,    90,    95,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,    -4,  -162,   -14,   -44,  -284,     9,  -115,  -284,  -284,
     372,    10,    19,    15,  -284,  -284,   212,  -121,    28,  -284,
      37,    29,  -284,   138,  -284,  -284,    22,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,    -5,  -284,  -284,  -166,  -164,  -284,
    -284,  -284,  -284,   257,   258,  -284,   100,  -284,  -284,  -284,
     220,   111,   112,    85,   110,   238,   239,   240,   251,   252,
    -284,   -17,  -163,   -59,  -284,  -284,   119,  -284,  -283
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   127,   123,   176,    50,    51,    52,   177,     6,     7,
       8,     9,    10,    11,   182,   184,   185,   116,    12,    85,
      13,   178,   244,   245,   246,   247,   248,   381,   249,   250,
     335,   358,   370,   251,    14,    16,    86,    87,    88,    89,
      90,   211,    91,   134,   135,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   256,   257,   258,   312,   259
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    21,    49,    83,    57,    30,   232,   187,   253,   192,
     254,   337,    48,   260,    48,   120,   236,   136,    25,    30,
     114,    30,   158,   159,    15,    27,    24,    26,   121,   115,
     276,   277,    83,    25,    17,   114,   114,   300,    28,    27,
      19,    27,    62,    82,   191,   234,   301,    29,    77,   124,
      58,   235,    28,   171,    28,    22,    84,    30,    59,    48,
     137,    29,   174,    29,    18,   263,   183,   111,    83,   112,
      19,    60,    82,   125,   272,   371,   273,    27,   253,    61,
     254,    63,   169,   203,   151,    84,   208,    58,   212,   170,
      28,   152,   153,    64,   160,   161,    65,   169,    83,    29,
     173,    83,   266,    83,   233,    66,   321,   183,    82,   267,
      48,    48,   190,   113,   269,     1,     2,   169,    48,   288,
       3,    84,    48,     5,   339,    83,   204,   205,   253,   209,
     254,    53,     1,     2,   253,    54,   254,     3,    82,     4,
       5,    82,    58,    82,   142,   117,  -120,   322,   143,    83,
      83,    84,   149,   150,    84,   179,    84,   255,   118,   180,
     324,   124,    58,   351,   352,    82,  -120,   265,   143,   252,
     243,    48,   154,   155,   271,   329,    48,    48,    84,   188,
     156,   157,   297,   189,    48,    48,   195,    48,   196,    82,
      82,   197,   253,   198,   254,     1,     2,    83,   120,   169,
       3,   199,    84,    84,   179,   347,   261,   125,   275,   264,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     274,   179,   188,   119,   188,   290,   314,   255,   348,   126,
      48,   179,   146,   364,   366,   349,   195,    82,   280,   252,
     243,   130,   343,   221,   222,   223,   224,   169,   315,   281,
      84,   197,   318,   284,   124,   162,   163,    83,    48,   169,
     144,   285,    48,   289,    48,   217,   218,   293,   219,   220,
     145,    48,   225,   226,   331,   332,  -111,   255,   338,  -112,
    -113,   147,    83,    83,   148,  -119,    48,   128,   129,   336,
     243,   164,   316,   165,   167,   344,   340,    82,   138,   139,
     140,   141,   323,   168,   325,   173,   172,   166,   181,   186,
      84,   193,   200,   213,   194,    48,    48,   328,   359,   330,
     174,   262,    82,    82,   268,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,    84,    84,   278,   279,   369,
    -110,   255,   282,   283,    48,    48,   286,   287,   291,   169,
     333,   313,   376,   350,   243,   292,   294,   295,   353,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,   317,
     326,   214,   215,   216,   327,   345,   354,   355,   356,    23,
     361,   360,   299,   367,   368,   362,   372,   374,   375,   377,
     373,    58,  -199,   378,   382,  -120,   270,   143,   380,   202,
     341,  -199,   227,   207,   228,   379,   229,   383,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,   230,   342,
     231,     0,     0,     0,     0,     0,  -200,     0,    67,    68,
       0,  -111,     0,     0,     0,  -200,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    70,    71,    72,   131,     0,     0,    74,
      75,   132,     0,     0,     0,  -201,     0,    76,   133,    77,
    -112,    46,    67,    68,  -201,     0,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    70,    71,    72,
      73,     0,     0,    74,    75,   132,     0,     0,     0,     0,
       0,    76,   201,    77,     0,    46,    67,    68,     0,     0,
       0,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    70,    71,    72,   131,     0,     0,    74,    75,    19,
       0,     0,     0,     0,     0,    76,   206,    77,     0,    46,
      67,    68,     0,     0,     0,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    70,    71,    72,    73,     0,
       0,    74,    75,    19,     0,     0,     0,     0,     0,    76,
       0,    77,   210,    46,    67,    68,     0,     0,     0,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    70,
      71,    72,    73,     0,     0,    74,    75,    19,     0,     0,
       0,     0,     0,    76,     0,    77,     0,    46,     0,   296,
      67,    68,     0,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    70,    71,    72,    73,     0,
       0,    74,    75,    19,     0,     0,     0,     0,     0,    76,
       0,    77,     0,    46,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    67,    68,     0,   236,     0,   237,   238,
     239,     0,   240,     0,     0,     0,     0,     1,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,     0,     0,    74,    75,    19,     0,     0,     0,
       0,     0,     0,   242,    77,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    67,    68,     0,   236,
       0,   237,   238,   239,     0,   240,     0,     0,     0,     0,
       1,     0,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,     0,     0,
       0,    70,    71,    72,    73,     0,     0,    74,    75,    19,
       1,     0,     0,     0,     0,     0,   298,    77,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    67,
      68,    70,    71,    72,    73,     0,     0,    74,    75,    19,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,   334,     0,     0,     0,    78,    79,    80,    81,    67,
      68,     0,     0,     0,    70,    71,    72,    73,     0,     0,
      74,    75,    19,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,   357,     0,     0,     0,    78,    79,
      80,    81,     0,     0,    70,    71,    72,    73,     0,     0,
      74,    75,    19,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,    31,     0,     0,    32,    78,    79,
      80,    81,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,    45,     0,     0,
      31,     0,    46,    32,     0,     0,    47,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    31,     0,   175,    32,    46,     0,
     346,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    31,     0,
     175,    32,    46,     0,   363,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,    31,     0,   175,    32,    46,     0,   365,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,   174,     0,   175,    31,
      46,    55,    56,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
      31,     0,     0,    32,     0,     0,     0,    46,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,    31,     0,     0,    32,     0,     0,   122,    46,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    31,     0,     0,    32,     0,   175,     0,    46,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,    31,     0,     0,    32,     0,     0,   320,
      46,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46
};

static const yytype_int16 yycheck[] =
{
       4,     5,    16,    47,    18,    10,   169,   122,   174,   130,
     174,   294,    16,   175,    18,    66,    26,    76,     8,    24,
      66,    26,    16,    17,    66,    10,     7,     8,    79,    75,
     193,   194,    76,    23,    66,    66,    66,    71,    10,    24,
      66,    26,    23,    47,    75,    75,    80,    10,    74,    63,
      70,   172,    24,   112,    26,     0,    47,    62,    78,    63,
      77,    24,    72,    26,    66,   180,    66,    78,   112,    80,
      66,    70,    76,    73,   189,   358,   191,    62,   244,    78,
     244,    74,    71,   142,    79,    76,   145,    70,   147,    78,
      62,    86,    87,    72,    88,    89,    66,    71,   142,    62,
     114,   145,    66,   147,    78,    61,   268,    66,   112,    73,
     114,   115,   126,    66,    73,    37,    38,    71,   122,   234,
      42,   112,   126,    45,    78,   169,   143,   144,   294,   146,
     294,    70,    37,    38,   300,    74,   300,    42,   142,    44,
      45,   145,    70,   147,    72,    72,    74,   268,    76,   193,
     194,   142,    23,    24,   145,    71,   147,   174,    72,    75,
     275,   175,    70,   326,   327,   169,    74,   181,    76,   174,
     174,   175,    82,    83,   188,   290,   180,   181,   169,    71,
      21,    22,   241,    75,   188,   189,    71,   191,    73,   193,
     194,    71,   358,    73,   358,    37,    38,   241,    66,    71,
      42,    73,   193,   194,    71,   320,   177,    73,    75,   180,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     191,    71,    71,    78,    71,    75,    75,   244,    75,    77,
     234,    71,    76,   348,   349,    75,    71,   241,    73,   244,
     244,    74,   301,   158,   159,   160,   161,    71,   262,    73,
     241,    71,   266,    73,   268,    14,    15,   301,   262,    71,
      74,    73,   266,   234,   268,   154,   155,   238,   156,   157,
      72,   275,   162,   163,   291,   292,    76,   294,   295,    76,
      76,    74,   326,   327,    70,    74,   290,    67,    68,   294,
     294,    90,   263,    91,    18,   312,   300,   301,    78,    79,
      80,    81,   273,    19,   275,   319,    74,    92,    66,    78,
     301,    81,    75,    66,    81,   319,   320,   288,   335,   290,
      72,    66,   326,   327,    74,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   326,   327,    66,    61,   356,
      76,   358,    77,    75,   348,   349,    77,    75,    74,    71,
      28,    78,    27,   324,   358,    74,    74,    74,   329,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    78,
      81,   151,   152,   153,    81,    78,    75,    75,    74,     7,
      75,    78,   244,   354,   355,    78,    78,    78,    78,    75,
     361,    70,    71,    75,    78,    74,   184,    76,   376,   142,
     300,    80,   164,   145,   165,   376,   166,   378,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   167,   300,
     168,    -1,    -1,    -1,    -1,    -1,    71,    -1,    23,    24,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    66,    -1,    -1,    -1,    71,    -1,    72,    73,    74,
      76,    76,    23,    24,    80,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    23,    24,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      23,    24,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    23,    24,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    78,
      23,    24,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    23,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    23,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      37,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    23,
      24,    58,    59,    60,    61,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,    23,
      24,    -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    58,    59,    60,    61,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    38,    -1,    -1,    41,    82,    83,
      84,    85,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      38,    -1,    76,    41,    -1,    -1,    80,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    74,    41,    76,    -1,
      78,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      74,    41,    76,    -1,    78,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    74,    41,    76,    -1,    78,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    38,
      76,    40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    76,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    75,    76,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    38,    -1,    -1,    41,    -1,    74,    -1,    76,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    75,
      76,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   101,   102,   103,   104,
     105,   106,   111,   113,   127,    66,   128,    66,    66,    66,
      94,    94,     0,   103,   105,   104,   105,   106,   111,   113,
     127,    38,    41,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    71,    76,    80,    94,    96,
      97,    98,    99,    70,    74,    40,    41,    96,    70,    78,
      70,    78,   105,    74,    72,    66,    61,    23,    24,    38,
      58,    59,    60,    61,    64,    65,    72,    74,    82,    83,
      84,    85,    94,    97,    99,   112,   129,   130,   131,   132,
     133,   135,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    78,    80,    66,    66,    75,   110,    72,    72,    78,
      66,    79,    75,    95,    96,    73,    77,    94,   143,   143,
      74,    61,    66,    73,   136,   137,   156,   154,   143,   143,
     143,   143,    72,    76,    74,    72,    76,    74,    70,    23,
      24,    79,    86,    87,    82,    83,    21,    22,    16,    17,
      88,    89,    14,    15,    90,    91,    92,    18,    19,    71,
      78,   156,    74,    96,    72,    74,    96,   100,   114,    71,
      75,    66,   107,    66,   108,   109,    78,   100,    71,    75,
      96,    75,   110,    81,    81,    71,    73,    71,    73,    73,
      75,    73,   136,   156,   154,   154,    73,   137,   156,   154,
      75,   134,   156,    66,   143,   143,   143,   144,   144,   145,
     145,   146,   146,   146,   146,   147,   147,   148,   149,   150,
     151,   152,   155,    78,    75,   110,    26,    28,    29,    30,
      32,    39,    73,    94,   115,   116,   117,   118,   119,   121,
     122,   126,   127,   130,   131,   154,   157,   158,   159,   161,
      95,   114,    66,   100,   114,    96,    66,    73,    74,    73,
     109,    96,   100,   100,   114,    75,   155,   155,    66,    61,
      73,    73,    77,    75,    73,    73,    77,    75,   100,   114,
      75,    74,    74,   114,    74,    74,    78,   156,    73,   116,
      71,    80,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   160,    78,    75,    96,   114,    78,    96,    66,
      75,    95,   110,   114,   100,   114,    81,    81,   114,   100,
     114,   154,   154,    28,    78,   123,   127,   161,   154,    78,
      94,   139,   159,   156,   154,    78,    78,   100,    75,    75,
     114,   155,   155,   114,    75,    75,    74,    78,   124,   154,
      78,    75,    78,    78,   100,    78,   100,   114,   114,   154,
     125,   161,    78,   114,    78,    78,    27,    75,    75,   114,
     119,   120,    78,   114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   111,   111,   111,   112,
     112,   112,   112,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   121,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   129,   129,   130,   130,   131,   132,   132,   133,
     133,   134,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   140,   140,   140,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   145,   145,   145,   146,
     146,   146,   147,   147,   147,   147,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     5,     4,     1,     3,
       3,     2,     2,     2,     1,     1,     1,     3,     1,     2,
       3,     5,     1,     2,     1,     2,     1,     2,     1,     2,
       6,     6,     4,     3,     4,     1,     2,     4,     5,     5,
       6,     5,     6,     2,     4,     5,     6,     6,     7,     4,
       5,     5,     6,     7,     8,     8,     9,     3,     2,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     5,
       7,     1,     1,     5,     5,     7,     7,     2,     1,     1,
       2,     1,     1,     2,     3,     4,     5,     6,     1,     3,
       3,     1,     1,     1,     4,     4,     3,     4,     3,     1,
       1,     1,     2,     3,     3,     3,     3,     4,     4,     3,
       4,     4,     1,     4,     3,     5,     3,     5,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 141 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.str_val) = (yyvsp[0].id);
  }
#line 1785 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 144 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.str_val) = string_append((yyvsp[-2].str_val), (yyvsp[0].id));
  }
#line 1793 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 150 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = null;
  }
#line 1801 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 153 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = null;
  }
#line 1809 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 159 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info((yyvsp[0].primitive_type), null);
  }
#line 1817 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 162 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_DEFINED, (yyvsp[0].str_val).val);
  }
#line 1825 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 165 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_ARRAY, (yyvsp[0].array_type));
  }
#line 1833 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_FUNC, (yyvsp[0].func_proto_type));
  }
#line 1841 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 171 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.new_type_info) = new_type_info(TYPE_INTF, null);
  }
#line 1849 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 177 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 180 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1865 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 183 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1873 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 186 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1881 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1889 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 192 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1897 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 195 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1905 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1913 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 201 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1921 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 204 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1929 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 207 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1937 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1945 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1953 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 219 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1961 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1969 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 225 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1977 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 231 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.array_type) = new_array_type((yyvsp[-2].ival), (yyvsp[0].new_type_info));
  }
#line 1985 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 336 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("code block\n");
  }
#line 1993 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 350 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----statement\n");
  }
#line 2001 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 356 "yacc/koala.y" /* yacc.c:1646  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2010 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 415 "yacc/koala.y" /* yacc.c:1646  */
    {
    new_var_decl((yyvsp[-2].linked_list), (yyvsp[-1].new_type_info), null);
  }
#line 2018 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 418 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2026 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 421 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2034 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 427 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("ID: %s\n", (yyvsp[0].id).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].id)));
  }
#line 2044 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 432 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("ID: %s\n", (yyvsp[0].id).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].id)));
  }
#line 2054 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 501 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2062 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 504 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2070 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 507 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2078 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 513 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2086 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 516 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = $1;
  }
#line 2094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 522 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2102 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 525 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2110 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 528 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2118 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 534 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2126 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 537 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2134 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 540 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2142 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 543 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = null;
  }
#line 2150 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 546 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2158 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 549 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2166 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 555 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2174 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 558 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2187 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 566 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2200 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 577 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2208 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 580 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2221 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 588 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2234 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 596 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2242 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 599 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2250 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 602 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2258 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 605 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2266 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 611 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2274 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 614 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2282 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 617 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2290 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 620 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2298 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 626 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2306 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 629 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2314 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 632 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2322 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 638 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2330 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 641 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2338 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 644 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2346 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 650 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2354 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 653 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2362 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 656 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2370 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 659 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2378 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 662 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2386 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 668 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2394 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 671 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2402 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 674 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2410 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 680 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2418 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 683 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2426 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 689 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2434 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 692 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2442 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 698 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2450 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 701 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2458 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 707 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2466 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 710 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2474 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 716 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2482 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 719 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2490 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 725 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2498 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 731 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2505 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 212:
#line 773 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----base_expression\n");
    show_expr((yyvsp[0].expression));
    putchar('\n');
  }
#line 2515 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 778 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2523 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2527 "koala_yacc.c" /* yacc.c:1646  */
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
#line 785 "yacc/koala.y" /* yacc.c:1906  */


int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

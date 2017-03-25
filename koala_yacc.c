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
    VAR_ASSIGN = 259,
    ADD_ASSIGN = 260,
    SUB_ASSIGN = 261,
    MUL_ASSIGN = 262,
    DIV_ASSIGN = 263,
    MOD_ASSIGN = 264,
    AND_ASSIGN = 265,
    OR_ASSIGN = 266,
    XOR_ASSIGN = 267,
    RIGHT_ASSIGN = 268,
    LEFT_ASSIGN = 269,
    EQ = 270,
    NE = 271,
    GE = 272,
    LE = 273,
    AND = 274,
    OR = 275,
    NOT = 276,
    SHIFT_LEFT = 277,
    SHIFT_RIGHT = 278,
    INC = 279,
    DEC = 280,
    TOKEN_THIS = 281,
    IF = 282,
    ELSE = 283,
    WHILE = 284,
    DO = 285,
    FOR = 286,
    IN = 287,
    SWITCH = 288,
    CASE = 289,
    BREAK = 290,
    CONTINUE = 291,
    DEFAULT = 292,
    VAR = 293,
    FUNC = 294,
    RETURN = 295,
    STRUCT = 296,
    INTERFACE = 297,
    TYPE = 298,
    CONST = 299,
    PACKAGE = 300,
    IMPORT = 301,
    NEW = 302,
    INT8 = 303,
    INT16 = 304,
    INT32 = 305,
    INT64 = 306,
    UINT8 = 307,
    UINT16 = 308,
    UINT32 = 309,
    UINT64 = 310,
    FLOAT32 = 311,
    FLOAT64 = 312,
    BOOL = 313,
    STRING = 314,
    TOKEN_NIL = 315,
    TOKEN_TRUE = 316,
    TOKEN_FALSE = 317,
    INTEGER = 318,
    HEX = 319,
    OCT = 320,
    FLOAT = 321,
    STRING_LITERAL = 322,
    IDENTIFIER = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "yacc/koala.y" /* yacc.c:355  */

  string identifier;
  int type;
  char *ident;
  uint64 ival;
  float64 fval;
  string str_val;
  linked_list_t *linked_list;
  type_info_t *new_type_info;
  func_proto_type_t *func_proto_type;
  array_type_t *array_type;
  expr_t *expression;

#line 201 "koala_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   986

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

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
       2,     2,     2,    84,     2,     2,     2,    86,    89,     2,
      73,    74,    78,    81,    70,    82,    69,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    77,
      87,    79,    88,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    91,    76,    83,     2,     2,     2,
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
       0,   136,   136,   139,   151,   152,   156,   159,   162,   163,
     167,   170,   173,   176,   179,   182,   185,   188,   191,   194,
     197,   200,   206,   209,   212,   218,   219,   223,   226,   229,
     232,   238,   239,   240,   244,   251,   252,   253,   254,   255,
     256,   257,   261,   265,   266,   270,   271,   275,   276,   280,
     281,   282,   290,   293,   296,   302,   307,   315,   316,   320,
     321,   322,   323,   324,   325,   326,   330,   331,   335,   336,
     340,   344,   345,   346,   347,   348,   352,   358,   359,   360,
     364,   365,   369,   370,   374,   378,   382,   383,   384,   385,
     389,   390,   394,   395,   399,   402,   406,   407,   411,   412,
     418,   422,   423,   424,   425,   430,   431,   435,   436,   442,
     446,   447,   448,   452,   453,   457,   458,   462,   463,   467,
     471,   472,   473,   477,   478,   479,   483,   484,   488,   492,
     493,   522,   523,   526,   527,   567,   570,   573,   576,   579,
     582,   588,   591,   599,   607,   610,   613,   616,   619,   625,
     628,   636,   644,   647,   650,   653,   659,   662,   665,   668,
     674,   677,   680,   686,   689,   692,   698,   701,   704,   707,
     710,   716,   719,   722,   728,   731,   737,   740,   746,   749,
     755,   758,   764,   767,   773,   779,   785,   786,   790,   791,
     797,   798,   799,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   816,   821
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELLIPSIS", "VAR_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "OR_ASSIGN", "XOR_ASSIGN", "RIGHT_ASSIGN", "LEFT_ASSIGN", "EQ", "NE",
  "GE", "LE", "AND", "OR", "NOT", "SHIFT_LEFT", "SHIFT_RIGHT", "INC",
  "DEC", "TOKEN_THIS", "IF", "ELSE", "WHILE", "DO", "FOR", "IN", "SWITCH",
  "CASE", "BREAK", "CONTINUE", "DEFAULT", "VAR", "FUNC", "RETURN",
  "STRUCT", "INTERFACE", "TYPE", "CONST", "PACKAGE", "IMPORT", "NEW",
  "INT8", "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BOOL", "STRING", "TOKEN_NIL", "TOKEN_TRUE",
  "TOKEN_FALSE", "INTEGER", "HEX", "OCT", "FLOAT", "STRING_LITERAL",
  "IDENTIFIER", "'.'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "';'", "'*'", "'='", "':'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "$accept", "PackageOrTypeName",
  "TypeList", "Type", "PrimitiveType", "ReferenceType", "Dims",
  "FunctionType", "ReturnTypeList", "InterfaceType", "Program",
  "PackageDeclaration", "ImportDeclarations", "ImportDeclaration",
  "Declarations", "Declaration", "VariableDeclaration", "VariableList",
  "VariableInitializerList", "ComplexVariableInitializer",
  "ArrayInitializerList", "DimExprs", "DimExpr", "ArrayInitializer",
  "ArrayPositionInitializer", "TypeDeclaration", "MemberDeclarations",
  "MemberDeclaration", "FieldDeclaration", "MethodDeclaration",
  "MethodDeclarationHeader1", "ParameterList", "MethodDeclarationHeader2",
  "CodeBlock", "InterfaceFunctionDeclarations",
  "InterfaceFunctionDeclaration", "FunctionDeclaration",
  "AnonymousFunctionDeclaration", "local_variable_declaration_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "if_statement", "else_statemnet",
  "switch_statement", "iteration_statemnet", "for_init", "for_expr",
  "for_incr", "jump_statement", "primary_expression", "constant",
  "postfix_expression", "unary_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "basic_expression", "expression",
  "expression_list", "postfix_expression_list", "assignment_expression",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,    46,
      44,    91,    93,    40,    41,   123,   125,    59,    42,    61,
      58,    43,    45,   126,    33,    47,    37,    60,    62,    38,
      94,   124
};
# endif

#define YYPACT_NINF -210

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-210)))

#define YYTABLE_NINF -189

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -18,   -11,    41,    55,    55,    30,    56,    56,  -210,
      47,  -210,  -210,  -210,    26,  -210,  -210,   700,    78,   843,
    -210,   -22,     1,  -210,    56,    47,  -210,    47,  -210,   472,
    -210,    87,    88,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,    97,    99,   313,   100,    64,
    -210,  -210,   867,  -210,  -210,     8,    98,   107,   116,   126,
    -210,   -30,  -210,    47,   663,   663,  -210,   111,   127,    26,
     128,   129,   240,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
     663,  -210,   663,   663,   663,   663,  -210,   533,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,   280,  -210,   -13,
      77,    92,     0,   152,   110,   114,   115,   186,   187,  -210,
     -38,  -210,   131,   761,   134,  -210,  -210,   138,   663,   411,
     139,    33,  -210,   891,  -210,  -210,    -5,  -210,  -210,   313,
     141,  -210,  -210,   915,   815,   -21,   137,   -16,  -210,  -210,
     140,  -210,  -210,   663,   663,   185,   559,   663,  -210,  -210,
    -210,    34,   144,  -210,  -210,  -210,  -210,  -210,  -210,   313,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,   147,   663,   586,   313,   663,   663,   663,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,    71,   313,  -210,   815,    75,  -210,
    -210,    39,   148,   142,   411,   150,    54,  -210,  -210,  -210,
    -210,   663,   313,  -210,   613,   146,  -210,    35,  -210,  -210,
     815,  -210,  -210,   156,   815,   157,     5,  -210,  -210,  -210,
      26,   158,   151,   153,   -14,  -210,  -210,   155,   159,   154,
    -210,  -210,   638,   160,   162,   663,  -210,  -210,  -210,  -210,
     166,    26,    80,  -210,  -210,  -210,  -210,   -13,   -13,    77,
      77,    92,    92,    92,    92,     0,     0,   152,   110,   114,
     115,   186,    -5,   161,  -210,   915,   815,   733,    82,  -210,
     411,    66,   663,   411,  -210,   165,  -210,   365,  -210,   168,
     174,   915,  -210,   915,   169,  -210,  -210,   172,  -210,  -210,
     176,  -210,    26,    26,   663,  -210,   663,   178,  -210,    26,
    -210,  -210,  -210,  -210,  -210,  -210,    26,  -210,   733,  -210,
    -210,   177,  -210,  -210,  -210,    70,  -210,   915,  -210,   182,
    -210,   788,  -210,   204,  -210,   188,   189,  -210,  -210,  -210,
    -210,    26,  -210,  -210,  -210,   193,  -210,   915,    83,    -6,
     183,    26,  -210,  -210,   815,  -210,  -210,  -210,  -210,  -210,
    -210
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    39,    40,    43,
      41,    47,    49,    50,     0,    51,    55,     0,     0,     0,
       2,     0,     0,     1,    36,    37,    44,    38,    48,     0,
     100,     0,     0,    14,    15,    16,    17,    10,    11,    12,
      13,    18,    19,    20,    21,     0,     0,     0,    22,     0,
       6,     7,     0,    23,    24,     0,     0,     0,     0,     0,
      42,     0,    45,    35,     0,     0,   133,     0,     0,     0,
       0,     0,     0,   138,   139,   140,   135,   136,   137,   131,
       0,    95,     0,     0,     0,     0,   107,     0,   105,   108,
     110,   113,   114,   111,   112,   141,   132,   149,   156,   160,
     163,   166,   171,   174,   176,   178,   180,   182,   184,   203,
       0,   204,     0,     0,     0,    56,    25,     0,     0,     0,
       0,     0,    57,     0,    68,    61,   149,    59,    52,     0,
       0,     8,     9,     0,    86,     0,     0,     0,    79,     3,
       0,   150,   151,     0,     0,     0,     0,     0,   129,   185,
     186,     0,     0,   152,   153,   154,   155,    94,   106,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     142,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,    27,     0,     4,
      34,     0,     0,   135,     0,     0,     0,    66,    74,    73,
      71,     0,     0,    53,     0,    63,    69,     0,    26,    90,
       0,    31,    87,     0,    88,     0,     0,    80,    82,    83,
       0,     0,     0,     0,     0,    96,    46,     0,     0,     0,
     125,   124,     0,     0,     0,     0,   130,   134,   192,   144,
       0,   147,     0,   191,   157,   158,   159,   161,   162,   164,
     165,   170,   169,   167,   168,   172,   173,   175,   177,   179,
     181,   183,   189,   190,    28,     0,    29,     0,     0,    70,
       0,     0,     0,     0,    62,     0,    58,     0,    54,    31,
       0,     0,    89,     0,     0,    81,    85,     0,    98,    99,
       0,    97,     0,     0,     0,   127,     0,     0,   123,     0,
     187,   145,   148,   146,     5,    30,     0,   101,     0,    76,
      75,     0,    67,    60,    65,     0,    32,     0,    91,     0,
      77,     0,    78,   115,   120,     0,     0,   128,   126,   119,
     102,     0,   103,    72,    64,     0,    84,     2,     0,     0,
       0,     0,   104,    33,    92,   118,   117,   116,   121,   122,
      93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,   175,   -82,   -17,   -40,   200,  -210,  -210,  -193,  -210,
    -210,  -210,   261,    18,    21,    12,   -20,  -210,  -115,  -135,
    -196,  -210,   149,  -209,  -210,  -210,  -210,    43,  -210,  -210,
    -126,    69,  -210,   -68,  -210,    37,  -210,  -106,  -210,   190,
    -210,  -210,   -74,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,   -24,   -49,     7,    14,     6,    10,    90,   105,
     106,   104,   118,  -210,   -26,    53,   125,  -210,  -210,  -210,
    -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,   198,   221,    50,    51,    52,    53,   222,    54,
       6,     7,     8,     9,    10,    11,    12,    17,   121,   122,
     206,   123,   124,   207,   208,    13,   226,   227,   228,   229,
      14,   135,   233,    30,   234,   235,    15,   125,    87,    88,
      89,    90,    91,   357,    92,    93,   242,   306,   336,    94,
      95,    96,   126,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   127,   150,   151,   110,   111,   175,
     112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   145,    58,   109,   274,    97,   243,   120,   281,    86,
     230,   232,   131,   209,   217,   141,   142,   183,   184,   170,
     171,    67,    28,   231,   248,   231,    26,   290,    25,    27,
      23,   292,   194,   153,   154,   155,   156,    28,   139,    28,
     253,   195,    26,   225,     2,    63,   149,    59,   140,   223,
      16,     1,     2,   224,   152,    60,     3,    18,     4,     5,
     200,   109,   300,    97,   172,   176,   173,    86,   174,    29,
      61,   319,   177,   178,   322,    28,   133,   286,    62,   205,
     273,   294,   134,   315,   316,     1,     2,   185,   186,   120,
       3,   325,   202,   210,     1,     2,   199,    66,   209,     3,
     230,    29,     5,   212,   245,   212,   215,   133,   232,    19,
     213,   246,   288,   277,   181,   182,   219,   237,   238,   120,
     109,   244,    97,    20,   283,   341,   241,   254,   255,   256,
     284,    73,    74,    75,    76,   120,   283,    77,    78,    79,
     283,   128,   320,   129,    80,   275,   344,   250,   149,   276,
     245,    55,   223,   275,   313,   120,   318,   354,   179,   180,
     113,   360,   296,   114,   205,   115,   337,   187,   188,    59,
     272,   116,   120,   136,   209,   225,     2,   209,   210,    21,
      22,   209,   137,   312,   143,   285,   257,   258,   202,   261,
     262,   263,   264,   138,   139,   259,   260,   265,   266,   189,
     144,   146,   147,   289,   190,   192,   191,   193,   196,   317,
     200,   201,   211,   218,   239,   249,   307,   236,   247,   149,
     279,   287,   280,   282,   291,   293,   297,   304,   298,   302,
     299,   212,   349,   303,   333,   334,   309,   308,   311,   323,
     205,   339,   326,   205,   327,   331,   330,   205,   340,   348,
     342,   343,   132,   332,   210,   338,   321,   210,   314,   346,
     358,   210,   350,   351,    64,    65,    66,   353,    24,   295,
     278,   301,   216,   352,   328,   356,   329,   158,   335,   267,
     109,   355,    97,   359,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   268,   270,   269,   310,   252,
      73,    74,    75,    76,   170,   171,    77,    78,    79,     0,
     345,   271,     0,    80,   199,     0,     0,   148,     0,     0,
       0,    82,    83,    84,    85,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
    -188,   173,   117,   174,     0,     0,     0,     0,     0,  -188,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    73,    74,    75,    76,     0,     0,    77,
      78,    79,     0,     0,   118,     0,    80,     0,   119,    64,
      65,    66,     0,     0,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    73,    74,    75,   203,     0,
       0,    77,    78,    79,     0,    64,    65,    66,    80,     0,
     204,   324,     0,     0,     0,     0,    82,    83,    84,    85,
     117,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    73,    74,    75,   203,     0,     0,    77,    78,    79,
       0,     0,     0,     0,    80,     0,   204,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    64,    65,    66,    67,
       0,    68,    69,    70,     0,    71,     0,     0,     0,     0,
       1,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,     0,     0,    77,    78,
      79,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,    82,    83,    84,    85,    64,    65,    66,
      67,     0,    68,    69,    70,     0,    71,     0,     0,     0,
       0,     1,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,     1,     0,    77,
      78,    79,     0,     0,     0,     0,    80,     0,     0,   157,
      64,    65,    66,     0,    82,    83,    84,    85,     0,    73,
      74,    75,    76,     0,     0,    77,    78,    79,     0,     0,
       0,     0,    80,     0,     0,     0,   240,    64,    65,    66,
      82,    83,    84,    85,     0,     0,    73,    74,    75,    76,
       0,     0,    77,    78,    79,     0,     0,     0,     0,    80,
     251,     0,    64,    65,    66,     0,     0,    82,    83,    84,
      85,     0,     0,    73,    74,    75,    76,     0,     0,    77,
      78,    79,     0,     0,     0,   116,    80,    64,    65,    66,
       0,     0,     0,     0,    82,    83,    84,    85,    73,    74,
      75,    76,     0,     0,    77,    78,    79,     0,     0,     0,
       0,    80,     0,     0,     0,   305,     0,     0,     0,    82,
      83,    84,    85,    73,    74,    75,    76,     0,     0,    77,
      78,    79,     0,     0,     0,     0,    80,     0,     0,    31,
       0,     0,    32,     0,    82,    83,    84,    85,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      45,    46,    31,     0,     0,    32,     0,     0,     0,    47,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
      31,    20,     0,    32,    46,     0,   220,     0,    29,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,    31,     0,    20,
      32,     0,    46,     0,     0,   197,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,    31,     0,   347,    32,     0,    46,
       0,     0,   134,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,    31,    20,    56,    57,    46,     0,   220,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,    31,     0,     0,    32,
       0,    20,     0,     0,    46,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,     0,
      31,     0,     0,    32,     0,    20,     0,     0,   130,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,     0,    31,     0,     0,    32,     0,    20,
       0,     0,   214,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      17,    69,    19,    29,   197,    29,   146,    47,   204,    29,
     136,   137,    52,   119,   129,    64,    65,    17,    18,    24,
      25,    27,    10,    39,   159,    39,     8,   220,     7,     8,
       0,   224,    70,    82,    83,    84,    85,    25,    68,    27,
     175,    79,    24,    38,    39,    24,    72,    69,    78,    70,
      68,    38,    39,    74,    80,    77,    43,    68,    45,    46,
      76,    87,    76,    87,    69,    78,    71,    87,    73,    75,
      69,   280,    85,    86,   283,    63,    68,   212,    77,   119,
     195,    76,    74,   276,   277,    38,    39,    87,    88,   129,
      43,   287,   118,   119,    38,    39,   113,    26,   204,    43,
     226,    75,    46,    70,    70,    70,   123,    68,   234,    68,
      77,    77,    77,    74,    22,    23,   133,   143,   144,   159,
     146,   147,   146,    68,    70,   318,   146,   176,   177,   178,
      76,    60,    61,    62,    63,   175,    70,    66,    67,    68,
      70,    77,    76,    79,    73,    70,    76,   173,   174,    74,
      70,    73,    70,    70,    74,   195,    74,    74,    81,    82,
      73,   354,   230,    75,   204,    68,   306,    15,    16,    69,
     194,    72,   212,    75,   280,    38,    39,   283,   204,     4,
       5,   287,    75,   251,    73,   211,   179,   180,   214,   183,
     184,   185,   186,    77,    68,   181,   182,   187,   188,    89,
      73,    73,    73,   220,    90,    19,    91,    20,    77,   277,
      76,    73,    73,    72,    29,    68,   242,    77,    74,   245,
      72,    75,    80,    73,    68,    68,    68,    73,    77,    74,
      77,    70,    28,    74,   302,   303,    74,    77,    72,    74,
     280,   309,    74,   283,    70,    73,    77,   287,   316,   331,
     318,    74,    52,    77,   280,    77,   282,   283,   275,    77,
      77,   287,    74,    74,    24,    25,    26,    74,     7,   226,
     201,   234,   123,   341,   291,   349,   293,    87,   304,   189,
     306,   349,   306,   351,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   190,   192,   191,   245,   174,
      60,    61,    62,    63,    24,    25,    66,    67,    68,    -1,
     327,   193,    -1,    73,   331,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    39,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    24,
      25,    26,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    66,    67,    68,    -1,    24,    25,    26,    73,    -1,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    66,    67,    68,
      -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    24,    25,    26,    27,
      -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    66,    67,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    24,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    38,    -1,    66,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,
      24,    25,    26,    -1,    81,    82,    83,    84,    -1,    60,
      61,    62,    63,    -1,    -1,    66,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    24,    25,    26,
      81,    82,    83,    84,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    73,
      74,    -1,    24,    25,    26,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    60,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    -1,    -1,    72,    73,    24,    25,    26,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    60,    61,
      62,    63,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    60,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    39,
      -1,    -1,    42,    -1,    81,    82,    83,    84,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    71,    39,    -1,    -1,    42,    -1,    -1,    -1,    79,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    68,    -1,    42,    71,    -1,    73,    -1,    75,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    68,
      42,    -1,    71,    -1,    -1,    74,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    68,    42,    -1,    71,
      -1,    -1,    74,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    68,    41,    42,    71,    -1,    73,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    39,    -1,    -1,    42,
      -1,    68,    -1,    -1,    71,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      39,    -1,    -1,    42,    -1,    68,    -1,    -1,    71,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    68,
      -1,    -1,    71,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    43,    45,    46,   102,   103,   104,   105,
     106,   107,   108,   117,   122,   128,    68,   109,    68,    68,
      68,    93,    93,     0,   104,   106,   105,   106,   107,    75,
     125,    39,    42,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    70,    71,    79,    93,    95,
      96,    97,    98,    99,   101,    73,    41,    42,    95,    69,
      77,    69,    77,   106,    24,    25,    26,    27,    29,    30,
      31,    33,    40,    60,    61,    62,    63,    66,    67,    68,
      73,    76,    81,    82,    83,    84,   108,   130,   131,   132,
     133,   134,   136,   137,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     159,   160,   162,    73,    75,    68,    72,    39,    71,    75,
      96,   110,   111,   113,   114,   129,   144,   156,    77,    79,
      71,    96,    97,    68,    74,   123,    75,    75,    77,    68,
      78,   145,   145,    73,    73,   125,    73,    73,    77,   156,
     157,   158,   156,   145,   145,   145,   145,    76,   131,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      24,    25,    69,    71,    73,   161,    78,    85,    86,    81,
      82,    22,    23,    17,    18,    87,    88,    15,    16,    89,
      90,    91,    19,    20,    70,    79,    77,    74,    94,    95,
      76,    73,   156,    63,    75,    96,   112,   115,   116,   129,
     156,    73,    70,    77,    71,    95,   114,   110,    72,    95,
      73,    95,   100,    70,    74,    38,   118,   119,   120,   121,
     122,    39,   122,   124,   126,   127,    77,   156,   156,    29,
      77,   108,   138,   162,   156,    70,    77,    74,   111,    68,
     156,    74,   158,   111,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   148,   149,   149,   150,   151,   152,
     153,   154,   144,   110,   100,    70,    74,    74,   123,    72,
      80,   112,    73,    70,    76,   156,   111,    75,    77,    95,
     100,    68,   100,    68,    76,   119,   125,    68,    77,    77,
      76,   127,    74,    74,    73,    77,   139,   156,    77,    74,
     157,    72,   125,    74,    95,   100,   100,   125,    74,   115,
      76,   156,   115,    74,    76,   112,    74,    70,    95,    95,
      77,    73,    77,   125,   125,   156,   140,   162,    77,   125,
     125,   100,   125,    74,    76,    95,    77,    68,    94,    28,
      74,    74,   125,    74,    74,   125,   134,   135,    77,   125,
     100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   101,   102,   102,   102,   102,   102,
     102,   102,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   115,   115,   115,   115,   115,   116,   117,   117,   117,
     118,   118,   119,   119,   120,   121,   122,   122,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     137,   137,   137,   138,   138,   138,   139,   139,   140,   141,
     141,   142,   142,   142,   142,   143,   143,   143,   143,   143,
     143,   144,   144,   144,   144,   144,   144,   144,   144,   145,
     145,   145,   145,   145,   145,   145,   146,   146,   146,   146,
     147,   147,   147,   148,   148,   148,   149,   149,   149,   149,
     149,   150,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   158,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     4,     4,
       5,     1,     3,     5,     3,     3,     2,     2,     2,     1,
       1,     1,     3,     1,     2,     3,     5,     1,     2,     1,
       1,     1,     4,     5,     6,     1,     3,     1,     3,     1,
       4,     1,     3,     2,     5,     4,     1,     3,     1,     2,
       3,     1,     4,     1,     1,     3,     3,     7,     7,     4,
       1,     2,     1,     1,     4,     2,     4,     5,     5,     6,
       2,     4,     5,     6,     3,     2,     1,     2,     2,     2,
       2,     4,     5,     5,     6,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     5,     7,     1,     1,     5,
       5,     7,     7,     2,     1,     1,     2,     1,     1,     2,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     4,     4,     3,     4,     1,
       2,     2,     2,     2,     2,     2,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
    //$$ = null;
  }
#line 1713 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 139 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1721 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 151 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1727 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 152 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1733 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 6:
#line 156 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1741 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 7:
#line 159 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1749 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 162 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1755 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 163 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1761 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 167 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1769 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 170 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1777 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 173 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1785 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 176 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1793 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 179 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1801 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 182 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1809 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 185 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT32;
  }
#line 1817 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 188 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1825 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 191 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1833 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 194 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1841 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 197 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1849 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 200 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_STRING;
  }
#line 1857 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 206 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_DEFINED, $1.val);
  }
#line 1865 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 209 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_FUNC, $1);
  }
#line 1873 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 212 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1881 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 27:
#line 223 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1889 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 28:
#line 226 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1897 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 29:
#line 229 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1905 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 30:
#line 232 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1913 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 34:
#line 244 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_INTF, null);
  }
#line 1921 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 52:
#line 290 "yacc/koala.y" /* yacc.c:1661  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1929 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 53:
#line 293 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1937 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 54:
#line 296 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1945 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 55:
#line 302 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1955 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 56:
#line 307 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1965 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 59:
#line 320 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1971 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 60:
#line 321 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1977 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 61:
#line 322 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1983 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 71:
#line 344 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1989 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 72:
#line 345 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1995 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 73:
#line 346 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2001 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 74:
#line 347 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2007 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 94:
#line 399 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 2015 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 108:
#line 436 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----statement\n");
  }
#line 2023 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 109:
#line 442 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2032 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 131:
#line 522 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2038 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 132:
#line 523 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2046 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 133:
#line 526 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2052 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 134:
#line 527 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2060 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 135:
#line 567 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2068 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 136:
#line 570 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2076 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 137:
#line 573 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2084 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 138:
#line 576 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2092 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 139:
#line 579 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2100 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 140:
#line 582 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2108 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 141:
#line 588 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2116 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 142:
#line 591 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2129 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 143:
#line 599 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2142 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 607 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2150 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 610 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2158 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 613 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2166 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 616 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2174 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 619 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2182 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 625 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2190 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 628 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2203 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 636 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2216 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 644 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2224 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 647 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2232 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 650 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2240 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 155:
#line 653 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2248 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 156:
#line 659 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2256 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 157:
#line 662 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2264 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 158:
#line 665 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2272 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 159:
#line 668 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2280 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 160:
#line 674 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2288 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 161:
#line 677 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2296 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 162:
#line 680 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2304 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 163:
#line 686 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2312 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 164:
#line 689 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2320 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 165:
#line 692 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2328 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 166:
#line 698 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2336 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 167:
#line 701 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2344 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 168:
#line 704 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2352 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 169:
#line 707 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2360 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 170:
#line 710 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2368 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 171:
#line 716 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2376 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 719 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2384 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 722 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2392 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 728 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2400 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 731 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2408 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 737 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2416 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 740 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2424 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 746 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2432 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 749 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2440 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 180:
#line 755 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2448 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 181:
#line 758 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2456 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 182:
#line 764 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2464 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 183:
#line 767 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2472 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 184:
#line 773 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2480 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 185:
#line 779 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2487 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 203:
#line 816 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----basic_expression\n");
    show_expr((yyvsp[0].expression));
    putchar('\n');
  }
#line 2497 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 204:
#line 821 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2505 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2509 "koala_yacc.c" /* yacc.c:1661  */
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
#line 828 "yacc/koala.y" /* yacc.c:1906  */


int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

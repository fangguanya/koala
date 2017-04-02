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
    TYPELESS_ASSIGN = 259,
    ADD_ASSIGN = 260,
    SUB_ASSIGN = 261,
    MUL_ASSIGN = 262,
    DIV_ASSIGN = 263,
    MOD_ASSIGN = 264,
    AND_ASSIGN = 265,
    OR_ASSIGN = 266,
    XOR_ASSIGN = 267,
    RIGHT_SHIFT_ASSIGN = 268,
    LEFT_SHIFT_ASSIGN = 269,
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
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    DO = 284,
    FOR = 285,
    IN = 286,
    SWITCH = 287,
    CASE = 288,
    BREAK = 289,
    FALLTHROUGH = 290,
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
    AS = 302,
    NEW = 303,
    FUNC_HEADER = 304,
    INT8 = 305,
    INT16 = 306,
    INT32 = 307,
    INT64 = 308,
    UINT8 = 309,
    UINT16 = 310,
    UINT32 = 311,
    UINT64 = 312,
    FLOAT32 = 313,
    FLOAT64 = 314,
    BOOL = 315,
    STRING = 316,
    ROOT_OBJECT = 317,
    DIMS = 318,
    SELF = 319,
    TOKEN_NIL = 320,
    TOKEN_TRUE = 321,
    TOKEN_FALSE = 322,
    INTEGER = 323,
    HEX = 324,
    OCT = 325,
    FLOAT = 326,
    STRING_LITERAL = 327,
    ID = 328
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "yacc/koala.y" /* yacc.c:355  */

  string ident;
  int primitive_type;
  uint64 ival;
  float64 fval;
  string string_literal;
  int dims;
  base_type_t base_type;
  string string_array_2[2];
  name_type_t *name_type;
  type_t type;
  linked_list_t *linked_list;
  expr_t *expr;
  trailer_t *trailer;
  term_t term;
  anonymous_function_t anonymous;

#line 210 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "koala_yacc.c" /* yacc.c:358  */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    90,    93,     2,
      76,    75,    78,    85,    77,    86,    74,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    80,
      91,    79,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    84,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    95,    82,    87,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   169,   169,   172,   178,   182,   189,   192,   198,   201,
     204,   210,   213,   216,   219,   222,   225,   228,   231,   234,
     237,   240,   243,   246,   252,   256,   265,   268,   271,   274,
     280,   284,   291,   292,   293,   294,   295,   296,   297,   301,
     305,   306,   310,   311,   312,   316,   317,   321,   322,   323,
     324,   332,   335,   341,   344,   347,   353,   358,   366,   370,
     371,   375,   376,   382,   383,   387,   388,   389,   393,   394,
     398,   399,   403,   404,   408,   412,   413,   414,   415,   416,
     417,   418,   419,   423,   424,   425,   426,   430,   434,   441,
     442,   446,   447,   453,   454,   455,   456,   460,   463,   466,
     469,   476,   479,   485,   489,   496,   499,   505,   508,   511,
     514,   517,   523,   527,   533,   534,   538,   539,   540,   544,
     548,   549,   550,   554,   555,   556,   560,   561,   565,   569,
     570,   571,   572,   575,   581,   586,   595,   598,   604,   607,
     610,   613,   618,   621,   624,   625,   626,   627,   628,   632,
     635,   638,   641,   644,   647,   653,   654,   658,   662,   666,
     672,   675,   678,   681,   684,   690,   691,   695,   696,   697,
     701,   704,   712,   720,   723,   726,   729,   735,   738,   741,
     744,   750,   753,   756,   762,   765,   768,   774,   777,   780,
     783,   786,   792,   795,   798,   804,   807,   813,   816,   822,
     825,   831,   834,   840,   843,   849,   857,   858,   862,   863,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   876,
     877
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELLIPSIS", "TYPELESS_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "EQ", "NE", "GE", "LE", "AND", "OR", "NOT",
  "SHIFT_LEFT", "SHIFT_RIGHT", "INC", "DEC", "IF", "ELSE", "WHILE", "DO",
  "FOR", "IN", "SWITCH", "CASE", "BREAK", "FALLTHROUGH", "CONTINUE",
  "DEFAULT", "VAR", "FUNC", "RETURN", "STRUCT", "INTERFACE", "TYPE",
  "CONST", "PACKAGE", "IMPORT", "AS", "NEW", "FUNC_HEADER", "INT8",
  "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BOOL", "STRING", "ROOT_OBJECT", "DIMS", "SELF",
  "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE", "INTEGER", "HEX", "OCT",
  "FLOAT", "STRING_LITERAL", "ID", "'.'", "')'", "'('", "','", "'*'",
  "'='", "';'", "'{'", "'}'", "'['", "']'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept",
  "ModulePathName", "TypeNameList", "TypeName", "BaseType",
  "PrimitiveType", "ModuleType", "FunctionType", "ReturnTypeList",
  "Program", "PackageDeclaration", "ImportDeclarations",
  "ImportDeclaration", "Declarations", "Declaration", "ConstDeclaration",
  "VariableDeclaration", "VariableList", "VariableInitializerList",
  "VariableInitializer", "ArrayInitializerList", "SemiOrEmpty",
  "TypeDeclaration", "MemberDeclarations", "MemberDeclaration",
  "FieldDeclaration", "MethodDeclaration", "MethodDeclarationHeader1",
  "MethodDeclarationHeader2", "ParameterList",
  "InterfaceFunctionDeclarations", "InterfaceFunctionDeclaration",
  "FunctionDeclaration", "AnonymousFunctionDeclaration", "CodeBlock",
  "LocalVariableDeclsOrStatements", "LocalVariableDeclOrStatement",
  "Statement", "ExpressionStatement", "SelectionStatement", "IfStatement",
  "SwitchStatement", "IterationStatemnet", "ForInit", "ForExpr", "ForIncr",
  "JumpStatement", "ExpressionList", "PrimaryExpression", "Term",
  "Literal", "DimExprs", "DimExpr", "TrailerList", "Trailer",
  "FunctionDeclarationList", "PostfixExpression", "UnaryExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression", "LogicalAndExpression",
  "LogicalOrExpression", "Expression", "AssignmentExpression",
  "PostfixExpressionList", "CompoundOperator", YY_NULLPTR
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
     325,   326,   327,   328,    46,    41,    40,    44,    42,    61,
      59,   123,   125,    91,    93,    43,    45,   126,    33,    47,
      37,    60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -276

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-276)))

#define YYTABLE_NINF -209

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      90,   -11,    -8,    32,   -11,    67,    67,   116,   100,   100,
    -276,    68,  -276,  -276,  -276,  -276,  -276,  -276,   829,    86,
    1046,   859,  -276,   -34,   -13,  -276,   100,    68,  -276,    68,
    -276,   105,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   178,   145,   136,   508,   -25,
    -276,  -276,  -276,  -276,    13,    92,   146,   142,   508,   166,
     185,  -276,  -276,   186,   -48,  -276,    68,   943,  -276,   193,
    -276,   688,   688,   192,   178,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,   688,   508,   688,   688,   688,   688,   688,
     194,   189,  -276,   196,  -276,  -276,   -38,  -276,   762,  -276,
     127,  -276,    24,    72,   163,    -1,   210,   182,   177,   181,
     259,   260,  -276,   508,  -276,  1071,   797,    47,     9,    11,
    -276,    65,   508,  -276,   199,   199,   889,    55,  -276,  -276,
    -276,  -276,    93,   202,   209,     1,   201,  -276,  -276,  -276,
    -276,    82,  -276,   508,   213,   553,   688,   -38,  -276,   178,
     206,  -276,  -276,  -276,   688,   688,   688,   688,   688,   688,
     688,   688,   688,   688,   688,   688,   688,   688,   688,   688,
     688,   688,   211,  -276,  1071,   345,  -276,   208,  -276,   797,
     217,   219,   221,   916,   -10,  -276,  -276,  -276,   208,   222,
     223,   218,   220,    -7,  -276,  -276,    87,  -276,  -276,  -276,
     889,  1071,   797,   103,   508,  -276,  -276,  -276,   226,  -276,
    -276,   216,   118,  -276,   225,  -276,   229,   508,  -276,  -276,
    -276,    24,    24,    72,    72,   163,   163,   163,   163,    -1,
      -1,   210,   182,   177,   181,   259,  -276,   119,   228,   230,
     208,   231,   235,   234,   238,   250,   598,  -276,  -276,  -276,
     410,  -276,  -276,   251,  -276,  -276,  -276,  -276,  -276,   315,
    -276,  -276,   120,  -276,   208,  -276,  1071,  1071,   239,   128,
     252,   199,  -276,  -276,   257,   969,  -276,  -276,   199,  -276,
    -276,  -276,  -276,   208,  -276,   797,    22,  -276,   263,  -276,
     688,  -276,   508,    38,  -276,   688,   688,   306,   463,   688,
    -276,  -276,  -276,  -276,    97,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,   508,
     727,   508,  -276,  -276,   255,   129,   889,   130,  -276,  -276,
     995,  1021,   131,  -276,  -276,   208,  -276,  -276,  -276,    -6,
    -276,    41,  -276,   261,   262,   266,  -276,  -276,   264,   643,
     270,  -276,  -276,   127,  -276,  -276,   889,   135,  -276,   889,
     141,   889,  -276,  -276,  -276,  -276,   208,   208,   688,  -276,
    -276,   688,   267,   208,  -276,   889,  -276,   889,  -276,   319,
    -276,   273,  -276,   274,  -276,  -276,  -276,  -276,     0,   271,
     208,  -276,  -276,  -276,  -276
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      40,    38,    45,    47,    48,    49,    50,    56,     0,     0,
       0,     0,     2,    63,    63,     1,    33,    34,    41,    35,
      46,     0,    15,    16,    17,    18,    11,    12,    13,    14,
      19,    20,    21,    22,    23,     0,    25,     0,     0,     0,
       6,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    64,    39,     0,     0,    42,    32,     0,     7,     0,
      57,     0,     0,     0,     0,   139,   152,   153,   154,   149,
     150,   151,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    58,   143,   167,   136,   140,     0,   155,
     170,   177,   181,   184,   187,   192,   195,   197,   199,   201,
     203,   205,    59,     0,    53,     0,     0,     0,     0,     0,
      67,     0,     0,     3,    63,    63,    27,     0,     4,    24,
     171,   172,     0,     0,     0,     0,     0,   173,   174,   175,
     176,     0,    54,     0,     0,     0,     0,   137,   158,     0,
     144,   156,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    30,     0,    94,     0,
       0,     0,     0,     0,     0,    68,    70,    71,     0,     0,
       0,     0,     0,     0,    89,    51,     0,    43,    44,    26,
      29,     0,     0,     0,     0,   142,    60,   157,     0,    62,
     160,   163,     0,   134,     0,   159,   145,     0,   178,   179,
     180,   182,   183,   185,   186,   191,   190,   188,   189,   193,
     194,   196,   198,   200,   202,   204,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   105,   111,
       0,   103,   106,     0,   108,   114,   115,   109,   110,   170,
     112,   113,     0,    93,     0,    96,     0,     0,     0,     0,
       0,    63,    69,    74,     0,     0,    91,    92,    63,    90,
      52,    28,     5,     0,    98,     0,     0,   141,     0,   162,
       0,   161,     0,     0,    31,     0,     0,     0,     0,     0,
     129,   130,   131,   132,     0,   101,   104,   107,   220,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,    95,    88,     0,     0,    80,     0,    73,    65,
       0,    25,     0,    66,    97,     0,   100,   148,   165,     0,
     135,     0,   146,     0,     0,     0,   125,   124,     0,     0,
       0,   133,   207,   209,   206,    72,    76,     0,    79,    82,
       0,    86,    99,   164,   166,   147,     0,     0,     0,   123,
     127,     0,     0,     0,    75,    78,    81,    84,    85,   116,
     120,     0,   128,     0,   126,   119,    77,    83,     0,     0,
       0,   117,   118,   121,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -276,   344,  -154,   -14,   -30,   -18,  -276,  -276,  -115,  -276,
    -276,   346,    15,    43,     8,  -276,  -161,   348,  -108,  -131,
     -45,   -15,  -276,  -276,   169,  -276,  -276,   -98,  -276,   -53,
    -276,   162,  -266,  -276,   -85,  -276,   106,  -276,  -275,  -276,
     -28,  -276,  -276,  -276,  -276,  -276,  -276,   112,  -276,  -276,
     224,  -276,   265,  -276,   214,  -276,  -157,   -29,    85,    95,
      28,    99,   195,   198,   203,   197,   205,  -276,   -75,  -276,
    -276,  -276
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   127,   176,    50,    90,    52,    53,   177,     7,
       8,     9,    10,    11,    12,    13,    14,    18,    91,    92,
      93,    62,    15,   184,   185,   186,   187,   188,   192,   327,
     193,   194,    16,    94,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   349,   371,   383,   258,   212,    95,    96,
      97,    98,    99,   147,   148,   339,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   261,
     262,   319
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   117,    51,    51,    49,   172,    57,    59,   134,    65,
     136,   199,   209,   121,   248,    68,   161,   162,   259,    30,
     237,   191,   338,   348,    28,   123,   238,    51,   181,   182,
     125,   178,   189,     2,    63,    30,   144,    30,   145,   135,
      60,    28,   130,   131,   133,   146,    61,   181,   182,    51,
     189,    27,    29,   128,   113,   114,    51,   137,   138,   139,
     140,    64,    17,   183,   264,    19,   190,    61,   150,    66,
     213,   214,   271,   364,    30,   278,   363,   196,   143,   203,
      51,   175,   183,   206,   190,   281,   115,   283,   116,   248,
     163,   164,   263,   259,   265,   191,   382,    51,    51,   143,
     260,   173,   154,   273,   337,    20,     1,     2,    51,   197,
     198,     3,     4,   155,   156,   143,    25,   284,   143,   216,
     342,   332,   179,   365,   180,   218,   219,   220,     1,     2,
     200,    51,   201,     3,     4,     5,     6,   347,     1,     2,
      22,   259,   143,     3,     4,   195,     6,    76,    77,    78,
      79,   152,   153,    80,    81,   297,    51,   157,   158,   286,
     128,    51,    54,   353,   143,    51,   115,   280,   202,   270,
     335,   213,   293,   118,   290,   260,   360,   351,   285,   322,
     180,    67,    51,    51,    51,   159,   160,   282,   352,   225,
     226,   227,   228,   289,   294,   290,   201,   320,   334,   321,
     336,   115,   115,   326,   356,   359,   361,   180,   201,    70,
     375,   358,   180,   354,   259,   340,   377,    31,   201,    69,
     343,   344,   120,   260,   350,   165,   166,   119,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   374,   221,   222,   376,   122,   378,   341,    51,    51,
     362,    46,   323,   324,   223,   224,   329,    51,   123,   124,
     386,   128,   387,   333,   229,   230,   129,    51,   132,   142,
     141,   168,   357,   143,   372,   167,   169,   357,   170,    61,
     171,   379,   380,   204,   205,   207,   210,   217,   385,   175,
     266,   236,   267,   381,   268,   274,   260,   288,   276,   275,
     277,   287,     2,   391,   295,   394,   296,   298,    51,   291,
     292,   299,    51,    51,   300,   325,   128,   173,   301,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     302,   307,   328,   330,   345,   355,   366,   367,    51,   152,
     153,    51,   368,    51,   369,   373,   388,   384,   389,   390,
      24,   393,    21,   272,    26,   279,   306,    51,   304,    51,
     392,   215,   231,   151,     0,   208,   232,   234,     0,    71,
      72,   238,   233,   239,   240,   241,   235,   242,     0,   243,
     244,   245,     0,     1,    73,   246,     0,     0,     0,     0,
       0,     0,  -208,     0,  -208,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,     0,
       0,    83,     0,     0,     0,     0,   175,   247,    85,     0,
      86,    87,    88,    89,    71,    72,   238,     0,   239,   240,
     241,     0,   242,     0,   243,   244,   245,     0,     1,    73,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    74,    75,    76,    77,    78,    79,     0,
       0,    80,    81,    82,     0,     0,    83,    71,    72,     0,
       0,   175,   305,    85,     0,    86,    87,    88,    89,     0,
       0,     1,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    74,    75,    76,    77,
      78,    79,    71,    72,    80,    81,    82,     0,     0,    83,
       0,     0,     0,   346,     0,     0,    85,    73,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,    71,    72,    80,
      81,    82,     0,     0,    83,     0,     0,     0,     0,    84,
       0,    85,    73,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    74,    75,    76,    77,
      78,    79,    71,    72,    80,    81,    82,     0,   211,    83,
       0,     0,     0,     0,     0,     0,    85,    73,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,    71,    72,    80,
      81,    82,     0,     0,    83,     0,     0,     0,   303,     0,
       0,    85,    73,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    74,    75,    76,    77,
      78,    79,    71,    72,    80,    81,    82,     0,     0,    83,
       0,     0,     0,   370,     0,     0,    85,    73,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,     0,     0,    83,     0,    73,     0,     0,     0,
       0,    85,     0,    86,    87,    88,    89,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      74,    75,    76,    77,    78,    79,     0,     0,    80,    81,
      82,    31,     0,    83,     0,     0,     0,     0,     0,     0,
      85,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      46,     0,     0,   174,     0,     0,     0,     0,   175,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    46,     0,     0,     0,    47,     0,    48,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    46,     0,     0,     0,    47,     0,    58,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,    31,     0,     0,     0,     0,
       0,     0,    46,     0,     0,   174,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,    31,     0,     0,     0,     0,     0,     0,    46,
       0,     0,   269,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,    31,     0,
       0,     0,     0,     0,     0,     0,    46,     0,   126,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    31,     0,     0,     0,     0,     0,
       0,     0,   331,     0,   326,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
      31,     0,     0,     0,     0,     0,     0,     0,   331,     0,
     356,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    31,     0,    55,    56,     0,
       0,     0,     0,     0,    46,    69,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      18,    54,    20,    21,    18,   113,    20,    21,    83,    24,
      85,   126,   143,    58,   175,    45,    17,    18,   175,    11,
     174,   119,   288,   298,     9,    73,    26,    45,    38,    39,
      78,   116,    39,    39,    47,    27,    74,    29,    76,    84,
      74,    26,    71,    72,    74,    83,    80,    38,    39,    67,
      39,     8,     9,    67,    79,    80,    74,    86,    87,    88,
      89,    74,    73,    73,   179,    73,    73,    80,    98,    26,
     145,   146,    82,   339,    66,    82,    82,   122,    77,   132,
      98,    81,    73,    82,    73,   200,    73,   202,    75,   250,
      91,    92,   177,   250,   179,   193,   371,   115,   116,    77,
     175,   115,    78,   188,    82,    73,    38,    39,   126,   124,
     125,    43,    44,    89,    90,    77,     0,   202,    77,   149,
      82,   275,    75,    82,    77,   154,   155,   156,    38,    39,
      75,   149,    77,    43,    44,    45,    46,   298,    38,    39,
      73,   298,    77,    43,    44,    80,    46,    65,    66,    67,
      68,    24,    25,    71,    72,   240,   174,    85,    86,   204,
     174,   179,    76,   320,    77,   183,    73,    80,    75,   183,
     285,   246,   217,    81,    77,   250,   330,    80,    75,   264,
      77,    76,   200,   201,   202,    22,    23,   201,   319,   161,
     162,   163,   164,    75,    75,    77,    77,    77,   283,    79,
     285,    73,    73,    75,    75,    75,    75,    77,    77,    73,
      75,   326,    77,   321,   371,   290,    75,    39,    77,    74,
     295,   296,    80,   298,   299,    15,    16,    81,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,   356,   157,   158,   359,    79,   361,   292,   266,   267,
     335,    73,   266,   267,   159,   160,   271,   275,    73,    73,
     375,   275,   377,   278,   165,   166,    73,   285,    76,    80,
      76,    94,   325,    77,   349,    93,    95,   330,    19,    80,
      20,   366,   367,    81,    75,    84,    73,    81,   373,    81,
      73,    80,    73,   368,    73,    73,   371,    81,    80,    76,
      80,    75,    39,   388,    76,   390,    76,    76,   326,    84,
      81,    76,   330,   331,    80,    76,   330,   331,    80,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      80,    80,    80,    76,    28,    80,    75,    75,   356,    24,
      25,   359,    76,   361,    80,    75,    27,    80,    75,    75,
       6,    80,     4,   184,     8,   193,   250,   375,   246,   377,
     388,   147,   167,    98,    -1,   141,   168,   170,    -1,    24,
      25,    26,   169,    28,    29,    30,   171,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      85,    86,    87,    88,    24,    25,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      -1,    71,    72,    73,    -1,    -1,    76,    24,    25,    -1,
      -1,    81,    82,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    24,    25,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    39,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    24,    25,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    83,    39,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    24,    25,    71,    72,    73,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    39,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    24,    25,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    39,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    24,    25,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    39,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    39,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    -1,    71,    72,
      73,    39,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    79,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    79,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    76,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    73,    74,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    43,    44,    45,    46,   105,   106,   107,
     108,   109,   110,   111,   112,   118,   128,    73,   113,    73,
      73,   113,    73,    97,    97,     0,   107,   109,   108,   109,
     110,    39,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    73,    77,    79,    99,
     100,   101,   102,   103,    76,    41,    42,    99,    79,    99,
      74,    80,   117,    47,    74,   117,   109,    76,   100,    74,
      73,    24,    25,    39,    63,    64,    65,    66,    67,    68,
      71,    72,    73,    76,    81,    83,    85,    86,    87,    88,
     101,   114,   115,   116,   129,   144,   145,   146,   147,   148,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    79,    80,    73,    75,   125,    81,    81,
      80,   116,    79,    73,    73,    78,    75,    98,    99,    73,
     153,   153,    76,   100,   164,   116,   164,   153,   153,   153,
     153,    76,    80,    77,    74,    76,    83,   149,   150,    63,
     100,   148,    24,    25,    78,    89,    90,    85,    86,    22,
      23,    17,    18,    91,    92,    15,    16,    93,    94,    95,
      19,    20,   114,    99,    76,    81,    99,   104,   130,    75,
      77,    38,    39,    73,   119,   120,   121,   122,   123,    39,
      73,   123,   124,   126,   127,    80,   116,   117,   117,   104,
      75,    77,    75,   125,    81,    75,    82,    84,   146,   115,
      73,    75,   143,   164,   164,   150,   100,    81,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   156,   157,
     157,   158,   159,   160,   161,   162,    80,    98,    26,    28,
      29,    30,    32,    34,    35,    36,    40,    82,   112,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   142,   152,
     164,   165,   166,   130,   104,   130,    73,    73,    73,    76,
      99,    82,   120,   130,    73,    76,    80,    80,    82,   127,
      80,   104,    99,   104,   130,    75,   116,    75,    81,    75,
      77,    84,    81,   116,    75,    76,    76,   130,    76,    76,
      80,    80,    80,    80,   143,    82,   132,    80,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   167,
      77,    79,   130,    99,    99,    76,    75,   125,    80,   117,
      76,    73,    98,   117,   130,   104,   130,    82,   128,   151,
     164,   116,    82,   164,   164,    28,    80,   112,   134,   139,
     164,    80,   115,   152,   114,    80,    75,   125,   104,    75,
      98,    75,   130,    82,   128,    82,    75,    75,    76,    80,
      80,   140,   164,    75,   104,    75,   104,    75,   104,   130,
     130,   164,   134,   141,    80,   130,   104,   104,    27,    75,
      75,   130,   136,    80,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   106,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   112,   113,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     138,   138,   138,   139,   139,   139,   140,   140,   141,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   146,   147,   147,   148,   149,   149,
     150,   150,   150,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   155,   155,   155,   156,   156,   156,   157,   157,   157,
     157,   157,   158,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   165,   165,   166,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     4,     3,     5,     4,
       1,     3,     3,     2,     2,     2,     1,     1,     1,     3,
       1,     2,     3,     5,     5,     1,     2,     1,     1,     1,
       1,     5,     6,     4,     5,     6,     1,     3,     1,     1,
       3,     1,     3,     0,     1,     7,     7,     4,     1,     2,
       1,     1,     4,     3,     2,     5,     4,     6,     5,     4,
       3,     5,     4,     6,     5,     5,     4,     2,     4,     1,
       2,     2,     2,     6,     5,     7,     6,     5,     4,     6,
       5,     3,     2,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     7,     5,
       5,     7,     7,     2,     1,     1,     2,     1,     1,     2,
       2,     2,     2,     3,     1,     3,     1,     2,     1,     1,
       1,     4,     3,     1,     2,     3,     5,     6,     5,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     2,
       2,     3,     3,     2,     5,     1,     2,     1,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
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
        case 2:
#line 169 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1767 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 172 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1775 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 178 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 1784 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 182 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].name_type));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 1793 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 189 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type(0, (yyvsp[0].base_type));
  }
#line 1801 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 192 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type((yyvsp[-1].dims), (yyvsp[0].base_type));
  }
#line 1809 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 198 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = new_primitive_type((yyvsp[0].primitive_type));
  }
#line 1817 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 201 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = new_module_type((yyvsp[0].string_array_2));
  }
#line 1825 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 204 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = (yyvsp[0].base_type);
  }
#line 1833 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 210 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1841 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 213 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1849 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 216 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 219 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1865 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 222 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1873 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 225 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1881 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 228 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1889 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 231 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1897 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 234 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1905 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 237 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1913 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 240 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1921 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 243 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1929 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_ROOT_OBJECT;
  }
#line 1937 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 252 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("Module:%s, TypeName:%s\n", (yyvsp[-2].ident).val, (yyvsp[0].ident).val);
    (yyval.string_array_2)[0] = (yyvsp[-2].ident); (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1946 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 256 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("TypeName:%s\n", (yyvsp[0].ident).val);
    (yyval.string_array_2)[0].val = null;
    (yyval.string_array_2)[0].len = 0;
    (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1957 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 265 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = new_func_type(null, (yyvsp[0].linked_list));
  }
#line 1965 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 268 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = new_func_type(null, null);
  }
#line 1973 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 271 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = new_func_type((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
  }
#line 1981 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 274 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = new_func_type((yyvsp[-1].linked_list), null);
  }
#line 1989 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 1998 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 284 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2006 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 332 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2014 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 335 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2022 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 341 "yacc/koala.y" /* yacc.c:1646  */
    {
    //new_var_decl($2, $3, null);
  }
#line 2030 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 344 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2038 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 347 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2046 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 353 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("ID: %s\n", (yyvsp[0].ident).val);
    //$$ = linked_list_new();
    //linked_list_add_tail($$, new_simple_var($1));
  }
#line 2056 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 358 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("ID: %s\n", (yyvsp[0].ident).val);
    //$$ = $1;
    //linked_list_add_tail($$, new_simple_var($3));
  }
#line 2066 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 430 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
  }
#line 2075 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 434 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-3].linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
    (yyval.linked_list) = (yyvsp[-3].linked_list);
  }
#line 2084 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 460 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, (yyvsp[-1].linked_list), (yyvsp[0].linked_list));
  }
#line 2092 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 463 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, null, (yyvsp[0].linked_list));
  }
#line 2100 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 466 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].linked_list));
  }
#line 2108 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 469 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-2].linked_list), null, (yyvsp[0].linked_list));
  }
#line 2116 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 476 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2124 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 479 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = null;
  }
#line 2132 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 485 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2141 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 489 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2150 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 496 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2158 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 499 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2166 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 505 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2174 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 508 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2182 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 511 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2190 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 514 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2198 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 517 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_list((yyvsp[0].linked_list));
  }
#line 2206 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 523 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    printf("----ExpressionStatement----\n");
  }
#line 2215 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 527 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----AssignmentExpressionStatement----\n");
  }
#line 2223 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 132:
#line 572 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("return----\n");
  }
#line 2231 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 575 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("return----\n");
  }
#line 2239 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 581 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_t *list = linked_list_new();
    linked_list_add_tail(list, (yyvsp[0].expr));
    (yyval.expr) = new_exp_list(list);
  }
#line 2249 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 586 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].expr)->list, (yyvsp[0].expr));
    (yyval.expr) = (yyvsp[-2].expr);
  }
#line 2258 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 595 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term((yyvsp[0].term));
  }
#line 2266 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 598 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term(new_term_trailer((yyvsp[-1].term), (yyvsp[0].linked_list)));
  }
#line 2274 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 604 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_id((yyvsp[0].ident));
  }
#line 2282 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 607 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_self();
  }
#line 2290 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 610 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = (yyvsp[0].term);
  }
#line 2298 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 613 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("literal with type declaration\n");
    check_primitive_type((yyvsp[-3].primitive_type), (yyvsp[-1].term));
    (yyval.term) = (yyvsp[-1].term);
  }
#line 2308 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 618 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_exp((yyvsp[-1].expr));
  }
#line 2316 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 621 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_anonymous((yyvsp[0].anonymous));
  }
#line 2324 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 624 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2330 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 625 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2336 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 626 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2342 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 627 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2348 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 628 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2354 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 632 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_uint((yyvsp[0].ival));
  }
#line 2362 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 635 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_float((yyvsp[0].fval));
  }
#line 2370 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 638 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_string((yyvsp[0].string_literal));
  }
#line 2378 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 641 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_null();
  }
#line 2386 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 644 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_bool(true);
  }
#line 2394 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 647 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.term) = new_term_bool(false);
  }
#line 2402 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 662 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].trailer));
  }
#line 2411 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 666 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].trailer));
  }
#line 2419 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 672 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_field_access((yyvsp[0].ident));
  }
#line 2427 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 675 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_array_access((yyvsp[-1].expr));
  }
#line 2435 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 678 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call((yyvsp[-1].expr)->list);
  }
#line 2443 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 681 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call(null);
  }
#line 2451 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 684 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_interface_implementation();
  }
#line 2459 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 701 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2467 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 704 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_INC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 2480 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 712 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_DEC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 2493 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 720 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2501 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 723 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_MINUS, (yyvsp[0].expr));
  }
#line 2509 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 726 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_BNOT, (yyvsp[0].expr));
  }
#line 2517 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 729 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_LNOT, (yyvsp[0].expr));
  }
#line 2525 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 735 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2533 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 738 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_TIMES, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2541 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 741 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_DIVIDE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2549 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 744 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MOD, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2557 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 750 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2565 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 753 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_PLUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2573 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 756 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MINUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2581 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 762 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2589 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 765 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2597 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 768 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_RSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2605 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 774 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2613 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 777 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2621 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 780 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2629 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 783 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2637 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 786 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2645 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 792 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2653 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 795 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_EQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2661 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 798 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2669 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 804 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2677 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 807 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2685 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 813 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2693 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 816 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BXOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2701 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 199:
#line 822 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2709 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 200:
#line 825 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2717 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 201:
#line 831 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2725 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 202:
#line 834 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2733 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 203:
#line 840 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2741 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 204:
#line 843 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2749 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 205:
#line 849 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2757 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2761 "koala_yacc.c" /* yacc.c:1646  */
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
#line 882 "yacc/koala.y" /* yacc.c:1906  */


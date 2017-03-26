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
    AS = 301,
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
    ROOT_OBJECT = 315,
    DIMS = 316,
    TOKEN_THIS = 317,
    TOKEN_NIL = 318,
    TOKEN_TRUE = 319,
    TOKEN_FALSE = 320,
    INTEGER = 321,
    HEX = 322,
    OCT = 323,
    FLOAT = 324,
    STRING_LITERAL = 325,
    IDENTIFIER = 326
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

#line 204 "koala_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "koala_yacc.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   926

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,     2,     2,    89,    92,     2,
      74,    75,    77,    84,    73,    85,    72,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    76,
      90,    78,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    94,    80,    86,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   139,   139,   142,   154,   155,   159,   162,   165,   166,
     170,   173,   176,   179,   182,   185,   188,   191,   194,   197,
     200,   203,   206,   212,   215,   221,   224,   230,   233,   236,
     239,   245,   246,   247,   252,   253,   254,   258,   259,   263,
     264,   265,   269,   270,   274,   275,   276,   284,   287,   290,
     296,   301,   309,   310,   314,   315,   316,   317,   318,   319,
     320,   324,   325,   329,   330,   334,   338,   339,   340,   341,
     342,   346,   352,   353,   354,   358,   359,   363,   364,   368,
     372,   376,   377,   378,   379,   383,   384,   388,   389,   393,
     396,   400,   401,   405,   406,   412,   413,   414,   415,   419,
     420,   421,   422,   427,   428,   432,   433,   439,   443,   444,
     445,   449,   450,   454,   455,   459,   460,   464,   468,   469,
     470,   474,   475,   476,   480,   481,   485,   489,   490,   519,
     522,   525,   528,   568,   571,   574,   577,   580,   583,   589,
     592,   600,   608,   611,   614,   617,   620,   626,   629,   637,
     645,   648,   651,   654,   660,   663,   666,   669,   675,   678,
     681,   687,   690,   693,   699,   702,   705,   708,   711,   717,
     720,   723,   729,   732,   738,   741,   747,   750,   756,   759,
     765,   768,   774,   780,   786,   787,   791,   792,   798,   799,
     800,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   817,   822
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
  "DEC", "IF", "ELSE", "WHILE", "DO", "FOR", "IN", "SWITCH", "CASE",
  "BREAK", "CONTINUE", "DEFAULT", "VAR", "FUNC", "RETURN", "STRUCT",
  "INTERFACE", "TYPE", "CONST", "PACKAGE", "IMPORT", "AS", "NEW", "INT8",
  "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BOOL", "STRING", "ROOT_OBJECT", "DIMS",
  "TOKEN_THIS", "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE", "INTEGER", "HEX",
  "OCT", "FLOAT", "STRING_LITERAL", "IDENTIFIER", "'.'", "','", "'('",
  "')'", "';'", "'*'", "'='", "'{'", "'}'", "'['", "']'", "':'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'",
  "$accept", "ModuleFilePathName", "TypeList", "Type", "PrimitiveType",
  "ComplexType", "ModuleType", "FunctionType", "ReturnTypeList", "Program",
  "ImportDeclarations", "ImportDeclaration", "Declarations", "Declaration",
  "VariableDeclaration", "VariableList", "VariableInitializerList",
  "ComplexVariableInitializer", "ArrayInitializerList", "DimExprs",
  "DimExpr", "ArrayInitializer", "ArrayPositionInitializer",
  "TypeDeclaration", "MemberDeclarations", "MemberDeclaration",
  "FieldDeclaration", "MethodDeclaration", "MethodDeclarationHeader1",
  "MethodDeclarationHeader2", "ParameterList", "CodeBlock",
  "InterfaceFunctionDeclarations", "InterfaceFunctionDeclaration",
  "FunctionDeclaration", "AnonymousFunctionDeclaration",
  "local_variable_declaration_statements",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,    46,    44,    40,    41,    59,    42,    61,   123,
     125,    91,    93,    58,    43,    45,   126,    33,    47,    37,
      60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -264

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-264)))

#define YYTABLE_NINF -187

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      58,   -38,   -23,   -10,     9,    42,    58,  -264,    17,  -264,
    -264,  -264,  -264,  -264,   668,    12,   807,  -264,   -26,  -264,
    -264,    17,  -264,    50,  -264,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,   855,    45,    75,
     270,    74,  -264,  -264,  -264,  -264,   -15,   107,   108,    86,
      88,   -24,  -264,   699,  -264,  -264,   117,  -264,   628,   628,
     116,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   628,
     364,   628,   628,   628,   628,   628,   118,    -6,  -264,   424,
    -264,  -264,  -264,  -264,    -8,  -264,   -45,    20,   110,     1,
     125,    99,   100,   101,   175,   176,  -264,  -264,   270,   831,
     225,    76,   138,   159,  -264,   122,  -264,   126,   755,    80,
    -264,  -264,  -264,  -264,    22,   128,   124,   364,   127,   -50,
    -264,  -264,  -264,  -264,   129,  -264,  -264,  -264,  -264,   628,
     270,  -264,   135,  -264,  -264,  -264,   137,   549,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,     5,  -264,   755,
     428,  -264,   136,  -264,   145,   225,   146,   147,   -12,  -264,
    -264,  -264,   136,   151,   148,   149,    -1,  -264,  -264,  -264,
    -264,   831,   755,   225,    83,  -264,   364,   -46,   628,   364,
    -264,  -264,   152,  -264,   321,  -264,   136,  -264,  -264,    93,
     141,  -264,  -264,  -264,   -45,   -45,    20,    20,   110,   110,
     110,   110,     1,     1,   125,    99,   100,   101,   175,  -264,
     153,   156,   157,   158,   136,   160,   174,   575,  -264,  -264,
     492,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   233,  -264,
     -33,  -264,   150,  -264,   831,   136,  -264,   831,   177,   173,
    -264,  -264,   179,  -264,  -264,   178,  -264,  -264,  -264,   136,
    -264,   225,  -264,  -264,   181,  -264,  -264,  -264,   -44,  -264,
     628,  -264,  -264,  -264,   831,   628,   628,   222,   522,   628,
    -264,    43,  -264,  -264,   270,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,   270,    73,   270,  -264,  -264,
    -264,   183,    31,  -264,   727,  -264,  -264,   136,  -264,  -264,
    -264,  -264,   186,   187,   189,   191,  -264,  -264,   601,   194,
     192,  -264,  -264,  -264,    -8,   199,  -264,   755,    96,   782,
      97,  -264,  -264,   136,   136,   628,  -264,   628,   211,  -264,
     136,  -264,   755,   755,   261,  -264,   214,   216,  -264,  -264,
    -264,  -264,  -264,    -2,   217,   136,  -264,  -264,  -264,  -264,
    -264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    35,    37,    36,    42,
      44,    45,    46,    50,     0,     0,     0,     2,     0,     1,
      38,    34,    43,     0,    14,    15,    16,    17,    10,    11,
      12,    13,    18,    19,    20,    21,    22,     0,    25,     0,
       0,     0,     6,     7,    23,    24,     0,     0,     0,     0,
       0,     0,    39,     0,     8,     9,     0,    51,     0,     0,
       0,   131,   136,   137,   138,   133,   134,   135,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      63,    56,   139,   130,   147,   154,   158,   161,   164,   169,
     172,   174,   176,   178,   180,   182,    54,    47,     0,     0,
       0,     0,     0,     0,    74,     0,     3,     0,    27,     0,
       4,    26,   148,   149,     0,     0,   133,     0,     0,     0,
      61,    69,    68,    66,     0,   150,   151,   152,   153,     0,
       0,    48,    58,    64,   140,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    31,     0,    95,     0,     0,     0,     0,     0,    75,
      77,    78,     0,     0,     0,     0,     0,    91,    40,    41,
      28,     0,    29,     0,     0,   132,     0,     0,     0,     0,
      57,    65,     0,    53,     0,   142,   145,   183,   184,     0,
       0,   155,   156,   157,   159,   160,   162,   163,   168,   167,
     165,   166,   170,   171,   173,   175,   177,   179,   181,    49,
      31,     0,     0,     0,     0,     0,     0,     0,    90,   105,
       0,   103,   106,   108,   111,   112,   109,   110,   147,   201,
       0,   202,     0,    96,     0,     0,    97,     0,     0,     0,
      76,    80,     0,    93,    94,     0,    92,     5,    30,     0,
      99,     0,    71,    70,     0,    62,    55,    60,     0,   146,
       0,   144,   143,    32,     0,     0,     0,     0,     0,     0,
     127,     0,    89,   104,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,   107,    88,
      98,     0,     0,    72,     0,    73,   100,     0,   101,    67,
      59,   185,     0,     0,     0,     0,   123,   122,     0,     0,
       0,   128,   190,   189,   187,   188,    79,    81,     0,    25,
       0,   102,    33,     0,     0,     0,   125,     0,     0,   121,
       0,    82,    83,    85,   113,   118,     0,     0,   126,   124,
     117,    84,    86,     0,     0,     0,   116,   115,   114,   119,
     120
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,    -7,   -14,   -29,   255,  -264,  -264,  -107,  -264,
    -264,   292,   294,    14,  -147,  -264,   -92,  -121,  -110,  -264,
     223,   -68,  -264,  -264,  -264,   133,  -264,  -264,   -89,  -264,
     -25,  -134,  -264,   134,  -264,   -60,  -264,    79,  -264,  -264,
     -41,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,
    -148,    40,    35,    38,   -39,    34,   161,   163,   184,   162,
     196,  -264,   -66,    33,   104,  -264,  -264,  -264,  -263
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,   109,   161,    42,    43,    44,    45,   162,     5,
       6,     7,     8,     9,    10,    14,    77,    78,   119,    79,
      80,   120,   121,    11,   168,   169,   170,   171,   172,   175,
     328,   163,   176,   177,    12,    81,   230,   231,   232,   233,
     234,   358,   235,   236,   318,   337,   347,   237,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,   198,   199,   240,   241,   295,   242
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   180,    49,   115,   123,   124,   157,   187,    54,   193,
     122,    76,   238,   229,   174,   319,   134,   135,   146,   147,
      50,   101,    22,   189,   222,   166,   167,   189,   243,   189,
     190,   246,   139,    13,   263,    22,   310,   173,   251,   110,
     296,   118,    19,   140,   141,   297,    51,   106,    15,   260,
      52,   123,   221,   107,     1,     2,    99,   122,   245,     3,
     100,    16,   269,   192,   136,   132,   137,   130,   249,    76,
     131,   197,   200,   138,   348,   258,   259,   160,   130,   255,
      17,   219,   238,   229,   268,   158,    46,   174,   118,   184,
     277,   148,   149,    99,   239,     1,     2,   183,   112,   113,
       3,    76,    99,     4,   142,   143,   327,   208,   209,   210,
     211,   300,   125,   126,   127,   128,   270,    56,   262,   321,
     123,   265,   264,   123,    53,   306,   122,   308,   123,   122,
     238,   317,   144,   145,   122,    61,    62,    63,    64,    65,
     150,   151,    66,    67,    68,   220,    57,    69,   324,   164,
      97,   165,    98,   181,   307,   182,   164,   118,   261,   105,
     118,   197,   104,   322,   239,   118,   270,   257,   271,   164,
     181,   342,   343,   331,   323,   166,   167,   204,   205,   201,
     202,   203,   206,   207,   212,   213,   102,   103,   111,   238,
     114,   152,   129,   153,   155,   154,   156,   173,   178,   344,
     345,   188,   179,   185,   197,   325,   350,   186,   195,   313,
     314,   191,   239,   320,   194,   160,   244,   247,   248,   356,
     341,   360,   252,   272,   253,   254,   298,   266,   273,   274,
     299,   275,   276,   301,   278,   351,   352,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   279,   303,
     315,   302,   338,   304,   305,    76,   309,   134,   135,   326,
     312,   332,   333,    23,   334,   335,    76,   340,    76,   346,
     339,   239,   130,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   349,   353,   354,
     110,   355,    55,   359,    58,    59,    38,   330,    20,   159,
      21,   250,   133,   311,   160,   136,  -186,   137,    60,   283,
     256,  -186,   357,   214,   138,   158,   215,   217,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   281,    61,    62,    63,    64,    65,     0,   216,    66,
      67,    68,     0,     0,    69,    58,    59,     0,     0,    70,
       0,    71,   218,     0,    72,    73,    74,    75,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,    61,    62,    63,    64,   116,    58,    59,
      66,    67,    68,     0,     0,    69,     0,     0,     0,     0,
     117,   267,    60,     0,     0,    72,    73,    74,    75,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    61,    62,    63,    64,
     116,     0,     0,    66,    67,    68,     0,     0,    69,     0,
       0,     0,     0,   117,     0,     0,     0,     0,    72,    73,
      74,    75,    58,    59,   222,     0,   223,   224,   225,     0,
     226,     0,    23,     0,     0,     1,     0,   227,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    38,     0,    66,    67,    68,
       0,     0,    69,     0,     0,    71,     0,     0,   228,     0,
       0,     0,    72,    73,    74,    75,    58,    59,   222,     0,
     223,   224,   225,     0,   226,     0,     0,     0,     0,     1,
       0,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,     1,
       0,    66,    67,    68,     0,     0,    69,     0,     0,     0,
       0,     0,   282,    58,    59,     0,    72,    73,    74,    75,
       0,     0,     0,     0,    61,    62,    63,    64,    65,     0,
       0,    66,    67,    68,     0,     0,    69,     0,   316,    58,
      59,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,    61,    62,    63,    64,    65,     0,     0,    66,    67,
      68,     0,     0,    69,   196,    58,    59,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    61,    62,    63,
      64,    65,     0,     0,    66,    67,    68,     0,     0,    69,
       0,   280,    58,    59,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    61,    62,    63,    64,    65,     0,     0,
      66,    67,    68,     0,     0,    69,     0,   336,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,     0,
      61,    62,    63,    64,    65,     0,     0,    66,    67,    68,
       0,     0,    69,     0,     0,     0,    23,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,    23,     0,    38,
       0,    39,     0,     0,     0,     0,    40,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,    23,     0,     0,     0,     0,
      38,     0,     0,     0,   108,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,    23,     0,     0,     0,     0,   329,     0,
       0,     0,   327,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
      23,     0,     0,     0,     0,     0,    38,     0,     0,   159,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     0,    23,     0,    47,    48,     0,
       0,     0,     0,    38,    56,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    38,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38
};

static const yytype_int16 yycheck[] =
{
      14,   108,    16,    69,    70,    71,    98,   117,    37,   130,
      70,    40,   160,   160,   103,   278,    24,    25,    17,    18,
      46,    46,     8,    73,    26,    37,    38,    73,   162,    73,
      80,   165,    77,    71,    80,    21,    80,    38,   172,    53,
      73,    70,     0,    88,    89,    78,    72,    71,    71,   183,
      76,   117,   159,    77,    37,    38,    71,   117,   165,    42,
      75,    71,   196,   129,    72,    79,    74,    73,    80,    98,
      76,   137,   138,    81,   337,   182,   183,    79,    73,    80,
      71,    76,   230,   230,   194,    99,    74,   176,   117,   114,
     224,    90,    91,    71,   160,    37,    38,    75,    58,    59,
      42,   130,    71,    45,    84,    85,    75,   146,   147,   148,
     149,   245,    72,    73,    74,    75,    73,    72,   186,    76,
     186,   189,   188,   189,    74,   259,   186,   261,   194,   189,
     278,   278,    22,    23,   194,    62,    63,    64,    65,    66,
      15,    16,    69,    70,    71,   159,    71,    74,   296,    73,
      76,    75,    78,    73,   261,    75,    73,   186,    75,    71,
     189,   227,    76,   284,   230,   194,    73,   181,    75,    73,
      73,    75,    75,   307,   295,    37,    38,   142,   143,   139,
     140,   141,   144,   145,   150,   151,    79,    79,    71,   337,
      74,    92,    74,    93,    19,    94,    20,    38,    76,   333,
     334,    74,    76,    75,   270,   297,   340,    83,    71,   275,
     276,    82,   278,   279,    79,    79,    71,    71,    71,   353,
     327,   355,    71,    82,    76,    76,    76,    75,    75,    73,
     244,    74,    74,   247,    74,   342,   343,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    74,    76,
      28,    74,   318,    74,    76,   284,    75,    24,    25,    76,
     274,    75,    75,    38,    75,    74,   295,    75,   297,   335,
      76,   337,    73,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    76,    27,    75,
     304,    75,    37,    76,    24,    25,    71,   304,     6,    74,
       6,   168,    79,   270,    79,    72,    73,    74,    38,   230,
     176,    78,   353,   152,    81,   329,   153,   155,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,   227,    62,    63,    64,    65,    66,    -1,   154,    69,
      70,    71,    -1,    -1,    74,    24,    25,    -1,    -1,    79,
      -1,    81,   156,    -1,    84,    85,    86,    87,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    24,    25,
      69,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    38,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    24,    25,    26,    -1,    28,    29,    30,    -1,
      32,    -1,    38,    -1,    -1,    37,    -1,    39,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    71,    -1,    69,    70,    71,
      -1,    -1,    74,    -1,    -1,    81,    -1,    -1,    80,    -1,
      -1,    -1,    84,    85,    86,    87,    24,    25,    26,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    37,
      -1,    69,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    24,    25,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    69,    70,    71,    -1,    -1,    74,    -1,    76,    24,
      25,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      -1,    62,    63,    64,    65,    66,    -1,    -1,    69,    70,
      71,    -1,    -1,    74,    75,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    24,    25,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    69,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    78,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    71,    72,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    45,   104,   105,   106,   107,   108,
     109,   118,   129,    71,   110,    71,    71,    71,    96,     0,
     106,   107,   108,    38,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    71,    73,
      78,    98,    99,   100,   101,   102,    74,    40,    41,    98,
      46,    72,    76,    74,    99,   100,    72,    71,    24,    25,
      38,    62,    63,    64,    65,    66,    69,    70,    71,    74,
      79,    81,    84,    85,    86,    87,    99,   111,   112,   114,
     115,   130,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    76,    78,    71,
      75,   125,    79,    79,    76,    71,    71,    77,    75,    97,
      98,    71,   146,   146,    74,   157,    66,    79,    99,   113,
     116,   117,   130,   157,   157,   146,   146,   146,   146,    74,
      73,    76,    98,   115,    24,    25,    72,    74,    81,    77,
      88,    89,    84,    85,    22,    23,    17,    18,    90,    91,
      15,    16,    92,    93,    94,    19,    20,   111,    98,    74,
      79,    98,   103,   126,    73,    75,    37,    38,   119,   120,
     121,   122,   123,    38,   123,   124,   127,   128,    76,    76,
     103,    73,    75,    75,   125,    75,    83,   113,    74,    73,
      80,    82,   157,   112,    79,    71,    75,   157,   158,   159,
     157,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   149,   150,   150,   151,   152,   153,   154,   155,    76,
      98,   103,    26,    28,    29,    30,    32,    39,    80,   109,
     131,   132,   133,   134,   135,   137,   138,   142,   145,   157,
     160,   161,   163,   126,    71,   103,   126,    71,    71,    80,
     120,   126,    71,    76,    76,    80,   128,    98,   103,   103,
     126,    75,   116,    80,   157,   116,    75,    80,   113,   126,
      73,    75,    82,    75,    73,    74,    74,   126,    74,    74,
      76,   159,    80,   132,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   162,    73,    78,    76,    98,
     126,    98,    74,    76,    74,    76,   126,   103,   126,    75,
      80,   158,    98,   157,   157,    28,    76,   109,   139,   163,
     157,    76,   112,   112,   145,   111,    76,    75,   125,    71,
      97,   126,    75,    75,    75,    74,    76,   140,   157,    76,
      75,   103,    75,    75,   126,   126,   157,   141,   163,    76,
     126,   103,   103,    27,    75,    75,   126,   135,   136,    76,
     126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   105,   105,   106,
     106,   106,   107,   107,   108,   108,   108,   109,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   116,   116,   116,   116,
     116,   117,   118,   118,   118,   119,   119,   120,   120,   121,
     122,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   138,   138,
     138,   139,   139,   139,   140,   140,   141,   142,   142,   143,
     143,   143,   143,   144,   144,   144,   144,   144,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   148,   148,
     148,   149,   149,   149,   150,   150,   150,   150,   150,   151,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   159,   159,   160,   160,   161,   161,
     161,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     4,
       5,     1,     3,     5,     2,     1,     1,     1,     2,     3,
       5,     5,     1,     2,     1,     1,     1,     4,     5,     6,
       1,     3,     1,     3,     1,     4,     1,     3,     2,     5,
       4,     1,     3,     1,     2,     3,     1,     4,     1,     1,
       3,     3,     7,     7,     4,     1,     2,     1,     1,     4,
       2,     4,     5,     5,     6,     5,     6,     2,     4,     3,
       2,     1,     2,     2,     2,     5,     6,     6,     7,     4,
       5,     5,     6,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     5,     7,     1,     1,     5,     5,     7,
       7,     2,     1,     1,     2,     1,     1,     2,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     4,     4,     3,     4,     1,     2,     2,
       2,     2,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 139 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1702 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 142 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1710 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 154 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1716 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 155 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1722 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 6:
#line 159 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1730 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 7:
#line 162 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1738 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 165 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1744 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 166 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1750 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 170 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1758 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 173 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1766 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 176 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1774 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 179 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1782 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 182 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1790 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 185 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1798 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 188 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT32;
  }
#line 1806 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 191 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1814 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 194 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1822 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 197 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1830 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 200 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1838 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 203 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_STRING;
  }
#line 1846 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 206 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1854 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 212 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_DEFINED, $1.val);
  }
#line 1862 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 215 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_FUNC, $1);
  }
#line 1870 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 25:
#line 221 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("Type:%s\n", (yyvsp[0].identifier).val);
  }
#line 1878 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 26:
#line 224 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("Module:%s, Type:%s\n", (yyvsp[-2].identifier).val, (yyvsp[0].identifier).val);
  }
#line 1886 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 27:
#line 230 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1894 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 28:
#line 233 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1902 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 29:
#line 236 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1910 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 30:
#line 239 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1918 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 47:
#line 284 "yacc/koala.y" /* yacc.c:1661  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1926 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 48:
#line 287 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1934 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 49:
#line 290 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1942 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 50:
#line 296 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1952 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 51:
#line 301 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1962 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 54:
#line 314 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1968 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 55:
#line 315 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1974 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 56:
#line 316 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1980 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 66:
#line 338 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1986 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 67:
#line 339 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1992 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 68:
#line 340 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1998 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 69:
#line 341 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2004 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 89:
#line 393 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 2012 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 106:
#line 433 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----statement\n");
  }
#line 2020 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 107:
#line 439 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2029 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 129:
#line 519 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2037 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 130:
#line 522 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2045 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 131:
#line 525 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2053 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 132:
#line 528 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2061 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 133:
#line 568 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2069 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 134:
#line 571 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2077 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 135:
#line 574 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2085 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 136:
#line 577 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2093 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 137:
#line 580 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2101 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 138:
#line 583 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2109 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 139:
#line 589 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2117 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 140:
#line 592 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2130 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 141:
#line 600 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2143 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 142:
#line 608 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2151 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 143:
#line 611 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2159 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 614 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2167 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 617 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2175 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 620 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2183 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 626 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2191 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 629 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2204 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 637 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2217 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 645 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2225 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 648 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2233 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 651 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2241 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 654 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2249 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 660 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2257 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 155:
#line 663 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2265 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 156:
#line 666 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2273 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 157:
#line 669 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2281 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 158:
#line 675 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2289 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 159:
#line 678 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2297 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 160:
#line 681 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2305 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 161:
#line 687 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2313 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 162:
#line 690 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2321 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 163:
#line 693 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2329 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 164:
#line 699 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2337 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 165:
#line 702 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2345 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 166:
#line 705 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2353 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 167:
#line 708 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2361 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 168:
#line 711 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2369 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 169:
#line 717 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2377 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 170:
#line 720 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2385 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 171:
#line 723 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2393 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 729 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2401 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 732 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2409 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 738 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2417 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 741 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2425 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 747 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2433 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 750 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2441 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 756 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2449 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 759 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2457 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 180:
#line 765 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2465 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 181:
#line 768 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2473 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 182:
#line 774 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2481 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 183:
#line 780 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2488 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 201:
#line 817 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----basic_expression\n");
    show_expr((yyvsp[0].expression));
    putchar('\n');
  }
#line 2498 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 202:
#line 822 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2506 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2510 "koala_yacc.c" /* yacc.c:1661  */
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
#line 829 "yacc/koala.y" /* yacc.c:1906  */


int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

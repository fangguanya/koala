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

extern int dim_count;


#line 80 "koala_yacc.c" /* yacc.c:339  */

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

union YYSTYPE
{
#line 16 "yacc/koala.y" /* yacc.c:355  */

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

#line 208 "koala_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
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
#define YYLAST   1156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  391

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
      76,    75,    80,    85,    77,    86,    74,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    82,
      91,    81,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    95,    84,    87,     2,     2,     2,
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
       0,   151,   151,   154,   160,   161,   165,   168,   171,   172,
     173,   174,   178,   181,   184,   187,   190,   193,   196,   200,
     203,   206,   209,   212,   216,   222,   225,   231,   234,   235,
     239,   243,   244,   248,   249,   253,   258,   259,   260,   261,
     262,   263,   264,   268,   272,   273,   277,   278,   279,   283,
     284,   288,   289,   290,   291,   299,   302,   308,   311,   314,
     320,   325,   333,   334,   338,   339,   343,   344,   350,   351,
     355,   356,   357,   361,   362,   366,   367,   371,   372,   376,
     380,   381,   382,   383,   384,   385,   386,   387,   391,   392,
     393,   394,   398,   399,   403,   404,   408,   409,   415,   416,
     417,   418,   422,   423,   424,   425,   430,   433,   438,   439,
     440,   444,   445,   449,   452,   456,   460,   461,   462,   463,
     467,   470,   476,   477,   481,   482,   483,   487,   491,   492,
     493,   497,   498,   499,   503,   504,   508,   512,   513,   514,
     515,   516,   522,   523,   529,   530,   534,   537,   539,   542,
     543,   546,   547,   548,   552,   556,   559,   562,   565,   568,
     574,   575,   579,   580,   581,   582,   583,   589,   590,   594,
     595,   596,   600,   603,   611,   619,   622,   625,   628,   634,
     637,   640,   643,   649,   652,   655,   661,   664,   667,   673,
     676,   679,   682,   685,   691,   694,   697,   703,   706,   712,
     715,   721,   724,   730,   733,   739,   742,   748,   754,   755,
     759,   760,   764,   765,   766,   767,   768,   769,   770,   771,
     772,   773,   774
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
  "FLOAT", "STRING_LITERAL", "ID", "'.'", "')'", "'('", "','", "'['",
  "']'", "'*'", "'='", "';'", "'{'", "'}'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept",
  "ModulePathName", "TypeNameList", "TypeName", "PrimitiveType",
  "ModuleType", "FunctionType", "ReturnTypeList", "DimExprs", "DimExpr",
  "Program", "PackageDeclaration", "ImportDeclarations",
  "ImportDeclaration", "Declarations", "Declaration", "ConstDeclaration",
  "VariableDeclaration", "VariableList", "VariableInitializerList",
  "VariableInitializer", "ArrayInitializerList", "SemiOrEmpty",
  "TypeDeclaration", "MemberDeclarations", "MemberDeclaration",
  "FieldDeclaration", "MethodDeclaration", "MethodDeclarationHeader1",
  "MethodDeclarationHeader2", "ParameterList",
  "InterfaceFunctionDeclarations", "InterfaceFunctionDeclaration",
  "FunctionDeclaration", "AnonymousFunctionDeclaration", "CodeBlock",
  "CodeBlockBody", "VariableDeclarations", "Statements", "Statement",
  "ExpressionStatement", "SelectionStatement", "IfStatement",
  "SwitchStatement", "IterationStatemnet", "ForInit", "ForExpr", "ForIncr",
  "JumpStatement", "ExpressionList", "PrimaryExpression", "Atom",
  "Literal", "TrailerList", "Trailer", "FunctionDeclarationList",
  "PostfixExpression", "UnaryExpression", "MultiplicativeExpression",
  "AdditiveExpression", "ShiftExpression", "RelationalExpression",
  "EqualityExpression", "AndExpression", "ExclusiveOrExpression",
  "InclusiveOrExpression", "LogicalAndExpression", "LogicalOrExpression",
  "Expression", "AssignmentExpression", "PostfixExpressionList",
  "CompoundOperator", YY_NULLPTR
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
     325,   326,   327,   328,    46,    41,    40,    44,    91,    93,
      42,    61,    59,   123,   125,    43,    45,   126,    33,    47,
      37,    60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -270

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-270)))

#define YYTABLE_NINF -211

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     126,   -34,   -28,    -6,   -34,    -3,    -3,   105,    82,    82,
    -270,   100,  -270,  -270,  -270,  -270,  -270,  -270,   807,    48,
    1058,   839,  -270,    35,    63,  -270,    82,   100,  -270,   100,
    -270,    58,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,   137,   104,   143,   552,   103,
    -270,  -270,  -270,    77,   120,   139,   127,   552,   146,   167,
    -270,  -270,   171,    49,  -270,   100,   955,  -270,  -270,  -270,
     184,  -270,   732,   732,   215,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,   732,   732,   552,   732,   732,   732,   732,
     221,   271,  -270,     7,  -270,  -270,  -270,   101,  -270,   224,
    -270,   -40,   168,   246,    -1,   263,   205,   125,   188,   242,
     279,  -270,   552,  -270,  1083,   772,   138,    -7,   -20,  -270,
    -270,    65,   552,  -270,   218,   218,   901,   153,  -270,  -270,
    -270,  -270,   158,   226,   227,    46,  -270,  -270,  -270,  -270,
     140,   220,  -270,   552,  -270,   232,   597,   732,   101,  -270,
    -270,  -270,   732,   732,   732,   732,   732,   732,   732,   732,
     732,   732,   732,   732,   732,   732,   732,   732,   732,   732,
      69,  -270,  1083,   322,  -270,   225,  -270,   772,   236,   240,
     241,   928,    76,  -270,  -270,  -270,   225,   244,   243,   238,
     254,    -5,  -270,   552,  -270,    71,  -270,  -270,  -270,   901,
    1083,   772,   157,  -270,  -270,  -270,   262,   552,  -270,  -270,
     235,   160,  -270,   260,  -270,  -270,  -270,  -270,   -40,   -40,
     168,   168,   246,   246,   246,   246,    -1,    -1,   263,   205,
     125,   188,   242,  -270,   161,   265,   266,   225,   267,   269,
     277,   281,   282,   642,  -270,  -270,  -270,   283,   387,   452,
    -270,   284,  -270,  -270,  -270,  -270,  -270,    50,  -270,  -270,
       6,  -270,   225,  -270,  1083,  1083,   289,   166,   286,   218,
    -270,  -270,   293,   981,  -270,  -270,   218,  -270,  -270,  -270,
    -270,  -270,   225,  -270,   772,  -270,    56,   331,  -270,   732,
    -270,  -270,   732,   732,   343,   507,   732,  -270,  -270,  -270,
    -270,    84,  -270,  -270,   452,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,   732,   871,
     732,  -270,  -270,   303,   185,   901,   187,  -270,  -270,  1007,
    1033,   190,  -270,  -270,   225,  -270,  -270,  -270,   -19,  -270,
     316,   317,   320,  -270,  -270,   315,   687,   324,  -270,  -270,
     224,   325,  -270,   901,   199,  -270,   901,   207,   901,  -270,
    -270,  -270,   225,   225,   732,  -270,  -270,   732,   319,   225,
    -270,   901,  -270,   901,  -270,   376,  -270,   329,  -270,   339,
    -270,  -270,  -270,  -270,    -2,   336,   225,  -270,  -270,  -270,
    -270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      44,    42,    49,    51,    52,    53,    54,    60,     0,     0,
       0,     0,     2,    68,    68,     1,    37,    38,    45,    39,
      50,     0,    16,    17,    18,    19,    12,    13,    14,    15,
      20,    21,    22,    23,    24,     0,    26,     0,     0,     0,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
      69,    43,     0,     0,    46,    36,     0,     9,    10,    11,
       0,    61,     0,     0,     0,   148,   157,   158,   159,   154,
     155,   156,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,    62,   151,   169,   144,   147,   172,
     179,   183,   186,   189,   194,   197,   199,   201,   203,   205,
     207,    64,     0,    57,     0,     0,     0,     0,     0,    72,
      66,     0,     0,     3,    68,    68,    28,     0,     4,    25,
     173,   174,     0,     0,     0,     0,   175,   176,   177,   178,
       0,   152,    34,     0,    58,     0,     0,     0,   145,   160,
     170,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,    31,     0,    99,     0,     0,     0,
       0,     0,     0,    73,    75,    76,     0,     0,     0,     0,
       0,     0,    94,     0,    55,     0,    47,    48,    27,    30,
       0,     0,     0,   149,    35,    65,     0,     0,    63,   162,
     165,     0,   142,     0,   161,   180,   181,   182,   184,   185,
     187,   188,   193,   192,   190,   191,   195,   196,   198,   200,
     202,   204,   206,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   111,   119,     0,   109,   110,
     113,     0,   116,   122,   123,   117,   118,   172,   120,   121,
       0,    98,     0,   101,     0,     0,     0,     0,     0,    68,
      74,    79,     0,     0,    96,    97,    68,    95,    67,    56,
      29,     5,     0,   103,     0,   150,     0,     0,   164,     0,
     163,    32,     0,     0,     0,     0,     0,   137,   138,   139,
     140,     0,   106,   112,   108,   114,   115,   222,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,     0,     0,
       0,   100,    93,     0,     0,    85,     0,    78,    70,     0,
      26,     0,    71,   102,     0,   105,   153,   167,     0,   143,
       0,     0,     0,   133,   132,     0,     0,     0,   141,   209,
     211,   208,    77,    81,     0,    84,    87,     0,    91,   104,
     166,   168,     0,     0,     0,   131,   135,     0,     0,     0,
      80,    83,    86,    89,    90,   124,   128,     0,   136,     0,
     134,   127,    82,    88,     0,     0,     0,   125,   126,   129,
     130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,   414,  -167,   -14,   -18,   379,   383,   -83,  -270,   338,
    -270,  -270,   422,    16,    21,    17,  -270,  -160,   427,   321,
     -36,   -71,   -13,  -270,  -270,   250,  -270,  -270,   -92,  -270,
     -52,  -270,   245,  -269,  -270,   -82,  -270,  -270,   186,  -226,
    -254,  -270,    51,  -270,  -270,  -270,  -270,  -270,  -270,  -228,
    -270,  -270,   310,  -270,   308,  -270,  -163,   -51,   130,   136,
      64,   132,   292,   295,   297,   294,   298,  -270,   -75,  -270,
    -270,  -270
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   127,   174,    90,    51,    52,   175,    91,    92,
       7,     8,     9,    10,    11,    12,    13,    14,    18,    93,
     120,   121,    61,    15,   182,   183,   184,   185,   186,   190,
     326,   191,   192,    16,    95,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   346,   367,   379,   256,   211,
      96,    97,    98,   148,   149,   338,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   259,
     260,   318
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   116,    50,    50,    49,   234,    56,    58,   133,   134,
     257,    64,    94,   245,   135,   301,   159,   160,   337,   187,
       2,   130,   131,   305,   235,    28,   189,    67,    30,    27,
      29,   179,   180,   176,   187,   136,   137,   138,   139,    17,
     152,   345,    28,   198,    30,    19,    30,    65,    50,   153,
     154,   195,   128,   188,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   360,   181,    20,   188,   361,
      22,   212,   213,    50,   150,   151,    94,   141,   305,   276,
     202,   173,    30,   319,   143,   257,   257,   320,   303,   144,
     161,   162,   351,   261,   262,   263,    50,    50,   258,   189,
     171,   215,   216,   217,   271,    25,   331,   208,    50,    59,
      62,   196,   197,   378,   179,   180,   280,    60,   282,   283,
       1,     2,   123,   193,    53,     3,     4,  -210,     6,   125,
     205,  -210,   257,   193,    66,   344,   286,    63,     1,     2,
     336,   257,   193,     3,     4,    60,   143,   194,   193,   181,
     114,   233,   115,   279,    50,   294,   350,   278,   128,    50,
     269,   289,   357,    50,     1,     2,   348,   268,   212,     3,
       4,     5,     6,   258,   258,   145,    31,   146,    70,   147,
     321,    50,    50,    50,   112,   113,   281,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     333,   334,   335,   117,   257,    76,    77,    78,    79,   119,
      46,    80,    81,   177,   339,   178,    71,   340,   341,   166,
     258,   347,   118,   222,   223,   224,   225,   122,   199,   258,
     200,   114,   284,   201,   178,   288,   291,   289,   200,   114,
     123,   325,   355,   349,   124,   212,    50,    50,   150,   151,
     322,   323,   359,   155,   156,    50,   328,   129,   114,   128,
     353,   168,   356,   332,   178,   358,    50,   200,   157,   158,
     370,   368,   354,   372,   371,   374,   178,   354,   163,   164,
     375,   376,   373,   167,   200,   218,   219,   381,   382,   377,
     383,   132,   258,   220,   221,   226,   227,   140,   165,   169,
      60,   203,   387,   207,   390,   209,   204,    50,   173,   264,
      31,    50,    50,   265,   266,   128,   171,   272,   287,   273,
     274,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    50,   275,   285,    50,   290,
      50,   292,   293,   295,    46,   296,    72,    73,   235,    84,
     236,   237,   238,    50,   239,    50,   240,   241,   242,   297,
       1,    74,   243,   298,   299,   324,   306,   302,   327,   329,
       2,   342,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   352,    75,    76,    77,    78,
      79,   362,   363,    80,    81,    82,   364,   365,    83,   369,
      84,   380,   289,   384,   385,   173,   244,    86,    87,    88,
      89,    72,    73,   235,   386,   236,   237,   238,   389,   239,
      24,   240,   241,   242,    68,     1,    74,   243,    69,   142,
      26,    21,   270,   170,   304,   388,   277,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     206,    75,    76,    77,    78,    79,   214,   228,    80,    81,
      82,   229,   231,    83,   230,    84,     0,   232,     0,     0,
     173,     0,    86,    87,    88,    89,    72,    73,   235,     0,
     236,   237,   238,     0,   239,     0,   240,   241,   242,     0,
       0,    74,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    75,    76,    77,    78,
      79,     0,     0,    80,    81,    82,     0,     0,    83,     0,
      84,    72,    73,     0,     0,   173,     0,    86,    87,    88,
      89,     0,     0,     0,     0,     1,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    75,    76,    77,    78,    79,    72,    73,    80,    81,
      82,     0,     0,    83,     0,    84,     0,     0,     0,   343,
       0,    74,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    75,    76,    77,    78,
      79,    72,    73,    80,    81,    82,     0,     0,    83,     0,
      84,     0,     0,     0,     0,    85,    74,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    75,    76,    77,    78,    79,    72,    73,    80,    81,
      82,     0,   210,    83,     0,    84,     0,     0,     0,     0,
       0,    74,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    75,    76,    77,    78,
      79,    72,    73,    80,    81,    82,     0,     0,    83,     0,
      84,     0,     0,     0,   300,     0,    74,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    75,    76,    77,    78,    79,    72,    73,    80,    81,
      82,     0,     0,    83,     0,    84,     0,     0,     0,   366,
       0,    74,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    75,    76,    77,    78,
      79,     0,     0,    80,    81,    82,     0,     0,    83,     0,
      84,    31,     0,     0,     0,     0,     0,    86,    87,    88,
      89,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    31,     0,   172,     0,
       0,     0,     0,     0,     0,   173,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      46,     0,     0,     0,    47,     0,     0,     0,    48,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
      74,     0,    46,     0,     0,     0,    47,     0,     0,     0,
      57,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    75,    76,    77,    78,    79,
      31,     0,    80,    81,    82,     0,     0,    83,     0,    84,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,    31,     0,     0,
       0,     0,     0,     0,    46,     0,     0,   172,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,    31,     0,     0,     0,     0,     0,
       0,    46,     0,     0,   267,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    46,     0,
     126,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,    31,     0,     0,     0,
       0,     0,     0,     0,   330,     0,   325,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,    31,     0,     0,     0,     0,     0,     0,     0,
     330,     0,   353,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    31,     0,    54,
      55,     0,     0,     0,     0,     0,    46,    70,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      18,    53,    20,    21,    18,   172,    20,    21,    83,    84,
     173,    24,    48,   173,    85,   243,    17,    18,   287,    39,
      39,    72,    73,   249,    26,     9,   118,    45,    11,     8,
       9,    38,    39,   115,    39,    86,    87,    88,    89,    73,
      80,   295,    26,   126,    27,    73,    29,    26,    66,    89,
      90,   122,    66,    73,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    84,    73,    73,    73,   338,
      73,   146,   147,    91,    24,    25,   112,    91,   304,    84,
     132,    83,    65,    77,    77,   248,   249,    81,   248,    82,
      91,    92,   320,   175,   177,   177,   114,   115,   173,   191,
     114,   152,   153,   154,   186,     0,   273,   143,   126,    74,
      47,   124,   125,   367,    38,    39,   199,    82,   201,   201,
      38,    39,    73,    77,    76,    43,    44,    77,    46,    80,
      84,    81,   295,    77,    76,   295,   207,    74,    38,    39,
      84,   304,    77,    43,    44,    82,    77,    82,    77,    73,
      73,    82,    75,    82,   172,   237,   319,   193,   172,   177,
      84,    77,   329,   181,    38,    39,    82,   181,   243,    43,
      44,    45,    46,   248,   249,    74,    39,    76,    74,    78,
     262,   199,   200,   201,    81,    82,   200,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     282,   284,   284,    83,   367,    65,    66,    67,    68,    82,
      73,    71,    72,    75,   289,    77,    73,   292,   293,    94,
     295,   296,    83,   159,   160,   161,   162,    81,    75,   304,
      77,    73,    75,    75,    77,    75,    75,    77,    77,    73,
      73,    75,   325,   318,    73,   320,   264,   265,    24,    25,
     264,   265,   334,    85,    86,   273,   269,    73,    73,   273,
      75,    19,    75,   276,    77,    75,   284,    77,    22,    23,
     353,   346,   324,   356,    75,   358,    77,   329,    15,    16,
     362,   363,    75,    95,    77,   155,   156,   369,   371,   364,
     373,    76,   367,   157,   158,   163,   164,    76,    93,    20,
      82,    75,   384,    83,   386,    73,    79,   325,    83,    73,
      39,   329,   330,    73,    73,   329,   330,    73,    83,    76,
      82,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   353,    82,    75,   356,    79,
     358,    76,    76,    76,    73,    76,    24,    25,    26,    78,
      28,    29,    30,   371,    32,   373,    34,    35,    36,    82,
      38,    39,    40,    82,    82,    76,    82,    84,    82,    76,
      39,    28,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    82,    64,    65,    66,    67,
      68,    75,    75,    71,    72,    73,    76,    82,    76,    75,
      78,    82,    77,    27,    75,    83,    84,    85,    86,    87,
      88,    24,    25,    26,    75,    28,    29,    30,    82,    32,
       6,    34,    35,    36,    45,    38,    39,    40,    45,    91,
       8,     4,   182,   112,   248,   384,   191,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     140,    64,    65,    66,    67,    68,   148,   165,    71,    72,
      73,   166,   168,    76,   167,    78,    -1,   169,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    24,    25,    26,    -1,
      28,    29,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    24,    25,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    24,    25,    71,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    39,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    24,    25,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    -1,    -1,    83,    39,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    24,    25,    71,    72,
      73,    -1,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    39,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    24,    25,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    -1,    -1,    82,    -1,    39,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    24,    25,    71,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    39,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    39,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    39,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      39,    -1,    71,    72,    73,    -1,    -1,    76,    -1,    78,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    76,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    75,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    73,    74,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    43,    44,    45,    46,   106,   107,   108,
     109,   110,   111,   112,   113,   119,   129,    73,   114,    73,
      73,   114,    73,    97,    97,     0,   108,   110,   109,   110,
     111,    39,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    73,    77,    81,    99,
     100,   101,   102,    76,    41,    42,    99,    81,    99,    74,
      82,   118,    47,    74,   118,   110,    76,   100,   101,   102,
      74,    73,    24,    25,    39,    64,    65,    66,    67,    68,
      71,    72,    73,    76,    78,    83,    85,    86,    87,    88,
     100,   104,   105,   115,   116,   130,   146,   147,   148,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    81,    82,    73,    75,   126,    83,    83,    82,
     116,   117,    81,    73,    73,    80,    75,    98,    99,    73,
     153,   153,    76,   164,   164,   117,   153,   153,   153,   153,
      76,    99,   105,    77,    82,    74,    76,    78,   149,   150,
      24,    25,    80,    89,    90,    85,    86,    22,    23,    17,
      18,    91,    92,    15,    16,    93,    94,    95,    19,    20,
     115,    99,    76,    83,    99,   103,   131,    75,    77,    38,
      39,    73,   120,   121,   122,   123,   124,    39,    73,   124,
     125,   127,   128,    77,    82,   117,   118,   118,   103,    75,
      77,    75,   126,    75,    79,    84,   148,    83,   116,    73,
      75,   145,   164,   164,   150,   153,   153,   153,   154,   154,
     155,   155,   156,   156,   156,   156,   157,   157,   158,   159,
     160,   161,   162,    82,    98,    26,    28,    29,    30,    32,
      34,    35,    36,    40,    84,   113,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   144,   152,   164,   165,
     166,   131,   103,   131,    73,    73,    73,    76,    99,    84,
     121,   131,    73,    76,    82,    82,    84,   128,   116,    82,
     103,    99,   103,   131,    75,    75,   117,    83,    75,    77,
      79,    75,    76,    76,   131,    76,    76,    82,    82,    82,
      82,   145,    84,   113,   134,   135,    82,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   167,    77,
      81,   131,    99,    99,    76,    75,   126,    82,   118,    76,
      73,    98,   118,   131,   103,   131,    84,   129,   151,   164,
     164,   164,    28,    82,   113,   136,   141,   164,    82,   164,
     152,   145,    82,    75,   126,   103,    75,    98,    75,   131,
      84,   129,    75,    75,    76,    82,    82,   142,   164,    75,
     103,    75,   103,    75,   103,   131,   131,   164,   136,   143,
      82,   131,   103,   103,    27,    75,    75,   131,   138,    82,
     131
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   106,   106,
     106,   106,   106,   107,   108,   108,   109,   109,   109,   110,
     110,   111,   111,   111,   111,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   129,   130,   130,   130,   130,   131,   131,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   140,   140,
     140,   141,   141,   141,   142,   142,   143,   144,   144,   144,
     144,   144,   145,   145,   146,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   148,   148,   148,
     149,   149,   150,   150,   150,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   153,   153,   153,   153,   154,
     154,   154,   154,   155,   155,   155,   156,   156,   156,   157,
     157,   157,   157,   157,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   165,   165,
     166,   166,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     4,     3,     5,
       4,     1,     3,     1,     2,     3,     3,     2,     2,     2,
       1,     1,     1,     3,     1,     2,     3,     5,     5,     1,
       2,     1,     1,     1,     1,     5,     6,     4,     5,     6,
       1,     3,     1,     3,     1,     3,     1,     3,     0,     1,
       7,     7,     4,     1,     2,     1,     1,     4,     3,     2,
       5,     4,     6,     5,     4,     3,     5,     4,     6,     5,
       5,     4,     2,     4,     1,     2,     2,     2,     6,     5,
       7,     6,     5,     4,     6,     5,     3,     2,     2,     1,
       1,     1,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     7,     7,     5,     5,     7,
       7,     2,     1,     1,     2,     1,     1,     2,     2,     2,
       2,     3,     1,     3,     1,     2,     1,     1,     1,     3,
       4,     1,     2,     5,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     2,     5,     1,     2,     1,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 151 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1769 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 154 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1777 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 160 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1783 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 161 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1789 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 6:
#line 165 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1797 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 7:
#line 168 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1805 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 171 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1811 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 172 "yacc/koala.y" /* yacc.c:1661  */
    {printf(">>>>>>PrimitiveType Array:%d\n", dim_count);}
#line 1817 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 173 "yacc/koala.y" /* yacc.c:1661  */
    {printf(">>>>>>ModuleType Array:%d\n", dim_count);}
#line 1823 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 174 "yacc/koala.y" /* yacc.c:1661  */
    {printf(">>>>>>FunctionType Array:%d\n", dim_count);}
#line 1829 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 178 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1837 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 181 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1845 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 184 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1853 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 187 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1861 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 190 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1869 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 193 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1877 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 196 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("int32\n");
    (yyval.type) = TYPE_INT32;
  }
#line 1886 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 200 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1894 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 203 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1902 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 206 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1910 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 209 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1918 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 212 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("string\n");
    (yyval.type) = TYPE_STRING;
  }
#line 1927 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 216 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1935 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 25:
#line 222 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("Module:%s, TypeName:%s\n", (yyvsp[-2].identifier).val, (yyvsp[0].identifier).val);
  }
#line 1943 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 26:
#line 225 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("TypeName:%s\n", (yyvsp[0].identifier).val);
  }
#line 1951 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 27:
#line 231 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1959 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 28:
#line 234 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1965 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 29:
#line 235 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("FunctionType 3\n");
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1974 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 30:
#line 239 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1980 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 55:
#line 299 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1988 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 56:
#line 302 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1996 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 57:
#line 308 "yacc/koala.y" /* yacc.c:1661  */
    {
    //new_var_decl($2, $3, null);
  }
#line 2004 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 58:
#line 311 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2012 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 59:
#line 314 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2020 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 60:
#line 320 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("ID: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2030 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 61:
#line 325 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("ID: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2040 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 106:
#line 430 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 2048 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 113:
#line 449 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----Statement\n");
  }
#line 2056 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 115:
#line 456 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----ExpressionStatement\n");
  }
#line 2065 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 120:
#line 467 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----Expression\n");
  }
#line 2073 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 121:
#line 470 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----AssignmentExpression\n");
  }
#line 2081 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 141:
#line 516 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("-----RETURN\n");
  }
#line 2089 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 529 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2095 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 530 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2101 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 534 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2109 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 537 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2116 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 539 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2124 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 542 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2130 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 543 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("complex_primary\n");
  }
#line 2138 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 546 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2144 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 547 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2150 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 548 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2156 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 552 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("INTEGER: %lld\n", (yyvsp[0].ival));
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2165 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 155:
#line 556 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2173 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 156:
#line 559 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2181 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 157:
#line 562 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2189 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 158:
#line 565 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2197 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 159:
#line 568 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2205 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 166:
#line 583 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("interface implementation\n");
  }
#line 2213 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 600 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2221 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 603 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2234 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 611 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2247 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 619 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2255 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 622 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2263 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 625 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2271 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 628 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2279 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 634 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2287 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 180:
#line 637 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2295 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 181:
#line 640 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2303 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 182:
#line 643 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2311 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 183:
#line 649 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2319 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 184:
#line 652 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2327 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 185:
#line 655 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2335 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 186:
#line 661 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2343 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 187:
#line 664 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2351 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 188:
#line 667 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2359 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 189:
#line 673 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2367 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 190:
#line 676 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2375 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 191:
#line 679 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2383 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 192:
#line 682 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2391 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 193:
#line 685 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2399 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 194:
#line 691 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2407 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 195:
#line 694 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2415 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 196:
#line 697 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2423 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 197:
#line 703 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2431 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 198:
#line 706 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2439 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 199:
#line 712 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2447 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 200:
#line 715 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2455 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 201:
#line 721 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2463 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 202:
#line 724 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2471 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 203:
#line 730 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2479 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 204:
#line 733 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2487 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 205:
#line 739 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2495 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 206:
#line 742 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2503 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2507 "koala_yacc.c" /* yacc.c:1661  */
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


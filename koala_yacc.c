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
    FUNC_HEADER = 303,
    INT8 = 304,
    INT16 = 305,
    INT32 = 306,
    INT64 = 307,
    UINT8 = 308,
    UINT16 = 309,
    UINT32 = 310,
    UINT64 = 311,
    FLOAT32 = 312,
    FLOAT64 = 313,
    BOOL = 314,
    STRING = 315,
    ROOT_OBJECT = 316,
    DIMS = 317,
    SELF = 318,
    TOKEN_NIL = 319,
    TOKEN_TRUE = 320,
    TOKEN_FALSE = 321,
    INTEGER = 322,
    HEX = 323,
    OCT = 324,
    FLOAT = 325,
    STRING_LITERAL = 326,
    IDENTIFIER = 327
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
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

#line 207 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1139

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

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
      75,    74,    77,    84,    76,    85,    73,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    78,
      90,    79,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    94,    83,    86,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   150,   150,   153,   165,   166,   170,   173,   176,   177,
     178,   179,   183,   186,   189,   192,   195,   198,   201,   205,
     208,   211,   214,   217,   221,   227,   230,   236,   239,   240,
     244,   248,   251,   256,   257,   258,   259,   260,   261,   262,
     266,   270,   271,   275,   276,   277,   281,   282,   286,   287,
     288,   296,   299,   302,   308,   313,   338,   339,   343,   344,
     348,   352,   353,   356,   365,   366,   370,   371,   372,   376,
     377,   381,   382,   386,   387,   391,   395,   396,   397,   398,
     399,   400,   401,   402,   406,   407,   408,   409,   413,   414,
     418,   421,   425,   426,   430,   431,   437,   438,   439,   440,
     444,   445,   446,   447,   452,   453,   457,   458,   464,   468,
     469,   470,   474,   475,   479,   480,   484,   485,   489,   493,
     494,   495,   499,   500,   501,   505,   506,   510,   514,   515,
     544,   547,   550,   553,   556,   560,   563,   564,   569,   570,
     571,   610,   614,   617,   620,   623,   626,   632,   635,   643,
     651,   654,   657,   660,   663,   669,   672,   680,   688,   691,
     694,   697,   703,   706,   709,   712,   718,   721,   724,   730,
     733,   736,   742,   745,   748,   751,   754,   760,   763,   766,
     772,   775,   781,   784,   790,   793,   799,   802,   808,   811,
     817,   823,   829,   830,   834,   835,   841,   842,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   860,
     865
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELLIPSIS", "TYPELESS_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "RIGHT_ASSIGN", "LEFT_ASSIGN",
  "EQ", "NE", "GE", "LE", "AND", "OR", "NOT", "SHIFT_LEFT", "SHIFT_RIGHT",
  "INC", "DEC", "IF", "ELSE", "WHILE", "DO", "FOR", "IN", "SWITCH", "CASE",
  "BREAK", "CONTINUE", "DEFAULT", "VAR", "FUNC", "RETURN", "STRUCT",
  "INTERFACE", "TYPE", "CONST", "PACKAGE", "IMPORT", "AS", "NEW",
  "FUNC_HEADER", "INT8", "INT16", "INT32", "INT64", "UINT8", "UINT16",
  "UINT32", "UINT64", "FLOAT32", "FLOAT64", "BOOL", "STRING",
  "ROOT_OBJECT", "DIMS", "SELF", "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE",
  "INTEGER", "HEX", "OCT", "FLOAT", "STRING_LITERAL", "IDENTIFIER", "'.'",
  "')'", "'('", "','", "'*'", "';'", "'='", "'['", "']'", "'{'", "'}'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'",
  "'|'", "$accept", "ModuleFilePathName", "TypeList", "Type",
  "PrimitiveType", "ModuleType", "FunctionType", "ReturnTypeList",
  "Program", "PackageDeclaration", "ImportDeclarations",
  "ImportDeclaration", "Declarations", "Declaration",
  "VariableDeclaration", "VariableList", "ArrayInitializerList",
  "DimExprs", "DimExpr", "ArrayInitializer", "arrayinit", "SemiOrEmpty",
  "TypeDeclaration", "MemberDeclarations", "MemberDeclaration",
  "FieldDeclaration", "MethodDeclaration", "MethodDeclarationHeader1",
  "MethodDeclarationHeader2", "ParameterList", "CodeBlock",
  "InterfaceFunctionDeclarations", "InterfaceFunctionDeclaration",
  "FunctionDeclaration", "AnonymousFunctionDeclaration",
  "local_variable_declaration_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "if_statement", "else_statemnet",
  "switch_statement", "iteration_statemnet", "for_init", "for_expr",
  "for_incr", "jump_statement", "primary_expression", "complex_primary",
  "ArrayExpression", "constant", "postfix_expression", "unary_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression", "basic_expression",
  "expression", "expression_list", "postfix_expression_list",
  "assignment_expression", "compound_assignment_operator",
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
     325,   326,   327,    46,    41,    40,    44,    42,    59,    61,
      91,    93,   123,   125,    43,    45,   126,    33,    47,    37,
      60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -273

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-273)))

#define YYTABLE_NINF -195

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      85,   -42,     7,    25,    31,    31,   106,    47,    47,  -273,
      72,  -273,  -273,  -273,  -273,  -273,   856,    51,  1017,  -273,
     -31,    -6,  -273,    47,    72,  -273,    72,  -273,    80,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  1067,    62,    86,   531,   -57,  -273,  -273,  -273,
      75,    68,    79,    87,   110,  -273,  -273,   136,    48,  -273,
      72,   914,  -273,  -273,  -273,   139,  -273,   715,   715,   113,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,   715,   715,
     531,   715,   715,   715,   715,   142,    78,   824,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,     8,  -273,   -28,   -19,
      34,     0,   188,   123,   130,   131,   205,   206,  -273,  -273,
     531,  1042,   754,    88,   -10,    -9,  -273,  -273,   149,   149,
     286,    94,  -273,  -273,  -273,  -273,    97,   154,   148,    18,
    -273,  -273,  -273,  -273,    67,   531,  -273,   155,  -273,  -273,
    -273,   158,   583,   715,   715,   715,   715,   715,   715,   715,
     715,   715,   715,   715,   715,   715,   715,   715,   715,   715,
     715,   715,    99,  -273,  1042,   327,  -273,   156,  -273,   754,
     159,   167,   168,   887,   -14,  -273,  -273,  -273,   156,   171,
     170,   169,   173,     3,  -273,  -273,  -273,  -273,   286,  1042,
     754,   104,  -273,  -273,  -273,   172,  -273,   435,  -273,   156,
    -273,  -273,   105,   176,  -273,  -273,  -273,   -28,   -28,   -19,
     -19,    34,    34,    34,    34,     0,     0,   188,   123,   130,
     131,   205,  -273,   111,   177,   178,   156,   179,   183,   627,
    -273,  -273,   391,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     295,  -273,    60,  -273,   181,  -273,   156,  -273,  1042,  1042,
     187,   117,   186,   149,  -273,  -273,   191,   940,  -273,  -273,
     149,  -273,  -273,  -273,   156,  -273,   754,  -273,  -273,    29,
    -273,  -273,   715,  -273,  -273,   715,   715,   220,   487,   715,
    -273,   116,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,   531,   789,   531,  -273,  -273,
    -273,   189,   121,   286,   122,  -273,  -273,   966,   992,   125,
    -273,  -273,   156,  -273,  -273,  -273,   194,   195,   196,  -273,
    -273,   671,   192,   199,  -273,  -273,     8,   201,  -273,   286,
     126,  -273,   286,   140,   286,  -273,   156,   156,   715,  -273,
     715,   197,  -273,   156,  -273,   286,  -273,   286,  -273,   252,
    -273,   207,   208,  -273,  -273,  -273,  -273,  -273,   -18,   202,
     156,  -273,  -273,  -273,  -273,  -273
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    37,    38,    41,
      39,    46,    48,    49,    50,    54,     0,     0,     0,     2,
      64,    64,     1,    34,    35,    42,    36,    47,     0,    16,
      17,    18,    19,    12,    13,    14,    15,    20,    21,    22,
      23,    24,     0,    26,     0,     0,     0,     6,     7,     8,
       0,     0,     0,     0,     0,    65,    40,     0,     0,    43,
      33,     0,     9,    10,    11,     0,    55,     0,     0,     0,
     132,   144,   145,   146,   141,   142,   143,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,    56,
      62,   136,   147,   134,   137,   131,   155,   162,   166,   169,
     172,   177,   180,   182,   184,   186,   188,   190,    61,    51,
       0,     0,     0,     0,     0,     0,    68,     3,    64,    64,
      28,     0,     4,    25,   156,   157,     0,     0,     0,     0,
     158,   159,   160,   161,     0,     0,    52,   138,    59,   148,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    31,     0,    97,     0,
       0,     0,     0,     0,     0,    69,    71,    72,     0,     0,
       0,     0,     0,     0,    92,    44,    45,    27,    30,     0,
       0,     0,   133,    60,    63,     0,    57,     0,   150,   153,
     191,   192,     0,     0,   163,   164,   165,   167,   168,   170,
     171,   176,   175,   173,   174,   178,   179,   181,   183,   185,
     187,   189,    53,     0,     0,     0,     0,     0,     0,     0,
      91,   106,     0,   104,   107,   109,   112,   113,   110,   111,
     155,   209,     0,   210,     0,    96,     0,    99,     0,     0,
       0,     0,     0,    64,    70,    75,     0,     0,    94,    95,
      64,    93,    29,     5,     0,   101,     0,   135,   140,     0,
     154,   152,     0,   151,    32,     0,     0,     0,     0,     0,
     128,     0,    90,   105,   208,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,     0,     0,   108,    98,
      89,     0,     0,    81,     0,    74,    66,     0,    26,     0,
      67,   100,     0,   103,   139,   193,     0,     0,     0,   124,
     123,     0,     0,     0,   129,   197,   195,   196,    73,    77,
       0,    80,    83,     0,    87,   102,     0,     0,     0,   126,
       0,     0,   122,     0,    76,    79,    82,    85,    86,   114,
     119,     0,     0,   127,   125,   118,    78,    84,     0,     0,
       0,   117,   116,   115,   120,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,   278,  -155,   -13,   -16,   242,   243,   -69,  -273,  -273,
     279,    27,    36,    10,  -150,  -273,   -79,  -273,   203,  -128,
    -273,   -11,  -273,  -273,   114,  -273,  -273,   -96,  -273,   -46,
    -153,  -273,   115,  -273,  -273,  -273,    57,  -273,  -273,   -65,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     162,  -154,   -29,    -7,    70,    -8,    66,   153,   157,   138,
     151,   160,  -273,   -66,    40,    93,  -273,  -273,  -273,  -272
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   121,   166,    85,    48,    49,   167,     6,     7,
       8,     9,    10,    11,    12,    16,    86,    87,    88,    89,
      90,    56,    13,   174,   175,   176,   177,   178,   182,   304,
     168,   183,   184,    14,    91,   232,   233,   234,   235,   236,
     363,   237,   238,   321,   340,   352,   239,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   201,   202,   242,   243,   295,   244
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   129,    47,    46,   113,    53,   322,   196,   224,   223,
      59,   240,   127,   128,   245,   231,   247,   151,   152,   181,
      27,   109,   110,   171,   172,   255,    62,   171,   172,   179,
      15,   162,   139,   140,    27,    25,    27,   265,   124,   125,
      57,   179,    54,    24,    26,    47,   270,    55,   122,   144,
      25,   187,   130,   131,   132,   133,   149,   150,   173,    60,
     145,   146,   173,   180,   165,   147,   148,    58,   353,   253,
      27,    47,    55,   277,   137,   180,   200,   203,   240,    17,
     191,   141,   231,   142,     1,     2,   260,   181,   143,     3,
     153,   154,     5,   299,   135,    47,    47,    18,   163,   241,
     246,   194,   309,    19,    47,   135,    22,   185,   186,     1,
       2,   311,   314,   313,     3,   204,   205,   206,   269,   262,
     117,   264,     1,     2,   240,   119,    50,     3,   320,     4,
       5,    71,    72,    73,    74,    65,   296,    75,    76,   297,
     207,   208,   326,   211,   212,   213,   214,   111,    47,   112,
     114,   122,   333,    47,   135,    61,   136,    47,    66,   335,
     252,   115,   169,   200,   170,   116,   241,   325,   188,   111,
     189,   190,    47,    47,    47,   135,   263,   222,   266,   271,
     170,   272,   117,   349,   350,   274,   240,   189,   126,   111,
     355,   303,   272,   111,   324,   329,   332,   312,   170,   334,
     345,   189,   170,   155,   156,   361,   200,   365,   118,   316,
     317,   123,   241,   323,   347,   157,   189,   134,   327,   209,
     210,   215,   216,   158,   160,   159,   161,    55,   192,   193,
     198,   248,    47,    47,   331,   300,   301,   197,   165,   249,
     250,    47,   306,   256,   122,   257,   267,   258,   318,   310,
      47,   259,   275,   276,   278,   341,   330,   273,   279,   298,
     344,   330,   302,   346,   305,   348,   307,   328,   336,   337,
     342,   338,   351,   343,   241,   354,   356,   135,   357,   358,
     364,   359,   360,    21,    63,    64,    23,    47,   254,   283,
     138,    47,    47,   362,   122,   163,   195,   219,   261,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     217,   220,   315,    47,     0,   218,    47,     0,    47,   139,
     140,   221,   281,     0,    28,     0,     0,     0,     0,    47,
       0,    47,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,    67,    68,   224,     0,   225,   226,   227,    43,   228,
       0,   164,     0,     0,     1,    69,   229,     0,   141,     0,
     142,  -194,     0,     0,  -194,   143,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      70,    71,    72,    73,    74,     0,     0,    75,    76,    77,
       0,     0,    78,     0,     0,     0,     0,    79,     0,     0,
     230,    81,    82,    83,    84,    67,    68,   224,     0,   225,
     226,   227,     0,   228,     0,     0,     0,     0,     1,    69,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    70,    71,    72,    73,    74,    67,
      68,    75,    76,    77,     0,     0,    78,     0,     0,     0,
       0,    79,     0,    69,   282,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     0,    70,    71,
      72,    73,    74,     0,     0,    75,    76,    77,     0,     0,
      78,    67,    68,     0,     0,    79,     0,    80,   268,    81,
      82,    83,    84,     0,     1,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      70,    71,    72,    73,    74,    67,    68,    75,    76,    77,
       0,     0,    78,     0,     0,   319,     0,    79,     0,    69,
       0,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    70,    71,    72,    73,    74,     0,
       0,    75,    76,    77,     0,     0,    78,    67,    68,     0,
       0,    79,     0,    80,     0,    81,    82,    83,    84,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     0,    70,    71,    72,    73,
      74,    67,    68,    75,    76,    77,     0,   199,    78,     0,
       0,     0,     0,    79,     0,    69,     0,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      70,    71,    72,    73,    74,    67,    68,    75,    76,    77,
       0,     0,    78,     0,     0,   280,     0,    79,     0,    69,
       0,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    70,    71,    72,    73,    74,    67,
      68,    75,    76,    77,     0,     0,    78,     0,     0,   339,
       0,    79,     0,    69,     0,    81,    82,    83,    84,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     0,    70,    71,
      72,    73,    74,     0,     0,    75,    76,    77,     0,     0,
      78,     0,    28,     0,     0,    79,     0,     0,     0,    81,
      82,    83,    84,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    69,     0,   164,
       0,     0,     0,     0,     0,     0,   165,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    70,    71,    72,    73,    74,     0,     0,    75,
      76,    77,    28,     0,    78,     0,     0,     0,     0,    79,
       0,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    28,     0,    43,     0,     0,     0,
       0,     0,     0,     0,    79,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    43,     0,
       0,     0,    44,     0,     0,    45,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    43,
       0,     0,   251,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    43,     0,   120,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,    28,     0,     0,     0,     0,     0,
       0,     0,   308,     0,   303,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
      28,     0,     0,     0,     0,     0,     0,     0,   308,     0,
     329,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    28,     0,    51,    52,     0,
       0,     0,     0,     0,    43,    65,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      28,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43
};

static const yytype_int16 yycheck[] =
{
      16,    80,    18,    16,    50,    18,   278,   135,    26,   164,
      21,   165,    78,    79,   167,   165,   169,    17,    18,   115,
      10,    78,    79,    37,    38,   178,    42,    37,    38,    38,
      72,   110,    24,    25,    24,     8,    26,   190,    67,    68,
      46,    38,    73,     7,     8,    61,   199,    78,    61,    77,
      23,   120,    81,    82,    83,    84,    22,    23,    72,    23,
      88,    89,    72,    72,    82,    84,    85,    73,   340,    83,
      60,    87,    78,   226,    87,    72,   142,   143,   232,    72,
     126,    73,   232,    75,    37,    38,    83,   183,    80,    42,
      90,    91,    45,   246,    76,   111,   112,    72,   111,   165,
     169,    83,   257,    72,   120,    76,     0,   118,   119,    37,
      38,   264,    83,   266,    42,   144,   145,   146,   197,   188,
      72,   190,    37,    38,   278,    77,    75,    42,   278,    44,
      45,    64,    65,    66,    67,    73,    76,    70,    71,    79,
     147,   148,   296,   151,   152,   153,   154,    72,   164,    74,
      82,   164,   307,   169,    76,    75,    78,   173,    72,   312,
     173,    82,    74,   229,    76,    78,   232,   295,    74,    72,
      76,    74,   188,   189,   190,    76,   189,    78,    74,    74,
      76,    76,    72,   336,   337,    74,   340,    76,    75,    72,
     343,    74,    76,    72,    78,    74,    74,   266,    76,    74,
      74,    76,    76,    15,    16,   358,   272,   360,    72,   275,
     276,    72,   278,   279,    74,    92,    76,    75,   297,   149,
     150,   155,   156,    93,    19,    94,    20,    78,    74,    81,
      72,    72,   248,   249,   303,   248,   249,    82,    82,    72,
      72,   257,   253,    72,   257,    75,    74,    78,    28,   260,
     266,    78,    75,    75,    75,   321,   302,    81,    75,    78,
     329,   307,    75,   332,    78,   334,    75,    78,    74,    74,
      78,    75,   338,    74,   340,    78,   345,    76,   347,    27,
      78,    74,    74,     5,    42,    42,     7,   303,   174,   232,
      87,   307,   308,   358,   307,   308,   134,   159,   183,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     157,   160,   272,   329,    -1,   158,   332,    -1,   334,    24,
      25,   161,   229,    -1,    38,    -1,    -1,    -1,    -1,   345,
      -1,   347,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    30,    72,    32,
      -1,    75,    -1,    -1,    37,    38,    39,    -1,    73,    -1,
      75,    76,    -1,    -1,    79,    80,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    85,    86,    87,    24,    25,    26,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    24,
      25,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    -1,    38,    83,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    70,    71,    72,    -1,    -1,
      75,    24,    25,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    24,    25,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    -1,    38,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    70,    71,    72,    -1,    -1,    75,    24,    25,    -1,
      -1,    80,    -1,    82,    -1,    84,    85,    86,    87,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    24,    25,    70,    71,    72,    -1,    74,    75,    -1,
      -1,    -1,    -1,    80,    -1,    38,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    24,    25,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    78,    -1,    80,    -1,    38,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    24,
      25,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    78,
      -1,    80,    -1,    38,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    70,    71,    72,    -1,    -1,
      75,    -1,    38,    -1,    -1,    80,    -1,    -1,    -1,    84,
      85,    86,    87,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    38,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    -1,    -1,    70,
      71,    72,    38,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    79,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    72,    73,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   103,   104,   105,   106,
     107,   108,   109,   117,   128,    72,   110,    72,    72,    72,
      96,    96,     0,   105,   107,   106,   107,   108,    38,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    72,    76,    79,    98,    99,   100,   101,
      75,    40,    41,    98,    73,    78,   116,    46,    73,   116,
     107,    75,    99,   100,   101,    73,    72,    24,    25,    38,
      63,    64,    65,    66,    67,    70,    71,    72,    75,    80,
      82,    84,    85,    86,    87,    99,   111,   112,   113,   114,
     115,   129,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    78,
      79,    72,    74,   124,    82,    82,    78,    72,    72,    77,
      74,    97,    98,    72,   147,   147,    75,   158,   158,   111,
     147,   147,   147,   147,    75,    76,    78,    98,   113,    24,
      25,    73,    75,    80,    77,    88,    89,    84,    85,    22,
      23,    17,    18,    90,    91,    15,    16,    92,    93,    94,
      19,    20,   111,    98,    75,    82,    98,   102,   125,    74,
      76,    37,    38,    72,   118,   119,   120,   121,   122,    38,
      72,   122,   123,   126,   127,   116,   116,   102,    74,    76,
      74,   124,    74,    81,    83,   145,   114,    82,    72,    74,
     158,   159,   160,   158,   147,   147,   147,   148,   148,   149,
     149,   150,   150,   150,   150,   151,   151,   152,   153,   154,
     155,   156,    78,    97,    26,    28,    29,    30,    32,    39,
      83,   109,   130,   131,   132,   133,   134,   136,   137,   141,
     146,   158,   161,   162,   164,   125,   102,   125,    72,    72,
      72,    75,    98,    83,   119,   125,    72,    75,    78,    78,
      83,   127,   102,    98,   102,   125,    74,    74,    83,   111,
     125,    74,    76,    81,    74,    75,    75,   125,    75,    75,
      78,   160,    83,   131,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   163,    76,    79,    78,   125,
      98,    98,    75,    74,   124,    78,   116,    75,    72,    97,
     116,   125,   102,   125,    83,   159,   158,   158,    28,    78,
     109,   138,   164,   158,    78,   114,   146,   111,    78,    74,
     124,   102,    74,    97,    74,   125,    74,    74,    75,    78,
     139,   158,    78,    74,   102,    74,   102,    74,   102,   125,
     125,   158,   140,   164,    78,   125,   102,   102,    27,    74,
      74,   125,   134,   135,    78,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     104,   105,   105,   106,   106,   106,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   114,   114,   115,   116,   116,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   123,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   141,   141,
     142,   142,   142,   142,   142,   143,   143,   143,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   149,   149,   149,   150,
     150,   150,   151,   151,   151,   151,   151,   152,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   164,
     164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     4,     3,     5,
       4,     1,     3,     3,     2,     2,     2,     1,     1,     1,
       3,     1,     2,     3,     5,     5,     1,     2,     1,     1,
       1,     4,     5,     6,     1,     3,     1,     3,     1,     2,
       3,     1,     1,     3,     0,     1,     7,     7,     4,     1,
       2,     1,     1,     4,     3,     2,     5,     4,     6,     5,
       4,     3,     5,     4,     6,     5,     5,     4,     2,     4,
       3,     2,     1,     2,     2,     2,     6,     5,     7,     6,
       5,     4,     6,     5,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     5,     7,     1,     1,     5,     5,
       7,     7,     2,     1,     1,     2,     1,     1,     2,     3,
       1,     1,     1,     3,     1,     4,     1,     1,     2,     5,
       4,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     4,     4,     3,     4,     1,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     1,     3,     3,     3,     1,     1,
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
#line 150 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1749 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 153 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1757 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 165 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1763 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 166 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1769 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1777 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 173 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1785 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 176 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1791 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 177 "yacc/koala.y" /* yacc.c:1646  */
    {printf(">>>>>>PrimitiveType Array:%d\n", dim_count);}
#line 1797 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "yacc/koala.y" /* yacc.c:1646  */
    {printf(">>>>>>ModuleType Array:%d\n", dim_count);}
#line 1803 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 179 "yacc/koala.y" /* yacc.c:1646  */
    {printf(">>>>>>FunctionType Array:%d\n", dim_count);}
#line 1809 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 183 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1817 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 186 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1825 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 189 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1833 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 192 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1841 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1849 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 198 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 201 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("int32\n");
    (yyval.type) = TYPE_INT32;
  }
#line 1866 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1874 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1882 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 211 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1890 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 214 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1898 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("string\n");
    (yyval.type) = TYPE_STRING;
  }
#line 1907 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 221 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1915 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 227 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("Module:%s, Type:%s\n", (yyvsp[-2].identifier).val, (yyvsp[0].identifier).val);
  }
#line 1923 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 230 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("Type:%s\n", (yyvsp[0].identifier).val);
  }
#line 1931 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 236 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1939 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 239 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1945 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 240 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("FunctionType 3\n");
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1954 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 244 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1960 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 296 "yacc/koala.y" /* yacc.c:1646  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1968 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 299 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1976 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 302 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1984 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 308 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1994 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 313 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2004 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 90:
#line 418 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("code block\n");
  }
#line 2012 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 458 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----statement\n");
  }
#line 2020 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 464 "yacc/koala.y" /* yacc.c:1646  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2029 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 130:
#line 544 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2037 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 131:
#line 547 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2045 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 132:
#line 550 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2053 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 553 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2061 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 556 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2067 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 560 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("complex_primary\n");
  }
#line 2075 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 563 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2081 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 564 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2087 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 610 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("INTEGER: %lld\n", (yyvsp[0].ival));
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2096 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 614 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2104 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 617 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2112 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 620 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = null;
  }
#line 2120 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 623 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2128 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 626 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2136 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 632 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2144 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 635 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2157 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 643 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2170 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 651 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2178 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 654 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2186 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 657 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2194 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 660 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2202 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 663 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2210 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 669 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2218 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 672 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2231 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 680 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2244 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 688 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2252 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 691 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2260 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 694 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2268 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 697 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2276 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 703 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2284 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 706 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2292 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 709 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2300 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 712 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2308 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 718 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2316 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 721 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2324 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 724 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2332 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 730 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2340 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 733 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2348 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 736 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2356 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 742 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2364 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 745 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2372 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 748 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2380 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 751 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2388 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 754 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2396 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 760 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2404 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 763 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2412 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 766 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2420 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 772 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2428 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 775 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2436 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 781 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2444 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 784 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2452 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 790 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2460 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 793 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2468 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 799 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2476 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 802 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2484 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 808 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2492 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 811 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2500 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 817 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2508 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 823 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2515 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 209:
#line 860 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----basic_expression\n");
    //show_expr($1);
    //putchar('\n');
  }
#line 2525 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 210:
#line 865 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2533 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2537 "koala_yacc.c" /* yacc.c:1646  */
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
#line 872 "yacc/koala.y" /* yacc.c:1906  */


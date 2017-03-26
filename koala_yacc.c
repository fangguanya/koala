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
    SELF = 317,
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   983

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

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
      74,    75,    76,    84,    73,    85,    72,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    77,
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
     167,   168,   172,   175,   178,   181,   184,   187,   190,   193,
     196,   199,   202,   205,   208,   214,   217,   223,   226,   229,
     232,   238,   239,   240,   245,   246,   247,   248,   249,   250,
     251,   255,   259,   260,   264,   265,   266,   270,   271,   275,
     276,   277,   285,   288,   291,   297,   302,   310,   311,   315,
     316,   317,   318,   319,   320,   321,   325,   326,   330,   331,
     335,   339,   340,   341,   342,   343,   347,   353,   354,   358,
     359,   360,   364,   365,   369,   370,   374,   375,   379,   383,
     384,   385,   386,   387,   388,   389,   390,   394,   395,   396,
     397,   401,   402,   406,   409,   413,   414,   418,   419,   425,
     426,   427,   428,   432,   433,   434,   435,   440,   441,   445,
     446,   452,   456,   457,   458,   462,   463,   467,   468,   472,
     473,   477,   481,   482,   483,   487,   488,   489,   493,   494,
     498,   502,   503,   532,   535,   538,   541,   581,   584,   587,
     590,   593,   596,   602,   605,   613,   621,   624,   627,   630,
     633,   639,   642,   650,   658,   661,   664,   667,   673,   676,
     679,   682,   688,   691,   694,   700,   703,   706,   712,   715,
     718,   721,   724,   730,   733,   736,   742,   745,   751,   754,
     760,   763,   769,   772,   778,   781,   787,   793,   799,   800,
     804,   805,   811,   812,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   830,   835
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
  "INTERFACE", "TYPE", "CONST", "PACKAGE", "IMPORT", "AS", "NEW", "INT8",
  "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BOOL", "STRING", "ROOT_OBJECT", "DIMS", "SELF",
  "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE", "INTEGER", "HEX", "OCT",
  "FLOAT", "STRING_LITERAL", "IDENTIFIER", "'.'", "','", "'('", "')'",
  "'*'", "';'", "'='", "'{'", "'}'", "'['", "']'", "':'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept",
  "ModuleFilePathName", "TypeList", "Type", "PrimitiveType", "ModuleType",
  "FunctionType", "ReturnTypeList", "Program", "PackageDeclaration",
  "ImportDeclarations", "ImportDeclaration", "Declarations", "Declaration",
  "VariableDeclaration", "VariableList", "VariableInitializerList",
  "ComplexVariableInitializer", "ArrayInitializerList", "DimExprs",
  "DimExpr", "ArrayInitializer", "ArrayPositionInitializer", "SemiOrEmpty",
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
     325,   326,    46,    44,    40,    41,    42,    59,    61,   123,
     125,    91,    93,    58,    43,    45,   126,    33,    47,    37,
      60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -268

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-268)))

#define YYTABLE_NINF -201

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     135,   -40,   -31,    10,    24,    24,    52,    42,    42,  -268,
     105,  -268,  -268,  -268,  -268,  -268,   670,    45,   864,  -268,
      48,    64,  -268,    42,   105,  -268,   105,  -268,    86,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,   912,    66,    75,   238,    34,  -268,  -268,  -268,
      26,    76,    84,   101,   100,  -268,  -268,   104,    59,  -268,
     105,   701,  -268,  -268,  -268,   129,  -268,   598,   598,   132,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,   598,   332,
     598,   598,   598,   598,   598,   136,    32,  -268,   392,  -268,
    -268,  -268,  -268,    -4,  -268,    40,    98,   173,     9,   199,
     111,   125,   127,   222,   231,  -268,  -268,   238,   888,   638,
     -17,    -9,   -21,  -268,  -268,   178,   178,   785,    94,  -268,
    -268,  -268,  -268,    47,   185,   183,   332,   201,   -39,  -268,
    -268,  -268,  -268,   203,  -268,  -268,  -268,  -268,   598,   238,
    -268,   202,  -268,  -268,  -268,   212,   517,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,    71,  -268,   785,   396,
    -268,   220,  -268,   239,   638,   240,   244,   812,    69,  -268,
    -268,  -268,   220,   245,   246,   241,   249,    37,  -268,  -268,
    -268,  -268,   888,   785,   638,   124,  -268,   332,   -36,   598,
     332,  -268,  -268,   253,  -268,   289,  -268,   220,  -268,  -268,
     134,   247,  -268,  -268,  -268,    40,    40,    98,    98,   173,
     173,   173,   173,     9,     9,   199,   111,   125,   127,   222,
    -268,   255,   248,   257,   258,   220,   259,   260,   544,  -268,
    -268,   460,  -268,  -268,  -268,  -268,  -268,  -268,  -268,   180,
    -268,    72,  -268,   273,  -268,   888,   220,  -268,   888,   261,
      82,   284,   178,  -268,  -268,   262,   729,  -268,  -268,   178,
    -268,  -268,  -268,   220,  -268,   638,  -268,  -268,   287,  -268,
    -268,  -268,   -19,  -268,   598,  -268,  -268,  -268,   888,   598,
     598,   336,   490,   598,  -268,    81,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,   238,
     164,   238,  -268,  -268,  -268,   288,    91,   785,   149,  -268,
    -268,   757,   839,   171,  -268,  -268,   220,  -268,  -268,  -268,
    -268,   291,   292,   296,   298,  -268,  -268,   570,   300,   303,
    -268,  -268,    -4,   306,  -268,   785,   192,  -268,   785,   198,
     785,  -268,  -268,   220,   220,   598,  -268,   598,   316,  -268,
     220,  -268,   785,  -268,   785,  -268,   372,  -268,   325,   329,
    -268,  -268,  -268,  -268,  -268,    -8,   328,   220,  -268,  -268,
    -268,  -268,  -268
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    38,    39,    42,
      40,    47,    49,    50,    51,    55,     0,     0,     0,     2,
      77,    77,     1,    35,    36,    43,    37,    48,     0,    16,
      17,    18,    19,    12,    13,    14,    15,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,     6,     7,     8,
       0,     0,     0,     0,     0,    78,    41,     0,     0,    44,
      34,     0,     9,    10,    11,     0,    56,     0,     0,     0,
     145,   150,   151,   152,   147,   148,   149,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    68,
      61,   153,   144,   161,   168,   172,   175,   178,   183,   186,
     188,   190,   192,   194,   196,    59,    52,     0,     0,     0,
       0,     0,     0,    81,     3,    77,    77,    27,     0,     4,
      26,   162,   163,     0,     0,   147,     0,     0,     0,    66,
      74,    73,    71,     0,   164,   165,   166,   167,     0,     0,
      53,    63,    69,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,     0,
      31,     0,   109,     0,     0,     0,     0,     0,     0,    82,
      84,    85,     0,     0,     0,     0,     0,     0,   105,    45,
      46,    28,     0,    29,     0,     0,   146,     0,     0,     0,
       0,    62,    70,     0,    58,     0,   156,   159,   197,   198,
       0,     0,   169,   170,   171,   173,   174,   176,   177,   182,
     181,   179,   180,   184,   185,   187,   189,   191,   193,   195,
      54,    31,     0,     0,     0,     0,     0,     0,     0,   104,
     119,     0,   117,   120,   122,   125,   126,   123,   124,   161,
     215,     0,   216,     0,   110,     0,     0,   111,     0,     0,
       0,     0,    77,    83,    88,     0,     0,   107,   108,    77,
     106,     5,    30,     0,   113,     0,    76,    75,     0,    67,
      60,    65,     0,   160,     0,   158,   157,    32,     0,     0,
       0,     0,     0,     0,   141,     0,   103,   118,   214,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,     0,
       0,     0,   121,   102,   112,     0,     0,    93,     0,    87,
      79,     0,    25,     0,    80,   114,     0,   115,    72,    64,
     199,     0,     0,     0,     0,   137,   136,     0,     0,     0,
     142,   203,   201,   202,    86,    89,     0,    94,    95,     0,
      99,   116,    33,     0,     0,     0,   139,     0,     0,   135,
       0,    90,    91,    96,    97,   100,   127,   132,     0,     0,
     140,   138,   131,    92,    98,     0,     0,     0,   130,   129,
     128,   133,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,   402,  -243,   -16,   -41,   366,   367,  -105,  -268,  -268,
     403,    16,    28,    33,  -155,  -268,   -98,  -128,  -111,  -268,
     324,  -133,  -268,   -13,  -268,  -268,   235,  -268,  -268,   -96,
    -268,   -47,  -152,  -268,   227,  -268,   -66,  -268,   174,  -268,
    -268,    54,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -159,   -35,    80,    83,   122,    88,   266,   269,   271,
     268,   272,  -268,   -73,   139,   200,  -268,  -268,  -268,  -267
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,   118,   170,    47,    48,    49,   171,     6,     7,
       8,     9,    10,    11,    12,    16,    86,    87,   128,    88,
      89,   129,   130,    56,    13,   178,   179,   180,   181,   182,
     186,   318,   172,   187,   188,    14,    90,   241,   242,   243,
     244,   245,   380,   246,   247,   337,   357,   369,   248,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   209,   210,   251,   252,   309,   253
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    62,    53,   110,    85,   124,   132,   133,    59,   166,
     249,   204,   191,   131,   240,   198,   185,   183,   233,   254,
     143,   144,   257,   323,    25,   338,   155,   156,   175,   176,
     264,    15,   121,   122,   200,    24,    26,   200,   127,    25,
      17,   201,   274,    27,   277,   119,   134,   135,   136,   137,
     184,    60,    22,   132,   200,   283,   173,    27,   174,    27,
     131,   329,   177,   232,   276,   203,    85,   279,   145,   256,
     146,   169,   141,   208,   211,   183,   195,   147,   349,     1,
       2,    18,   249,   291,     3,   127,   240,     5,   272,   273,
     370,   185,   167,    27,   282,    19,   250,   108,    85,   157,
     158,   109,   189,   190,   314,   139,   175,   176,   184,   140,
      57,   106,   107,   212,   213,   214,   148,   269,   108,    50,
      54,   325,   194,   327,   132,    55,   278,   132,   149,   150,
     114,   131,   132,   249,   131,   116,    58,   336,    65,   131,
     177,    55,     1,     2,   139,   310,    66,     3,   230,   262,
     311,   342,   231,   108,   284,   111,   127,   317,   340,   127,
      61,   261,   108,   112,   127,   208,   345,   192,   250,   193,
     326,   114,     1,     2,   351,   115,   271,     3,   113,     4,
       5,   341,   151,   152,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   153,   154,   173,   249,   275,
     120,   366,   367,   161,   143,   144,   123,   284,   372,   285,
     138,   208,   347,   343,   159,   160,   332,   333,   162,   250,
     339,   163,   173,   378,   348,   382,    70,    71,    72,    73,
      74,   215,   216,    75,    76,    77,   217,   218,    78,   313,
     361,   164,   315,   363,   192,   365,   350,   223,   224,   320,
     119,   165,   145,  -200,   146,    55,   324,   373,  -200,   374,
     196,   147,    67,    68,   358,   173,   197,   362,    85,   346,
      85,   192,   331,   364,   346,   199,    69,   219,   220,   221,
     222,   205,   368,   206,   250,   202,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   169,
      70,    71,    72,    73,    74,   119,   167,    75,    76,    77,
     255,   258,    78,    67,    68,   259,   265,    79,   267,    80,
     266,   288,    81,    82,    83,    84,   268,    69,   280,   286,
     287,   289,   290,   292,   293,   316,   321,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     312,    70,    71,    72,    73,   125,    67,    68,    75,    76,
      77,   319,   328,    78,   334,   344,   352,   353,   126,   281,
      69,   354,   355,    81,    82,    83,    84,   359,   360,   139,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   371,    70,    71,    72,    73,   125,   375,
     376,    75,    76,    77,   377,   381,    78,    21,    63,    64,
      23,   126,   142,   263,   270,   297,    81,    82,    83,    84,
      67,    68,   233,   330,   234,   235,   236,   225,   237,   379,
      28,   226,   228,     1,   227,   238,     0,   229,   295,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    43,     0,    75,    76,    77,     0,     0,
      78,     0,     0,    80,     0,     0,   239,     0,     0,     0,
      81,    82,    83,    84,    67,    68,   233,     0,   234,   235,
     236,     0,   237,     0,     0,     0,     0,     1,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,     0,     0,     0,     0,
       0,     0,    70,    71,    72,    73,    74,     1,     0,    75,
      76,    77,     0,     0,    78,     0,     0,     0,     0,     0,
     296,    67,    68,     0,    81,    82,    83,    84,     0,     0,
       0,     0,    70,    71,    72,    73,    74,     0,     0,    75,
      76,    77,     0,     0,    78,     0,     0,   335,    67,    68,
       0,     0,     0,     0,    81,    82,    83,    84,     0,    70,
      71,    72,    73,    74,     0,     0,    75,    76,    77,     0,
       0,    78,   207,     0,    67,    68,     0,     0,     0,     0,
       0,    81,    82,    83,    84,     0,    70,    71,    72,    73,
      74,     0,     0,    75,    76,    77,     0,     0,    78,     0,
       0,   294,    67,    68,     0,     0,     0,     0,    81,    82,
      83,    84,    70,    71,    72,    73,    74,     0,     0,    75,
      76,    77,     0,     0,    78,     0,     0,   356,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,     0,     0,
      70,    71,    72,    73,    74,     0,     0,    75,    76,    77,
       0,     0,    78,     0,     0,     0,    28,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    43,
       0,     0,   168,     0,     0,     0,     0,   169,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    28,
       0,    43,     0,    44,     0,     0,     0,     0,    45,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,     0,     0,     0,    28,     0,     0,
       0,     0,    43,     0,     0,     0,   117,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     0,     0,     0,    28,     0,     0,     0,     0,
     322,     0,     0,     0,   317,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,    28,     0,     0,     0,     0,   322,     0,
       0,     0,   345,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,     0,     0,
      28,     0,     0,     0,     0,     0,    43,     0,     0,   168,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,     0,     0,    28,     0,     0,
       0,     0,     0,    43,     0,     0,   260,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    28,     0,    51,    52,     0,     0,     0,     0,
      43,    65,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      28,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43
};

static const yytype_int16 yycheck[] =
{
      16,    42,    18,    50,    45,    78,    79,    80,    21,   107,
     169,   139,   117,    79,   169,   126,   112,    38,    26,   171,
      24,    25,   174,   266,     8,   292,    17,    18,    37,    38,
     182,    71,    67,    68,    73,     7,     8,    73,    79,    23,
      71,    80,   194,    10,    80,    61,    81,    82,    83,    84,
      71,    23,     0,   126,    73,   207,    73,    24,    75,    26,
     126,    80,    71,   168,   197,   138,   107,   200,    72,   174,
      74,    79,    88,   146,   147,    38,   123,    81,   321,    37,
      38,    71,   241,   235,    42,   126,   241,    45,   193,   194,
     357,   187,   108,    60,   205,    71,   169,    71,   139,    90,
      91,    75,   115,   116,   256,    73,    37,    38,    71,    77,
      46,    77,    78,   148,   149,   150,    76,    80,    71,    74,
      72,   273,    75,   275,   197,    77,   199,   200,    88,    89,
      71,   197,   205,   292,   200,    76,    72,   292,    72,   205,
      71,    77,    37,    38,    73,    73,    71,    42,    77,    80,
      78,   310,   168,    71,    73,    79,   197,    75,    77,   200,
      74,   177,    71,    79,   205,   238,    75,    73,   241,    75,
     275,    71,    37,    38,   326,    71,   192,    42,    77,    44,
      45,   309,    84,    85,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    22,    23,    73,   357,    75,
      71,   353,   354,    92,    24,    25,    74,    73,   360,    75,
      74,   284,   317,   311,    15,    16,   289,   290,    93,   292,
     293,    94,    73,   375,    75,   377,    62,    63,    64,    65,
      66,   151,   152,    69,    70,    71,   153,   154,    74,   255,
     345,    19,   258,   348,    73,   350,    75,   159,   160,   262,
     266,    20,    72,    73,    74,    77,   269,   362,    78,   364,
      75,    81,    24,    25,   337,    73,    83,    75,   309,   316,
     311,    73,   288,    75,   321,    74,    38,   155,   156,   157,
     158,    79,   355,    71,   357,    82,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    79,
      62,    63,    64,    65,    66,   321,   322,    69,    70,    71,
      71,    71,    74,    24,    25,    71,    71,    79,    77,    81,
      74,    73,    84,    85,    86,    87,    77,    38,    75,    82,
      75,    74,    74,    74,    74,    74,    74,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      77,    62,    63,    64,    65,    66,    24,    25,    69,    70,
      71,    77,    75,    74,    28,    77,    75,    75,    79,    80,
      38,    75,    74,    84,    85,    86,    87,    77,    75,    73,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    77,    62,    63,    64,    65,    66,    27,
      75,    69,    70,    71,    75,    77,    74,     5,    42,    42,
       7,    79,    88,   178,   187,   241,    84,    85,    86,    87,
      24,    25,    26,   284,    28,    29,    30,   161,    32,   375,
      38,   162,   164,    37,   163,    39,    -1,   165,   238,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    71,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    -1,    81,    -1,    -1,    80,    -1,    -1,    -1,
      84,    85,    86,    87,    24,    25,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    37,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80,    24,    25,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    -1,    77,    24,    25,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    62,
      63,    64,    65,    66,    -1,    -1,    69,    70,    71,    -1,
      -1,    74,    75,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,    -1,
      -1,    77,    24,    25,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    69,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      71,    72,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   103,   104,   105,   106,
     107,   108,   109,   119,   130,    71,   110,    71,    71,    71,
      96,    96,     0,   105,   107,   106,   107,   108,    38,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    71,    73,    78,    98,    99,   100,   101,
      74,    40,    41,    98,    72,    77,   118,    46,    72,   118,
     107,    74,    99,   100,   101,    72,    71,    24,    25,    38,
      62,    63,    64,    65,    66,    69,    70,    71,    74,    79,
      81,    84,    85,    86,    87,    99,   111,   112,   114,   115,
     131,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    77,    78,    71,    75,
     126,    79,    79,    77,    71,    71,    76,    75,    97,    98,
      71,   147,   147,    74,   158,    66,    79,    99,   113,   116,
     117,   131,   158,   158,   147,   147,   147,   147,    74,    73,
      77,    98,   115,    24,    25,    72,    74,    81,    76,    88,
      89,    84,    85,    22,    23,    17,    18,    90,    91,    15,
      16,    92,    93,    94,    19,    20,   111,    98,    74,    79,
      98,   102,   127,    73,    75,    37,    38,    71,   120,   121,
     122,   123,   124,    38,    71,   124,   125,   128,   129,   118,
     118,   102,    73,    75,    75,   126,    75,    83,   113,    74,
      73,    80,    82,   158,   112,    79,    71,    75,   158,   159,
     160,   158,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   151,   151,   152,   153,   154,   155,   156,
      77,    98,   102,    26,    28,    29,    30,    32,    39,    80,
     109,   132,   133,   134,   135,   136,   138,   139,   143,   146,
     158,   161,   162,   164,   127,    71,   102,   127,    71,    71,
      74,    98,    80,   121,   127,    71,    74,    77,    77,    80,
     129,    98,   102,   102,   127,    75,   116,    80,   158,   116,
      75,    80,   113,   127,    73,    75,    82,    75,    73,    74,
      74,   127,    74,    74,    77,   160,    80,   133,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   163,
      73,    78,    77,    98,   127,    98,    74,    75,   126,    77,
     118,    74,    71,    97,   118,   127,   102,   127,    75,    80,
     159,    98,   158,   158,    28,    77,   109,   140,   164,   158,
      77,   112,   146,   111,    77,    75,   126,   102,    75,    97,
      75,   127,    75,    75,    75,    74,    77,   141,   158,    77,
      75,   102,    75,   102,    75,   102,   127,   127,   158,   142,
     164,    77,   127,   102,   102,    27,    75,    75,   127,   136,
     137,    77,   127
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   101,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   106,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   116,   116,   116,   116,   116,   117,   118,   118,   119,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   130,   130,   131,   131,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   139,   139,   139,   140,   140,   140,   141,   141,
     142,   143,   143,   144,   144,   144,   144,   145,   145,   145,
     145,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   148,   149,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     4,
       5,     1,     3,     5,     3,     2,     2,     2,     1,     1,
       1,     3,     1,     2,     3,     5,     5,     1,     2,     1,
       1,     1,     4,     5,     6,     1,     3,     1,     3,     1,
       4,     1,     3,     2,     5,     4,     1,     3,     1,     2,
       3,     1,     4,     1,     1,     3,     3,     0,     1,     7,
       7,     4,     1,     2,     1,     1,     4,     3,     2,     4,
       5,     5,     6,     3,     4,     4,     5,     5,     6,     4,
       5,     2,     4,     3,     2,     1,     2,     2,     2,     5,
       6,     6,     7,     4,     5,     5,     6,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     5,     7,     1,
       1,     5,     5,     7,     7,     2,     1,     1,     2,     1,
       1,     2,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     4,     4,     3,
       4,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     3,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 1723 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 142 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1731 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 154 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1737 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 155 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1743 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 6:
#line 159 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1751 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 7:
#line 162 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1759 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 165 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1765 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 166 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1771 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 167 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1777 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 168 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1783 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 172 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1791 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 175 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1799 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 178 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1807 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 181 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1815 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 184 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1823 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 187 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1831 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 190 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT32;
  }
#line 1839 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 193 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1847 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 196 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1855 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 199 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1863 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 202 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1871 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 205 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_STRING;
  }
#line 1879 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 208 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1887 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 25:
#line 214 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("Type:%s\n", (yyvsp[0].identifier).val);
  }
#line 1895 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 26:
#line 217 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("Module:%s, Type:%s\n", (yyvsp[-2].identifier).val, (yyvsp[0].identifier).val);
  }
#line 1903 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 27:
#line 223 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1911 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 28:
#line 226 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1919 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 29:
#line 229 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1927 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 30:
#line 232 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1935 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 52:
#line 285 "yacc/koala.y" /* yacc.c:1661  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1943 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 53:
#line 288 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1951 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 54:
#line 291 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1959 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 55:
#line 297 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1969 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 56:
#line 302 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1979 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 59:
#line 315 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1985 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 60:
#line 316 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1991 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 61:
#line 317 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1997 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 71:
#line 339 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2003 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 72:
#line 340 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2009 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 73:
#line 341 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2015 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 74:
#line 342 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 2021 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 103:
#line 406 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 2029 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 120:
#line 446 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----statement\n");
  }
#line 2037 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 121:
#line 452 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2046 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 143:
#line 532 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2054 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 535 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2062 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 538 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2070 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 541 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2078 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 581 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2086 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 584 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2094 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 587 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2102 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 590 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2110 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 593 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2118 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 596 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2126 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 602 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2134 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 605 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2147 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 155:
#line 613 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2160 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 156:
#line 621 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2168 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 157:
#line 624 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2176 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 158:
#line 627 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2184 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 159:
#line 630 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2192 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 160:
#line 633 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2200 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 161:
#line 639 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2208 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 162:
#line 642 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2221 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 163:
#line 650 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2234 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 164:
#line 658 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2242 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 165:
#line 661 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2250 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 166:
#line 664 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2258 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 167:
#line 667 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2266 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 168:
#line 673 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2274 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 169:
#line 676 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2282 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 170:
#line 679 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2290 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 171:
#line 682 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2298 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 688 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2306 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 691 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2314 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 694 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2322 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 700 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2330 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 703 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2338 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 706 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2346 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 712 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2354 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 715 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2362 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 180:
#line 718 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2370 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 181:
#line 721 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2378 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 182:
#line 724 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2386 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 183:
#line 730 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2394 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 184:
#line 733 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2402 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 185:
#line 736 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2410 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 186:
#line 742 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2418 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 187:
#line 745 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2426 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 188:
#line 751 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2434 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 189:
#line 754 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2442 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 190:
#line 760 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2450 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 191:
#line 763 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2458 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 192:
#line 769 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2466 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 193:
#line 772 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2474 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 194:
#line 778 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2482 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 195:
#line 781 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2490 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 196:
#line 787 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2498 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 197:
#line 793 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2505 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 215:
#line 830 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----basic_expression\n");
    show_expr((yyvsp[0].expression));
    putchar('\n');
  }
#line 2515 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 216:
#line 835 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2523 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2527 "koala_yacc.c" /* yacc.c:1661  */
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
#line 842 "yacc/koala.y" /* yacc.c:1906  */


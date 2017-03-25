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
    NEW = 301,
    INT8 = 302,
    INT16 = 303,
    INT32 = 304,
    INT64 = 305,
    UINT8 = 306,
    UINT16 = 307,
    UINT32 = 308,
    UINT64 = 309,
    FLOAT32 = 310,
    FLOAT64 = 311,
    BOOL = 312,
    STRING = 313,
    ROOT_OBJECT = 314,
    TOKEN_THIS = 315,
    TOKEN_NIL = 316,
    TOKEN_TRUE = 317,
    TOKEN_FALSE = 318,
    INTEGER = 319,
    HEX = 320,
    OCT = 321,
    FLOAT = 322,
    STRING_LITERAL = 323,
    IDENTIFIER = 324
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

#line 202 "koala_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1007

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

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
      74,    75,    77,    82,    71,    83,    70,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    76,
      88,    78,    89,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    92,    80,    84,     2,     2,     2,
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
       0,   137,   137,   140,   152,   153,   157,   160,   163,   164,
     168,   171,   174,   177,   180,   183,   186,   189,   192,   195,
     198,   201,   204,   210,   213,   219,   220,   224,   227,   230,
     233,   239,   240,   241,   246,   247,   248,   249,   250,   251,
     252,   256,   260,   261,   265,   266,   270,   271,   275,   276,
     277,   285,   288,   291,   297,   302,   310,   311,   315,   316,
     317,   318,   319,   320,   321,   325,   326,   330,   331,   335,
     339,   340,   341,   342,   343,   347,   353,   354,   355,   359,
     360,   364,   365,   369,   373,   377,   378,   379,   380,   384,
     385,   389,   390,   394,   397,   401,   402,   406,   407,   413,
     417,   418,   419,   420,   425,   426,   430,   431,   437,   441,
     442,   443,   447,   448,   452,   453,   457,   458,   462,   466,
     467,   468,   472,   473,   474,   478,   479,   483,   487,   488,
     517,   520,   523,   526,   566,   569,   572,   575,   578,   581,
     587,   590,   598,   606,   609,   612,   615,   618,   624,   627,
     635,   643,   646,   649,   652,   658,   661,   664,   667,   673,
     676,   679,   685,   688,   691,   697,   700,   703,   706,   709,
     715,   718,   721,   727,   730,   736,   739,   745,   748,   754,
     757,   763,   766,   772,   778,   784,   785,   789,   790,   796,
     797,   798,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   815,   820
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
  "INTERFACE", "TYPE", "CONST", "PACKAGE", "IMPORT", "NEW", "INT8",
  "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BOOL", "STRING", "ROOT_OBJECT", "TOKEN_THIS",
  "TOKEN_NIL", "TOKEN_TRUE", "TOKEN_FALSE", "INTEGER", "HEX", "OCT",
  "FLOAT", "STRING_LITERAL", "IDENTIFIER", "'.'", "','", "'['", "']'",
  "'('", "')'", "';'", "'*'", "'='", "'{'", "'}'", "':'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "$accept",
  "PackageOrTypeName", "TypeList", "Type", "PrimitiveType",
  "ReferenceType", "Dims", "FunctionType", "ReturnTypeList", "Program",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      46,    44,    91,    93,    40,    41,    59,    42,    61,   123,
     125,    58,    43,    45,   126,    33,    47,    37,    60,    62,
      38,    94,   124
};
# endif

#define YYPACT_NINF -232

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-232)))

#define YYTABLE_NINF -188

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -45,   -21,    50,    76,    76,   137,    96,    96,  -232,
      78,  -232,  -232,  -232,    -4,  -232,  -232,   265,    86,   857,
    -232,    18,    33,  -232,    96,    78,  -232,    78,  -232,   476,
    -232,    90,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,   102,    74,   315,   110,   -42,
    -232,  -232,   883,  -232,    42,   106,   113,   117,   125,  -232,
       0,  -232,    78,   697,   697,   121,   122,    -4,   123,   124,
     592,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,   697,
    -232,   697,   697,   697,   697,  -232,   538,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,   280,  -232,    -7,    45,
      69,    -2,   140,   109,   111,   112,   182,   183,  -232,    30,
    -232,   129,   769,  -232,  -232,   133,   697,   414,   135,    64,
    -232,   909,  -232,  -232,    28,  -232,  -232,   315,   138,  -232,
    -232,   935,   827,   -48,   132,   168,  -232,  -232,   134,  -232,
    -232,   697,   697,   184,   566,   697,  -232,  -232,  -232,    72,
     139,  -232,  -232,  -232,  -232,  -232,  -232,   315,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
     144,   697,   619,   315,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     697,   697,    -6,   315,  -232,   827,     1,  -232,    67,   142,
     136,   414,   146,   -36,  -232,  -232,  -232,  -232,   697,   315,
    -232,   645,   145,  -232,    73,  -232,  -232,   827,  -232,  -232,
     147,   827,   149,   -16,  -232,  -232,  -232,    -4,   152,   150,
     151,   -13,  -232,  -232,   148,   153,   155,  -232,  -232,   671,
     154,   156,   697,  -232,  -232,  -232,  -232,   159,    -4,    75,
    -232,  -232,  -232,  -232,    -7,    -7,    45,    45,    69,    69,
      69,    69,    -2,    -2,   140,   109,   111,   112,   182,    28,
     164,  -232,   935,   827,   736,    82,  -232,   414,   -29,   697,
     414,  -232,   161,  -232,   366,  -232,   162,   167,   935,  -232,
     935,   163,  -232,  -232,   170,  -232,  -232,   165,  -232,    -4,
      -4,   697,  -232,   697,   166,  -232,    -4,  -232,  -232,  -232,
    -232,  -232,  -232,    -4,  -232,   736,  -232,  -232,   173,  -232,
    -232,  -232,     2,  -232,   935,  -232,   175,  -232,   798,  -232,
     198,  -232,   177,   178,  -232,  -232,  -232,  -232,    -4,  -232,
    -232,  -232,   179,  -232,   935,    83,   -14,   180,    -4,  -232,
    -232,   827,  -232,  -232,  -232,  -232,  -232,  -232
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    38,    39,    42,
      40,    46,    48,    49,     0,    50,    54,     0,     0,     0,
       2,     0,     0,     1,    35,    36,    43,    37,    47,     0,
      99,     0,    14,    15,    16,    17,    10,    11,    12,    13,
      18,    19,    20,    21,    22,     0,     0,     0,    23,     0,
       6,     7,     0,    24,     0,     0,     0,     0,     0,    41,
       0,    44,    34,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   137,   138,   139,   134,   135,   136,   130,     0,
      94,     0,     0,     0,     0,   106,     0,   104,   107,   109,
     112,   113,   110,   111,   140,   131,   148,   155,   159,   162,
     165,   170,   173,   175,   177,   179,   181,   183,   202,     0,
     203,     0,     0,    55,    25,     0,     0,     0,     0,     0,
      56,     0,    67,    60,   148,    58,    51,     0,     0,     8,
       9,     0,    85,     0,     0,     0,    78,     3,     0,   149,
     150,     0,     0,     0,     0,     0,   128,   184,   185,     0,
       0,   151,   152,   153,   154,    93,   105,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   141,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,    27,     0,     4,     0,     0,
     134,     0,     0,     0,    65,    73,    72,    70,     0,     0,
      52,     0,    62,    68,     0,    26,    89,     0,    31,    86,
       0,    87,     0,     0,    79,    81,    82,     0,     0,     0,
       0,     0,    95,    45,     0,     0,     0,   124,   123,     0,
       0,     0,     0,   129,   133,   191,   143,     0,   146,     0,
     190,   156,   157,   158,   160,   161,   163,   164,   169,   168,
     166,   167,   171,   172,   174,   176,   178,   180,   182,   188,
     189,    28,     0,    29,     0,     0,    69,     0,     0,     0,
       0,    61,     0,    57,     0,    53,    31,     0,     0,    88,
       0,     0,    80,    84,     0,    97,    98,     0,    96,     0,
       0,     0,   126,     0,     0,   122,     0,   186,   144,   147,
     145,     5,    30,     0,   100,     0,    75,    74,     0,    66,
      59,    64,     0,    32,     0,    90,     0,    76,     0,    77,
     114,   119,     0,     0,   127,   125,   118,   101,     0,   102,
      71,    63,     0,    83,     2,     0,     0,     0,     0,   103,
      33,    91,   117,   116,   115,   120,   121,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,   169,   -83,   -17,   -34,   206,  -232,  -232,  -189,  -232,
    -232,   254,     9,    23,    16,   -15,  -232,  -119,  -128,  -194,
    -232,   141,  -231,  -232,  -232,  -232,    40,  -232,  -232,  -124,
      70,  -232,   -66,  -232,    34,  -232,  -112,  -232,   181,  -232,
    -232,   -80,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,   -26,   -44,     6,     7,    -5,     4,    87,    81,    89,
      80,    84,  -232,   -20,    37,   104,  -232,  -232,  -232,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,   196,   218,    50,    51,    52,    53,   219,     6,
       7,     8,     9,    10,    11,    12,    17,   119,   120,   203,
     121,   122,   204,   205,    13,   223,   224,   225,   226,    14,
     133,   230,    30,   231,   232,    15,   123,    86,    87,    88,
      89,    90,   354,    91,    92,   239,   303,   333,    93,    94,
      95,   124,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   125,   148,   149,   109,   110,   173,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,   143,    57,    96,   240,   206,   271,   278,   214,   108,
     227,   229,    65,   118,    85,   181,   182,    26,   129,   139,
     140,   222,     2,   220,    16,   228,    28,   221,   287,   245,
      25,    27,   289,    26,   126,   280,   127,   151,   152,   153,
     154,    28,   280,    28,   281,   250,   316,    62,    18,   319,
     147,   317,   168,   169,    71,    72,    73,    74,    75,   150,
      96,    76,    77,    78,   291,    29,   108,   297,    79,   137,
     174,    85,   272,   280,   270,    29,   273,   138,    28,   175,
     176,   283,   341,   202,   312,   313,   183,   184,    58,   206,
     322,   179,   180,   118,    59,   197,   199,   207,   170,   227,
     171,   192,   172,    60,   212,     1,     2,   229,   193,    61,
       3,   131,     4,     5,   216,     1,     2,   132,    96,    19,
       3,   234,   235,   118,   108,   241,   338,   177,   178,   238,
     251,   252,   253,     1,     2,   209,   131,    23,     3,   118,
     210,     5,   274,   242,   209,    20,   242,   114,   243,   285,
     310,   247,   147,   220,   272,   185,   186,   315,   351,   118,
      54,   293,   357,   334,   112,   206,   269,   202,   206,   222,
       2,   113,   206,    21,    22,   118,   258,   259,   260,   261,
      58,   207,   309,   254,   255,   134,   256,   257,   282,   262,
     263,   199,   135,   136,   137,   141,   142,   144,   145,   187,
     286,   190,   188,   191,   189,   194,   228,   198,   314,   208,
     233,   215,   236,   246,   244,   276,   288,   277,   290,   304,
     279,   294,   147,   299,   284,   346,   295,   296,   300,   301,
     305,   306,   308,   330,   331,   209,   320,   323,   324,   327,
     336,   329,   335,   202,   328,   345,   202,   337,   340,   339,
     202,   343,   347,   348,   350,   311,   355,   207,   130,   318,
     207,    24,   213,   292,   207,   298,   353,   156,   275,   265,
     267,   325,   349,   326,   264,   268,   249,    96,   266,   307,
     352,   332,   356,   108,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,    31,   168,   169,     0,   342,     0,     0,
       0,   197,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,   216,     0,     0,
       0,     0,     0,     0,    20,     0,    45,    46,     0,    63,
      64,     0,     0,    47,     0,     0,     0,     0,     0,     0,
     170,  -187,   171,   115,   172,     0,     0,     0,  -187,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    71,    72,    73,    74,    75,
       0,     0,    76,    77,    78,     0,     0,   116,     0,    79,
      63,    64,     0,     0,   117,     0,     0,    81,    82,    83,
      84,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    71,    72,    73,    74,
     200,     0,     0,    76,    77,    78,     0,     0,    63,    64,
      79,     0,     0,     0,     0,   201,   321,     0,    81,    82,
      83,    84,   115,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    71,    72,    73,    74,   200,     0,
       0,    76,    77,    78,     0,     0,     0,     0,    79,     0,
       0,     0,     0,   201,     0,     0,    81,    82,    83,    84,
      63,    64,    65,     0,    66,    67,    68,     0,    69,     0,
       0,     0,     0,     1,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,     0,     0,    76,    77,    78,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,    80,     0,    81,    82,
      83,    84,    63,    64,    65,     0,    66,    67,    68,     0,
      69,     0,     0,     0,     0,     1,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,     1,     0,    76,    77,    78,     0,     0,
       0,     0,    79,     0,     0,     0,    63,    64,   155,     0,
      81,    82,    83,    84,     0,     0,    71,    72,    73,    74,
      75,     0,     0,    76,    77,    78,     0,     0,     0,     0,
      79,     0,   237,    63,    64,     0,     0,     0,    81,    82,
      83,    84,    71,    72,    73,    74,    75,     0,     0,    76,
      77,    78,     0,     0,     0,     0,    79,     0,   146,    63,
      64,     0,     0,     0,    81,    82,    83,    84,     0,    71,
      72,    73,    74,    75,     0,     0,    76,    77,    78,     0,
       0,     0,     0,    79,   248,    63,    64,     0,     0,     0,
       0,    81,    82,    83,    84,    71,    72,    73,    74,    75,
       0,     0,    76,    77,    78,     0,     0,     0,   114,    79,
       0,    63,    64,     0,     0,     0,     0,    81,    82,    83,
      84,    71,    72,    73,    74,    75,     0,     0,    76,    77,
      78,     0,     0,     0,     0,    79,     0,   302,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    71,    72,    73,
      74,    75,     0,     0,    76,    77,    78,     0,     0,     0,
       0,    79,     0,     0,    31,     0,     0,     0,     0,    81,
      82,    83,    84,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    31,    46,     0,
     217,     0,     0,     0,     0,    29,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    20,     0,
       0,    46,     0,     0,   195,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,    31,     0,   344,     0,     0,
      46,     0,     0,   132,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    20,    55,    56,    46,
       0,   217,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,     0,
       0,    31,     0,     0,     0,     0,    20,     0,     0,    46,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,    31,     0,     0,
       0,     0,    20,     0,     0,   128,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,    31,     0,     0,     0,     0,    20,     0,
       0,   211,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      17,    67,    19,    29,   144,   117,   195,   201,   127,    29,
     134,   135,    26,    47,    29,    17,    18,     8,    52,    63,
      64,    37,    38,    71,    69,    38,    10,    75,   217,   157,
       7,     8,   221,    24,    76,    71,    78,    81,    82,    83,
      84,    25,    71,    27,    80,   173,   277,    24,    69,   280,
      70,    80,    24,    25,    60,    61,    62,    63,    64,    79,
      86,    67,    68,    69,    80,    79,    86,    80,    74,    69,
      77,    86,    71,    71,   193,    79,    75,    77,    62,    86,
      87,   209,    80,   117,   273,   274,    88,    89,    70,   201,
     284,    22,    23,   127,    76,   112,   116,   117,    70,   223,
      72,    71,    74,    70,   121,    37,    38,   231,    78,    76,
      42,    69,    44,    45,   131,    37,    38,    75,   144,    69,
      42,   141,   142,   157,   144,   145,   315,    82,    83,   144,
     174,   175,   176,    37,    38,    71,    69,     0,    42,   173,
      76,    45,    75,    71,    71,    69,    71,    73,    76,    76,
      75,   171,   172,    71,    71,    15,    16,    75,    75,   193,
      74,   227,   351,   303,    74,   277,   192,   201,   280,    37,
      38,    69,   284,     4,     5,   209,   181,   182,   183,   184,
      70,   201,   248,   177,   178,    79,   179,   180,   208,   185,
     186,   211,    79,    76,    69,    74,    74,    74,    74,    90,
     217,    19,    91,    20,    92,    76,    38,    74,   274,    74,
      76,    73,    28,    69,    75,    73,    69,    81,    69,   239,
      74,    69,   242,    75,    79,    27,    76,    76,    75,    74,
      76,    75,    73,   299,   300,    71,    75,    75,    71,    76,
     306,    76,    76,   277,    74,   328,   280,   313,    75,   315,
     284,    76,    75,    75,    75,   272,    76,   277,    52,   279,
     280,     7,   121,   223,   284,   231,   346,    86,   198,   188,
     190,   288,   338,   290,   187,   191,   172,   303,   189,   242,
     346,   301,   348,   303,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    24,    25,    -1,   324,    -1,    -1,
      -1,   328,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    72,    -1,    24,
      25,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    38,    74,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,
      24,    25,    -1,    -1,    79,    -1,    -1,    82,    83,    84,
      85,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    24,    25,
      74,    -1,    -1,    -1,    -1,    79,    80,    -1,    82,    83,
      84,    85,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    84,    85,
      24,    25,    26,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    85,    24,    25,    26,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    37,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    24,    25,    80,    -1,
      82,    83,    84,    85,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    76,    24,    25,    -1,    -1,    -1,    82,    83,
      84,    85,    60,    61,    62,    63,    64,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    24,
      25,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    60,
      61,    62,    63,    64,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    74,    75,    24,    25,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    60,    61,    62,    63,    64,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    74,
      -1,    24,    25,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    60,    61,    62,    63,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    60,    61,    62,
      63,    64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    38,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    38,    72,    -1,
      74,    -1,    -1,    -1,    -1,    79,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    69,    -1,
      -1,    72,    -1,    -1,    75,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    69,    -1,    -1,
      72,    -1,    -1,    75,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    69,    40,    41,    72,
      -1,    74,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    44,    45,   102,   103,   104,   105,
     106,   107,   108,   117,   122,   128,    69,   109,    69,    69,
      69,    94,    94,     0,   104,   106,   105,   106,   107,    79,
     125,    38,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    71,    72,    78,    94,    96,
      97,    98,    99,   100,    74,    40,    41,    96,    70,    76,
      70,    76,   106,    24,    25,    26,    28,    29,    30,    32,
      39,    60,    61,    62,    63,    64,    67,    68,    69,    74,
      80,    82,    83,    84,    85,   108,   130,   131,   132,   133,
     134,   136,   137,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   159,
     160,   162,    74,    69,    73,    38,    72,    79,    97,   110,
     111,   113,   114,   129,   144,   156,    76,    78,    72,    97,
      98,    69,    75,   123,    79,    79,    76,    69,    77,   145,
     145,    74,    74,   125,    74,    74,    76,   156,   157,   158,
     156,   145,   145,   145,   145,    80,   131,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    24,    25,
      70,    72,    74,   161,    77,    86,    87,    82,    83,    22,
      23,    17,    18,    88,    89,    15,    16,    90,    91,    92,
      19,    20,    71,    78,    76,    75,    95,    96,    74,   156,
      64,    79,    97,   112,   115,   116,   129,   156,    74,    71,
      76,    72,    96,   114,   110,    73,    96,    74,    96,   101,
      71,    75,    37,   118,   119,   120,   121,   122,    38,   122,
     124,   126,   127,    76,   156,   156,    28,    76,   108,   138,
     162,   156,    71,    76,    75,   111,    69,   156,    75,   158,
     111,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   149,   149,   150,   151,   152,   153,   154,   144,
     110,   101,    71,    75,    75,   123,    73,    81,   112,    74,
      71,    80,   156,   111,    79,    76,    96,   101,    69,   101,
      69,    80,   119,   125,    69,    76,    76,    80,   127,    75,
      75,    74,    76,   139,   156,    76,    75,   157,    73,   125,
      75,    96,   101,   101,   125,    75,   115,    80,   156,   115,
      75,    80,   112,    75,    71,    96,    96,    76,    74,    76,
     125,   125,   156,   140,   162,    76,   125,   125,   101,   125,
      75,    80,    96,    76,    69,    95,    27,    75,    75,   125,
      75,    75,   125,   134,   135,    76,   125,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     107,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   115,   115,   115,   116,   117,   117,   117,   118,
     118,   119,   119,   120,   121,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   141,   141,
     142,   142,   142,   142,   143,   143,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   146,   146,   147,
     147,   147,   148,   148,   148,   149,   149,   149,   149,   149,
     150,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   157,   158,   158,   159,   159,   160,
     160,   160,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     4,     4,
       5,     1,     3,     5,     3,     2,     2,     2,     1,     1,
       1,     3,     1,     2,     3,     5,     1,     2,     1,     1,
       1,     4,     5,     6,     1,     3,     1,     3,     1,     4,
       1,     3,     2,     5,     4,     1,     3,     1,     2,     3,
       1,     4,     1,     1,     3,     3,     7,     7,     4,     1,
       2,     1,     1,     4,     2,     4,     5,     5,     6,     2,
       4,     5,     6,     3,     2,     1,     2,     2,     2,     2,
       4,     5,     5,     6,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     5,     7,     1,     1,     5,     5,
       7,     7,     2,     1,     1,     2,     1,     1,     2,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     4,     4,     3,     4,     1,     2,
       2,     2,     2,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 137 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1713 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 3:
#line 140 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = null;
  }
#line 1721 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 4:
#line 152 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1727 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 5:
#line 153 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1733 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 6:
#line 157 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1741 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 7:
#line 160 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1749 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 8:
#line 163 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1755 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 9:
#line 164 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1761 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 10:
#line 168 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1769 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 11:
#line 171 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1777 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 12:
#line 174 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1785 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 13:
#line 177 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1793 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 14:
#line 180 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1801 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 15:
#line 183 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1809 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 16:
#line 186 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT32;
  }
#line 1817 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 17:
#line 189 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1825 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 18:
#line 192 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1833 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 19:
#line 195 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1841 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 20:
#line 198 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1849 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 21:
#line 201 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_STRING;
  }
#line 1857 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 22:
#line 204 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1865 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 23:
#line 210 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_DEFINED, $1.val);
  }
#line 1873 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 24:
#line 213 "yacc/koala.y" /* yacc.c:1661  */
    {
    //$$ = new_type_info(TYPE_FUNC, $1);
  }
#line 1881 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 27:
#line 224 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1889 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 28:
#line 227 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1897 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 29:
#line 230 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1905 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 30:
#line 233 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1913 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 51:
#line 285 "yacc/koala.y" /* yacc.c:1661  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1921 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 52:
#line 288 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1929 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 53:
#line 291 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 1937 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 54:
#line 297 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1947 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 55:
#line 302 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 1957 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 58:
#line 315 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1963 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 59:
#line 316 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1969 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 60:
#line 317 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1975 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 70:
#line 339 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1981 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 71:
#line 340 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1987 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 72:
#line 341 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1993 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 73:
#line 342 "yacc/koala.y" /* yacc.c:1661  */
    {}
#line 1999 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 93:
#line 394 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("code block\n");
  }
#line 2007 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 107:
#line 431 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----statement\n");
  }
#line 2015 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 108:
#line 437 "yacc/koala.y" /* yacc.c:1661  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2024 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 130:
#line 517 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2032 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 131:
#line 520 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2040 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 132:
#line 523 "yacc/koala.y" /* yacc.c:1661  */
    {
    
  }
#line 2048 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 133:
#line 526 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2056 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 134:
#line 566 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2064 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 135:
#line 569 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2072 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 136:
#line 572 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2080 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 137:
#line 575 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = null;
  }
#line 2088 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 138:
#line 578 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2096 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 139:
#line 581 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2104 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 140:
#line 587 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2112 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 141:
#line 590 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2125 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 142:
#line 598 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2138 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 143:
#line 606 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2146 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 144:
#line 609 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2154 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 145:
#line 612 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2162 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 146:
#line 615 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2170 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 147:
#line 618 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2178 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 148:
#line 624 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2186 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 149:
#line 627 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2199 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 150:
#line 635 "yacc/koala.y" /* yacc.c:1661  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2212 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 151:
#line 643 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2220 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 152:
#line 646 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2228 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 153:
#line 649 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2236 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 154:
#line 652 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2244 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 155:
#line 658 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2252 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 156:
#line 661 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2260 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 157:
#line 664 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2268 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 158:
#line 667 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2276 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 159:
#line 673 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2284 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 160:
#line 676 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2292 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 161:
#line 679 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2300 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 162:
#line 685 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2308 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 163:
#line 688 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2316 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 164:
#line 691 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2324 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 165:
#line 697 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2332 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 166:
#line 700 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2340 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 167:
#line 703 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2348 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 168:
#line 706 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2356 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 169:
#line 709 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2364 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 170:
#line 715 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2372 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 171:
#line 718 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2380 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 172:
#line 721 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2388 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 173:
#line 727 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2396 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 174:
#line 730 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2404 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 175:
#line 736 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2412 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 176:
#line 739 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2420 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 177:
#line 745 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2428 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 178:
#line 748 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2436 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 179:
#line 754 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2444 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 180:
#line 757 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2452 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 181:
#line 763 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2460 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 182:
#line 766 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2468 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 183:
#line 772 "yacc/koala.y" /* yacc.c:1661  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2476 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 184:
#line 778 "yacc/koala.y" /* yacc.c:1661  */
    {
  }
#line 2483 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 202:
#line 815 "yacc/koala.y" /* yacc.c:1661  */
    {
    printf("----basic_expression\n");
    show_expr((yyvsp[0].expression));
    putchar('\n');
  }
#line 2493 "koala_yacc.c" /* yacc.c:1661  */
    break;

  case 203:
#line 820 "yacc/koala.y" /* yacc.c:1661  */
    {

  }
#line 2501 "koala_yacc.c" /* yacc.c:1661  */
    break;


#line 2505 "koala_yacc.c" /* yacc.c:1661  */
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
#line 827 "yacc/koala.y" /* yacc.c:1906  */


int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

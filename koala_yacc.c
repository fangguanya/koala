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
    PLUS_ASSGIN = 260,
    MINUS_ASSIGN = 261,
    TIMES_ASSIGN = 262,
    DIVIDE_ASSIGN = 263,
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
    ID = 326
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
  term_t term;
  trailer_t *trailer;
  anonymous_function_t *anonymous;
  array_object_t *array_object;
  compound_op_t compound_op;
  linked_list_t *member_declarations[2];
  struct {
    int type;
    union {
      variable_t *var;
      function_t *func;
    };
  } member_declaration;
  variable_t *variable;
  function_t *function;
  struct {
    string name;
    linked_list_t *parameter_list;
    linked_list_t *parameter_type_list;
    linked_list_t *return_type_list;
  } method_header;
  intf_func_proto_t *intf_func_proto;

#line 227 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  396

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
       2,     2,     2,    86,     2,     2,     2,    88,    91,     2,
      74,    73,    76,    83,    75,    84,    72,    87,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    78,
      89,    77,    90,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    92,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    93,    80,    85,     2,     2,     2,
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
       0,   211,   211,   214,   220,   224,   231,   234,   240,   243,
     246,   252,   255,   258,   261,   264,   267,   270,   273,   276,
     279,   282,   285,   288,   294,   298,   307,   311,   314,   319,
     326,   330,   337,   338,   339,   340,   341,   342,   343,   347,
     351,   352,   356,   357,   358,   362,   363,   367,   371,   375,
     379,   391,   396,   404,   408,   413,   421,   425,   432,   438,
     441,   448,   452,   461,   462,   466,   471,   475,   481,   490,
     502,   506,   513,   516,   522,   532,   537,   542,   547,   552,
     557,   562,   567,   575,   580,   585,   590,   598,   602,   609,
     613,   620,   628,   641,   645,   648,   653,   660,   664,   667,
     672,   680,   684,   690,   694,   701,   704,   710,   713,   716,
     719,   721,   724,   730,   733,   739,   740,   744,   745,   746,
     750,   754,   755,   756,   760,   761,   762,   766,   767,   771,
     775,   776,   777,   781,   784,   791,   795,   804,   807,   815,
     818,   821,   824,   828,   831,   834,   835,   836,   837,   838,
     842,   845,   848,   851,   854,   857,   863,   864,   868,   872,
     876,   883,   886,   889,   893,   896,   903,   907,   914,   917,
     920,   926,   929,   937,   945,   948,   951,   954,   960,   963,
     966,   969,   975,   978,   981,   987,   990,   993,   999,  1002,
    1005,  1008,  1011,  1017,  1020,  1023,  1029,  1032,  1038,  1041,
    1047,  1050,  1056,  1059,  1065,  1068,  1074,  1082,  1087,  1093,
    1097,  1105,  1108,  1111,  1114,  1117,  1120,  1123,  1126,  1129,
    1132,  1135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELLIPSIS", "TYPELESS_ASSIGN",
  "PLUS_ASSGIN", "MINUS_ASSIGN", "TIMES_ASSIGN", "DIVIDE_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "EQ", "NE", "GE", "LE", "AND",
  "OR", "NOT", "SHIFT_LEFT", "SHIFT_RIGHT", "INC", "DEC", "IF", "ELSE",
  "WHILE", "DO", "FOR", "IN", "SWITCH", "CASE", "BREAK", "FALLTHROUGH",
  "CONTINUE", "DEFAULT", "VAR", "FUNC", "RETURN", "STRUCT", "INTERFACE",
  "TYPE", "CONST", "PACKAGE", "IMPORT", "AS", "INT8", "INT16", "INT32",
  "INT64", "UINT8", "UINT16", "UINT32", "UINT64", "FLOAT32", "FLOAT64",
  "BOOL", "STRING", "ROOT_OBJECT", "DIMS", "SELF", "TOKEN_NIL",
  "TOKEN_TRUE", "TOKEN_FALSE", "INTEGER", "HEX", "OCT", "FLOAT",
  "STRING_LITERAL", "ID", "'.'", "')'", "'('", "','", "'*'", "'='", "';'",
  "'{'", "'}'", "'['", "']'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "$accept", "ModulePathName",
  "TypeNameList", "TypeName", "BaseType", "PrimitiveType", "ModuleType",
  "FunctionType", "ReturnTypeList", "CompileUnit", "PackageDeclaration",
  "ImportDeclarations", "ImportDeclaration", "Declarations", "Declaration",
  "ConstDeclaration", "VariableDeclaration", "VariableList",
  "VariableInitializerList", "VariableInitializer", "ArrayInitializerList",
  "SemiOrEmpty", "TypeDeclaration", "MemberDeclarations",
  "MemberDeclaration", "FieldDeclaration", "MethodDeclaration",
  "MethodDeclarationHeader1", "MethodDeclarationHeader2", "ParameterList",
  "InterfaceFunctionDeclarations", "InterfaceFunctionDeclaration",
  "FunctionDeclaration", "AnonymousFunctionDeclaration", "CodeBlock",
  "LocalVariableDeclsOrStatements", "LocalVariableDeclOrStatement",
  "Statement", "ExpressionStatement", "SelectionStatement", "IfStatement",
  "SwitchStatement", "IterationStatemnet", "ForInit", "ForExpr", "ForIncr",
  "JumpStatement", "ReturnStatement", "ExpressionList",
  "PrimaryExpression", "Term", "Literal", "DimExprs", "DimExpr",
  "TrailerList", "Trailer", "FunctionDeclarationList", "PostfixExpression",
  "UnaryExpression", "MultiplicativeExpression", "AdditiveExpression",
  "ShiftExpression", "RelationalExpression", "EqualityExpression",
  "AndExpression", "ExclusiveOrExpression", "InclusiveOrExpression",
  "LogicalAndExpression", "LogicalOrExpression", "Expression",
  "AssignmentExpression", "PostfixExpressionList", "CompoundOperator", YY_NULLPTR
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
     325,   326,    46,    41,    40,    44,    42,    61,    59,   123,
     125,    91,    93,    43,    45,   126,    33,    47,    37,    60,
      62,    38,    94,   124
};
# endif

#define YYPACT_NINF -280

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-280)))

#define YYTABLE_NINF -210

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     150,   -30,   -19,   -16,   -30,    10,    10,    25,   166,   166,
    -280,   115,  -280,  -280,  -280,  -280,  -280,  -280,   272,    56,
     983,   796,  -280,   -33,   -21,  -280,   166,   115,  -280,   115,
    -280,    59,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  1031,    27,    69,   484,   -12,
    -280,  -280,  -280,  -280,     4,    -1,    99,   103,   484,   120,
     132,  -280,  -280,   140,    40,  -280,   115,   880,  -280,   152,
    -280,   656,   656,   172,  1031,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,   656,   484,   656,   656,   656,   656,   656,
     178,   164,  -280,   185,  -280,  -280,    32,  -280,   729,  -280,
     167,  -280,   -41,   102,   184,     6,   215,   170,   171,   173,
     240,   245,  -280,   484,  -280,  1007,   763,    14,    -9,    -7,
    -280,   189,   484,  -280,   103,   103,   826,    91,  -280,  -280,
    -280,  -280,    34,   191,   198,    54,   195,  -280,  -280,  -280,
    -280,   163,  -280,   484,   208,   527,   656,    32,  -280,  1031,
     201,  -280,  -280,  -280,   656,   656,   656,   656,   656,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   656,
     656,   656,   203,  -280,  1007,   327,  -280,   205,  -280,   763,
     214,   216,   220,   853,    44,  -280,  -280,  -280,   205,   221,
     212,   217,   218,   -17,  -280,  -280,   222,  -280,  -280,  -280,
     826,  1007,   763,    95,   484,  -280,  -280,  -280,   225,  -280,
    -280,   223,   101,  -280,   211,  -280,   224,   484,  -280,  -280,
    -280,   -41,   -41,   102,   102,   184,   184,   184,   184,     6,
       6,   215,   170,   171,   173,   240,  -280,   104,   227,   231,
     205,   233,   234,   232,   237,   238,   570,  -280,  -280,  -280,
     390,  -280,  -280,   241,  -280,  -280,  -280,  -280,  -280,  -280,
     138,  -280,  -280,   125,  -280,   205,  -280,  1007,  1007,   260,
     146,   257,   103,  -280,  -280,   262,   906,  -280,  -280,   103,
    -280,  -280,  -280,  -280,   205,  -280,   763,    57,  -280,   273,
    -280,   656,  -280,   484,    61,  -280,   656,   656,   271,   441,
     656,  -280,  -280,  -280,  -280,   -38,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     484,   695,   484,  -280,  -280,   259,   147,   826,   161,  -280,
    -280,   932,   958,   162,  -280,  -280,   205,  -280,  -280,  -280,
     -11,  -280,    92,  -280,   265,   267,   274,  -280,  -280,   263,
     613,   277,  -280,  -280,   167,  -280,  -280,   826,   165,  -280,
     826,   168,   826,  -280,  -280,  -280,  -280,   205,   205,   656,
    -280,  -280,   656,   268,   205,  -280,   826,  -280,   826,  -280,
     318,  -280,   281,  -280,   291,  -280,  -280,  -280,  -280,    -5,
     290,   205,  -280,  -280,  -280,  -280
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
       6,     8,     9,    10,     0,     0,     0,    63,     0,     0,
       0,    64,    39,     0,     0,    42,    32,     0,     7,     0,
      57,     0,     0,     0,     0,   140,   153,   154,   155,   150,
     151,   152,   139,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    58,   144,   168,   137,   141,     0,   156,
     171,   178,   182,   185,   188,   193,   196,   198,   200,   202,
     204,   206,    59,     0,    53,     0,     0,     0,     0,     0,
      67,     0,     0,     3,    63,    63,    27,     0,     4,    24,
     172,   173,     0,     0,     0,     0,     0,   174,   175,   176,
     177,     0,    54,     0,     0,     0,     0,   138,   159,     0,
     145,   157,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    30,     0,    94,     0,
       0,     0,     0,     0,     0,    68,    70,    71,     0,     0,
       0,     0,     0,     0,    89,    51,     0,    43,    44,    26,
      29,     0,     0,     0,     0,   143,    60,   158,     0,    62,
     161,   164,     0,   135,     0,   160,   146,     0,   179,   180,
     181,   183,   184,   186,   187,   192,   191,   189,   190,   194,
     195,   197,   199,   201,   203,   205,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   105,   112,
       0,   103,   106,     0,   108,   115,   116,   109,   110,   111,
     171,   113,   114,     0,    93,     0,    96,     0,     0,     0,
       0,     0,    63,    69,    74,     0,     0,    91,    92,    63,
      90,    52,    28,     5,     0,    98,     0,     0,   142,     0,
     163,     0,   162,     0,     0,    31,     0,     0,     0,     0,
       0,   130,   131,   132,   133,     0,   101,   104,   107,   221,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
       0,     0,     0,    95,    88,     0,     0,    80,     0,    73,
      65,     0,    25,     0,    66,    97,     0,   100,   149,   166,
       0,   136,     0,   147,     0,     0,     0,   126,   125,     0,
       0,     0,   134,   208,   210,   207,    72,    76,     0,    79,
      82,     0,    86,    99,   165,   167,   148,     0,     0,     0,
     124,   128,     0,     0,     0,    75,    78,    81,    84,    85,
     117,   121,     0,   129,     0,   127,   120,    77,    83,     0,
       0,     0,   118,   119,   122,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -280,   363,  -158,   -14,   -26,   -18,  -280,  -280,   -88,  -280,
    -280,   362,    24,    76,     7,  -280,  -160,   367,   -46,  -130,
     -79,   -15,  -280,  -280,   188,  -280,  -280,  -105,  -280,   -53,
    -280,   180,  -272,  -280,   -85,  -280,   124,  -280,  -279,  -280,
       5,  -280,  -280,  -280,  -280,  -280,  -280,  -280,   149,  -280,
    -280,   258,  -280,   302,  -280,   255,  -280,  -164,   -28,    87,
      88,   -42,    90,   236,   249,   235,   239,   250,  -280,   -75,
    -280,  -280,  -280
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   127,   176,    50,    90,    52,    53,   177,     7,
       8,     9,    10,    11,    12,    13,    14,    18,    91,    92,
      93,    62,    15,   184,   185,   186,   187,   188,   192,   328,
     193,   194,    16,    94,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   350,   372,   384,   258,   259,   212,    95,
      96,    97,    98,    99,   147,   148,   340,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     262,   263,   320
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   117,    51,    51,    49,   135,    57,    59,   134,    65,
     136,   260,   121,   209,   191,   248,   237,   339,    30,    68,
     349,   238,   189,   161,   162,    25,    63,    51,     2,   181,
     182,   178,   189,    28,    30,   154,    30,   291,   199,    60,
     352,    17,   120,   130,   131,    61,   155,   156,   133,    51,
      28,    64,    19,   128,   190,    20,    51,    61,   137,   138,
     139,   140,   183,   279,   190,   113,   114,   172,   365,   364,
     213,   214,   150,    30,   175,   115,   196,   116,   118,   203,
      51,    22,   181,   182,    27,    29,   260,   179,   191,   180,
     248,   265,   264,   383,   266,   163,   164,    51,    51,    69,
     261,   173,    66,   274,   144,   115,   145,   202,    51,   197,
     198,   123,   282,   146,   284,   183,   125,   285,   333,   225,
     226,   227,   228,   216,   272,   287,   218,   219,   220,   143,
      54,    51,   143,    67,   206,   260,   143,   338,   294,   348,
      70,   343,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     1,     2,   298,    51,   354,     3,     4,
     128,    51,   152,   153,   200,    51,   201,   143,   286,   271,
     180,   213,   366,   361,   290,   261,   291,   295,   119,   201,
     323,    61,    51,    51,    51,   157,   158,   283,     1,     2,
     353,   152,   153,     3,     4,     5,     6,   122,   336,   335,
     321,   337,   322,   123,     1,     2,   159,   160,   260,     3,
       4,   124,     6,  -209,   342,  -209,   341,   115,   115,   327,
     357,   344,   345,   129,   261,   351,    76,    77,    78,    79,
     165,   166,    80,    81,   360,   362,   180,   201,   376,   359,
     180,   378,   142,   201,   221,   222,   132,   223,   224,    51,
      51,   363,   141,   324,   325,   229,   230,   330,    51,   170,
     143,   167,   128,   168,   334,   171,   169,   195,    51,   375,
     204,   205,   377,   358,   379,   373,   355,   207,   358,   210,
     217,   236,   380,   381,   175,   267,   276,   268,   387,   386,
     388,   269,   275,   292,   382,   277,   278,   261,   288,   346,
     281,   296,   289,   293,   392,   297,   395,   299,   300,    51,
     301,    31,     2,    51,    51,   302,   303,   128,   173,   308,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   326,   329,   331,   356,   367,    51,
     368,   370,    51,    46,    51,   389,   385,    47,   369,    48,
     374,    71,    72,   238,   390,   239,   240,   241,    51,   242,
      51,   243,   244,   245,   391,     1,    73,   246,   394,    24,
      26,    21,   273,   280,   307,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    74,    75,
      76,    77,    78,    79,   393,   305,    80,    81,    82,   208,
     151,    83,   215,   231,   233,     0,   175,   247,    85,   234,
      86,    87,    88,    89,    71,    72,   238,   232,   239,   240,
     241,   235,   242,     0,   243,   244,   245,     0,     1,    73,
     246,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,     0,     0,    83,    71,    72,     0,     0,   175,
     306,    85,     0,    86,    87,    88,    89,     0,     0,     1,
      73,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    74,    75,    76,    77,    78,    79,    71,    72,
      80,    81,    82,     0,     0,    83,     0,     0,     0,   347,
       0,     0,    85,    73,    86,    87,    88,    89,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    74,    75,    76,    77,    78,
      79,    71,    72,    80,    81,    82,     0,     0,    83,     0,
       0,     0,     0,    84,     0,    85,    73,    86,    87,    88,
      89,     0,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    74,    75,
      76,    77,    78,    79,    71,    72,    80,    81,    82,     0,
     211,    83,     0,     0,     0,     0,     0,     0,    85,    73,
      86,    87,    88,    89,     0,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,    71,    72,    80,
      81,    82,     0,     0,    83,     0,     0,     0,   304,     0,
       0,    85,    73,    86,    87,    88,    89,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    74,    75,    76,    77,    78,    79,
      71,    72,    80,    81,    82,     0,     0,    83,     0,     0,
       0,   371,     0,     0,    85,    73,    86,    87,    88,    89,
       0,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,     0,     0,
      83,     0,     0,     0,    73,     0,     0,    85,     0,    86,
      87,    88,    89,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    74,    75,    76,    77,
      78,    79,     0,     0,    80,    81,    82,     0,    31,    83,
       0,     0,     0,     0,     0,     0,    85,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,    31,     0,     0,     0,     0,     0,     0,     0,
      85,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    31,     0,   174,     0,     0,
       0,     0,   175,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    46,     0,     0,
       0,    47,     0,    58,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    31,     0,     0,     0,     0,    46,     0,     0,
     174,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,    31,
       0,     0,     0,     0,    46,     0,     0,   270,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,     0,    31,     0,     0,     0,     0,
       0,    46,     0,   126,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,    31,     0,     0,     0,     0,     0,   332,     0,   327,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,     0,     0,    31,     0,     0,
       0,     0,     0,   332,     0,   357,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,    31,     0,    55,    56,     0,     0,     0,    46,
      69,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,    31,     0,     0,     0,
       0,     0,     0,     0,    46,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    46,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      18,    54,    20,    21,    18,    84,    20,    21,    83,    24,
      85,   175,    58,   143,   119,   175,   174,   289,    11,    45,
     299,    26,    39,    17,    18,     0,    47,    45,    39,    38,
      39,   116,    39,     9,    27,    76,    29,    75,   126,    72,
      78,    71,    57,    71,    72,    78,    87,    88,    74,    67,
      26,    72,    71,    67,    71,    71,    74,    78,    86,    87,
      88,    89,    71,    80,    71,    77,    78,   113,   340,    80,
     145,   146,    98,    66,    79,    71,   122,    73,    79,   132,
      98,    71,    38,    39,     8,     9,   250,    73,   193,    75,
     250,   179,   177,   372,   179,    89,    90,   115,   116,    72,
     175,   115,    26,   188,    72,    71,    74,    73,   126,   124,
     125,    71,   200,    81,   202,    71,    76,   202,   276,   161,
     162,   163,   164,   149,    80,   204,   154,   155,   156,    75,
      74,   149,    75,    74,    80,   299,    75,    80,   217,   299,
      71,    80,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    38,    39,   240,   174,   321,    43,    44,
     174,   179,    24,    25,    73,   183,    75,    75,    73,   183,
      75,   246,    80,   331,    73,   250,    75,    73,    79,    75,
     265,    78,   200,   201,   202,    83,    84,   201,    38,    39,
     320,    24,    25,    43,    44,    45,    46,    77,   286,   284,
      75,   286,    77,    71,    38,    39,    22,    23,   372,    43,
      44,    71,    46,    75,   293,    77,   291,    71,    71,    73,
      73,   296,   297,    71,   299,   300,    63,    64,    65,    66,
      15,    16,    69,    70,    73,    73,    75,    75,    73,   327,
      75,    73,    78,    75,   157,   158,    74,   159,   160,   267,
     268,   336,    74,   267,   268,   165,   166,   272,   276,    19,
      75,    91,   276,    92,   279,    20,    93,    78,   286,   357,
      79,    73,   360,   326,   362,   350,   322,    82,   331,    71,
      79,    78,   367,   368,    79,    71,    74,    71,   376,   374,
     378,    71,    71,    82,   369,    78,    78,   372,    73,    28,
      78,    74,    79,    79,   389,    74,   391,    74,    74,   327,
      78,    39,    39,   331,   332,    78,    78,   331,   332,    78,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    74,    78,    74,    78,    73,   357,
      73,    78,   360,    71,   362,    27,    78,    75,    74,    77,
      73,    24,    25,    26,    73,    28,    29,    30,   376,    32,
     378,    34,    35,    36,    73,    38,    39,    40,    78,     6,
       8,     4,   184,   193,   250,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   389,   246,    69,    70,    71,   141,
      98,    74,   147,   167,   169,    -1,    79,    80,    81,   170,
      83,    84,    85,    86,    24,    25,    26,   168,    28,    29,
      30,   171,    32,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    24,    25,    -1,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    24,    25,
      69,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    -1,    81,    39,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    24,    25,    69,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    39,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    24,    25,    69,    70,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    39,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    24,    25,    69,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,
      -1,    81,    39,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      24,    25,    69,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    81,    39,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    39,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    39,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    39,    -1,    74,    -1,    -1,
      -1,    -1,    79,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    71,    -1,    -1,
      -1,    75,    -1,    77,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,    71,
      72,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    43,    44,    45,    46,   103,   104,   105,
     106,   107,   108,   109,   110,   116,   126,    71,   111,    71,
      71,   111,    71,    95,    95,     0,   105,   107,   106,   107,
     108,    39,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    71,    75,    77,    97,
      98,    99,   100,   101,    74,    41,    42,    97,    77,    97,
      72,    78,   115,    47,    72,   115,   107,    74,    98,    72,
      71,    24,    25,    39,    61,    62,    63,    64,    65,    66,
      69,    70,    71,    74,    79,    81,    83,    84,    85,    86,
      99,   112,   113,   114,   127,   143,   144,   145,   146,   147,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    77,    78,    71,    73,   123,    79,    79,
     115,   112,    77,    71,    71,    76,    73,    96,    97,    71,
     152,   152,    74,    98,   163,   114,   163,   152,   152,   152,
     152,    74,    78,    75,    72,    74,    81,   148,   149,    61,
      98,   147,    24,    25,    76,    87,    88,    83,    84,    22,
      23,    17,    18,    89,    90,    15,    16,    91,    92,    93,
      19,    20,   112,    97,    74,    79,    97,   102,   128,    73,
      75,    38,    39,    71,   117,   118,   119,   120,   121,    39,
      71,   121,   122,   124,   125,    78,   112,   115,   115,   102,
      73,    75,    73,   123,    79,    73,    80,    82,   145,   113,
      71,    73,   142,   163,   163,   149,    98,    79,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   155,   155,   156,
     156,   157,   158,   159,   160,   161,    78,    96,    26,    28,
      29,    30,    32,    34,    35,    36,    40,    80,   110,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   140,   141,
     151,   163,   164,   165,   128,   102,   128,    71,    71,    71,
      74,    97,    80,   118,   128,    71,    74,    78,    78,    80,
     125,    78,   102,    97,   102,   128,    73,   114,    73,    79,
      73,    75,    82,    79,   114,    73,    74,    74,   128,    74,
      74,    78,    78,    78,    78,   142,    80,   130,    78,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     166,    75,    77,   128,    97,    97,    74,    73,   123,    78,
     115,    74,    71,    96,   115,   128,   102,   128,    80,   126,
     150,   163,   114,    80,   163,   163,    28,    78,   110,   132,
     137,   163,    78,   113,   151,   112,    78,    73,   123,   102,
      73,    96,    73,   128,    80,   126,    80,    73,    73,    74,
      78,    78,   138,   163,    73,   102,    73,   102,    73,   102,
     128,   128,   163,   132,   139,    78,   128,   102,   102,    27,
      73,    73,   128,   134,    78,   128
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   104,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   108,
     108,   109,   109,   110,   110,   110,   111,   111,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   136,   136,   136,   137,   137,   137,   138,   138,   139,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   145,   146,   146,   147,   148,
     148,   149,   149,   149,   149,   149,   150,   150,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   153,   153,
     153,   153,   154,   154,   154,   155,   155,   155,   156,   156,
     156,   156,   156,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   164,   164,   165,
     165,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166
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
       1,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       5,     5,     7,     7,     2,     1,     1,     2,     1,     1,
       2,     2,     2,     2,     3,     1,     3,     1,     2,     1,
       1,     1,     4,     3,     1,     2,     3,     5,     6,     5,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       2,     2,     3,     3,     2,     5,     1,     2,     1,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 211 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1775 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 214 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1783 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 220 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 1792 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 224 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].name_type));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 1801 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 231 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type(0, (yyvsp[0].base_type));
  }
#line 1809 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 234 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type((yyvsp[-1].dims), (yyvsp[0].base_type));
  }
#line 1817 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 240 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = primitive_type((yyvsp[0].primitive_type));
  }
#line 1825 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 243 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = module_type((yyvsp[0].string_array_2));
  }
#line 1833 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 246 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = (yyvsp[0].base_type);
  }
#line 1841 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 252 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1849 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 255 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 258 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1865 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 261 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1873 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 264 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1881 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 267 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1889 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 270 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1897 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 273 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1905 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 276 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1913 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 279 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1921 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 282 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1929 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 285 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1937 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 288 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_ROOT_OBJECT;
  }
#line 1945 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 294 "yacc/koala.y" /* yacc.c:1646  */
    {
    //outf("Module:%s, TypeName:%s\n", $1.val, $3.val);
    (yyval.string_array_2)[0] = (yyvsp[-2].ident); (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1954 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 298 "yacc/koala.y" /* yacc.c:1646  */
    {
    //outf("TypeName:%s\n", $1.val);
    (yyval.string_array_2)[0].val = null;
    (yyval.string_array_2)[0].len = 0;
    (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1965 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 307 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type(null, (yyvsp[0].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 1974 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 311 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type(null, null);
  }
#line 1982 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 314 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 1992 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 319 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type((yyvsp[-1].linked_list), null);
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2001 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 326 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 2010 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 330 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2018 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 367 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2027 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 371 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2036 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 375 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2045 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 379 "yacc/koala.y" /* yacc.c:1646  */
    {
    outs("FunctionDeclaration\n");
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2055 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 391 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-3].linked_list), null, (yyvsp[-1].linked_list), true);
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2065 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 396 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-4].linked_list), (yyvsp[-3].name_type), (yyvsp[-1].linked_list), true);
    free_linked_list((yyvsp[-4].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2075 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 404 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-2].linked_list), (yyvsp[-1].name_type), null, false);
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2084 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 408 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-3].linked_list), null, (yyvsp[-1].linked_list), false);
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 413 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-4].linked_list), (yyvsp[-3].name_type), (yyvsp[-1].linked_list), false);
    free_linked_list((yyvsp[-4].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2104 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 421 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[0].ident), null));
  }
#line 2113 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 425 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), new_variable((yyvsp[0].ident), null));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2122 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 432 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[0].linked_list);
  }
#line 2130 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 438 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2138 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 441 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2147 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 448 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2156 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 452 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2165 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 466 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_type_struct((yyvsp[-5].ident), (yyvsp[-2].member_declarations)[0], (yyvsp[-2].member_declarations)[1]);
    free_linked_list((yyvsp[-2].member_declarations)[0]);
    free_linked_list((yyvsp[-2].member_declarations)[1]);
  }
#line 2175 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 471 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_type_interface((yyvsp[-5].ident), (yyvsp[-2].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2184 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 475 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_type_redef((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2192 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 481 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declarations)[0] = new_linked_list();
    (yyval.member_declarations)[1] = new_linked_list();
    if ((yyvsp[0].member_declaration).type == 1) {
      linked_list_add_tail((yyval.member_declarations)[0], (yyvsp[0].member_declaration).var);
    } else {
      linked_list_add_tail((yyval.member_declarations)[1], (yyvsp[0].member_declaration).func);
    }
  }
#line 2206 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 490 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].member_declaration).type == 1) {
      linked_list_add_tail((yyvsp[-1].member_declarations)[0], (yyvsp[0].member_declaration).var);
    } else {
      linked_list_add_tail((yyvsp[-1].member_declarations)[1], (yyvsp[0].member_declaration).func);
    }
    (yyval.member_declarations)[0] = (yyvsp[-1].member_declarations)[0];
    (yyval.member_declarations)[1] = (yyvsp[-1].member_declarations)[1];
  }
#line 2220 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 502 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declaration).type = 1;
    (yyval.member_declaration).var = (yyvsp[0].variable);
  }
#line 2229 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 506 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declaration).type = 2;
    (yyval.member_declaration).func = (yyvsp[0].function);
  }
#line 2238 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 513 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.variable) = new_variable((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2246 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 516 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.variable) = new_variable((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2254 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 522 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.function) = new_method((yyvsp[-1].method_header).name, (yyvsp[-1].method_header).parameter_list, (yyvsp[-1].method_header).return_type_list, (yyvsp[0].expr));
    if ((yyvsp[-1].method_header).parameter_list != null)
      free_linked_list((yyvsp[-1].method_header).parameter_list);
    if ((yyvsp[-1].method_header).return_type_list != null)
      free_linked_list((yyvsp[-1].method_header).return_type_list);
  }
#line 2266 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 532 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2276 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 537 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-2].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = null;
  }
#line 2286 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 542 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2296 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 547 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2306 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 552 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2316 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 557 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-2].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = null;
  }
#line 2326 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 81:
#line 562 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2336 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 567 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2346 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 575 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2356 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 84:
#line 580 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2366 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 85:
#line 585 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2376 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 86:
#line 590 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2386 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 598 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
  }
#line 2395 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 602 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-3].linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
    (yyval.linked_list) = (yyvsp[-3].linked_list);
  }
#line 2404 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 609 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].intf_func_proto));
  }
#line 2413 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 90:
#line 613 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].intf_func_proto));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2422 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 91:
#line 620 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.intf_func_proto) = new_intf_func_proto((yyvsp[-1].method_header).name,
                             (yyvsp[-1].method_header).parameter_list,
                             null,
                             (yyvsp[-1].method_header).return_type_list);
    free_linked_list((yyvsp[-1].method_header).parameter_list);
    free_linked_list((yyvsp[-1].method_header).return_type_list);
  }
#line 2435 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 92:
#line 628 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.intf_func_proto) = new_intf_func_proto((yyvsp[-1].method_header).name,
                             null,
                             (yyvsp[-1].method_header).parameter_type_list,
                             (yyvsp[-1].method_header).return_type_list);
    free_linked_list((yyvsp[-1].method_header).parameter_type_list);
    free_linked_list((yyvsp[-1].method_header).return_type_list);
  }
#line 2448 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 93:
#line 641 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-4].ident), null, (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2457 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 94:
#line 645 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-3].ident), null, null, (yyvsp[0].expr));
  }
#line 2465 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 95:
#line 648 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-5].ident), (yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2475 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 96:
#line 653 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-4].ident), (yyvsp[-2].linked_list), null, (yyvsp[0].expr));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2484 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 660 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2493 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 664 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, null, (yyvsp[0].expr));
  }
#line 2501 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 667 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2511 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 672 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-2].linked_list), null, (yyvsp[0].expr));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2520 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 680 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2529 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 684 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq(null);
  }
#line 2537 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 690 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2546 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 694 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2555 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 701 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2563 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 704 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2571 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 710 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2579 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 713 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2587 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 716 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2595 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 719 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2602 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 721 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2610 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 724 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2618 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 730 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2626 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 733 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2634 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 781 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_return(null);
  }
#line 2642 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 784 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_return((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2651 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 791 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2660 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 795 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2669 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 804 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2677 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 807 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
    LINKED_LIST_MERGE_TAIL(&(yyval.expr)->term.trailer_list, (yyvsp[0].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 2687 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 815 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_id((yyvsp[0].ident));
  }
#line 2695 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 818 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_self();
  }
#line 2703 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 821 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2711 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 824 "yacc/koala.y" /* yacc.c:1646  */
    {
    check_primitive_type((yyvsp[-3].primitive_type), (yyvsp[-1].expr)->term);
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2720 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 828 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_exp((yyvsp[-1].expr));
  }
#line 2728 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 831 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_anonymous((yyvsp[0].anonymous));
  }
#line 2736 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 834 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2742 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 835 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2748 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 836 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2754 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 837 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2760 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 838 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2766 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 842 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_uint((yyvsp[0].ival));
  }
#line 2774 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 845 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_float((yyvsp[0].fval));
  }
#line 2782 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 848 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_string((yyvsp[0].string_literal));
  }
#line 2790 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 851 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_null();
  }
#line 2798 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 854 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_bool(true);
  }
#line 2806 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 857 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_bool(false);
  }
#line 2814 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 872 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].trailer));
  }
#line 2823 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 876 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].trailer));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2832 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 883 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_field_access((yyvsp[0].ident));
  }
#line 2840 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 886 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_array_access((yyvsp[-1].expr));
  }
#line 2848 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 889 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2857 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 893 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call(null);
  }
#line 2865 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 896 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_interface_implementation();
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2874 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 903 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2883 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 907 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2892 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 914 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2900 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 917 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_INC_AFTER, (yyvsp[-1].expr));
  }
#line 2908 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 920 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_DEC_AFTER, (yyvsp[-1].expr));
  }
#line 2916 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 926 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2924 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 929 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_INC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 2937 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 937 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_DEC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 2950 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 945 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2958 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 948 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_MINUS, (yyvsp[0].expr));
  }
#line 2966 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 951 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_BNOT, (yyvsp[0].expr));
  }
#line 2974 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 954 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_LNOT, (yyvsp[0].expr));
  }
#line 2982 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 960 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2990 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 963 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_TIMES, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2998 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 966 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_DIVIDE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3006 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 969 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MOD, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3014 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 975 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3022 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 978 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_PLUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3030 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 981 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MINUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3038 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 987 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3046 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 990 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3054 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 993 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_RSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3062 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 999 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3070 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1002 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3078 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1005 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3086 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1008 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1011 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3102 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1017 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3110 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1020 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_EQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3118 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1023 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3126 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1029 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3134 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1032 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3142 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1038 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3150 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1041 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BXOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3158 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1047 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3166 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1050 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3174 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1056 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3182 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1059 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3190 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1065 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3198 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1068 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3206 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1074 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3214 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1082 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_assign_list((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 3224 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1087 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_compound_assign((yyvsp[-1].compound_op), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3232 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1093 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 3241 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1097 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 3250 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1105 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_PLUS_ASSIGN;
  }
#line 3258 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1108 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_MINUS_ASSIGN;
  }
#line 3266 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1111 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_TIMES_ASSIGN;
  }
#line 3274 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1114 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_DIVIDE_ASSIGN;
  }
#line 3282 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1117 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_MOD_ASSIGN;
  }
#line 3290 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1120 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_AND_ASSIGN;
  }
#line 3298 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1123 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_OR_ASSIGN;
  }
#line 3306 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1126 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_XOR_ASSIGN;
  }
#line 3314 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1129 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_RIGHT_SHIFT_ASSIGN;
  }
#line 3322 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1132 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_LEFT_SHIFT_ASSIGN;
  }
#line 3330 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1135 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_TYPELESS_ASSIGN;
  }
#line 3338 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 3342 "koala_yacc.c" /* yacc.c:1646  */
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
#line 1142 "yacc/koala.y" /* yacc.c:1906  */


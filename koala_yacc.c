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
    linked_list_t *return_type_list;
  } method_header_1;
  struct {
    string name;
    linked_list_t *parameter_type_list;
    linked_list_t *return_type_list;
  } method_header_2;

#line 230 "koala_yacc.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 245 "koala_yacc.c" /* yacc.c:358  */

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
#define YYLAST   1133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  402

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
       0,   210,   210,   213,   219,   223,   230,   233,   239,   242,
     245,   251,   254,   257,   260,   263,   266,   269,   272,   275,
     278,   281,   284,   287,   293,   297,   306,   310,   313,   318,
     325,   329,   336,   337,   338,   339,   340,   341,   342,   346,
     350,   351,   355,   356,   357,   361,   362,   366,   370,   374,
     378,   389,   394,   402,   406,   411,   419,   423,   430,   436,
     439,   446,   450,   459,   460,   464,   469,   470,   473,   474,
     480,   489,   501,   505,   512,   515,   521,   531,   536,   541,
     546,   551,   556,   561,   566,   574,   579,   584,   589,   597,
     601,   608,   609,   613,   614,   620,   624,   627,   632,   639,
     643,   646,   651,   659,   663,   669,   673,   680,   683,   689,
     692,   695,   698,   700,   703,   709,   712,   718,   719,   723,
     724,   725,   729,   733,   734,   735,   739,   740,   741,   745,
     746,   750,   754,   755,   756,   760,   763,   770,   774,   783,
     786,   794,   797,   800,   803,   807,   810,   813,   814,   815,
     816,   817,   821,   824,   827,   830,   833,   836,   842,   843,
     847,   851,   855,   862,   865,   868,   872,   875,   882,   886,
     893,   896,   899,   905,   908,   916,   924,   927,   930,   933,
     939,   942,   945,   948,   954,   957,   960,   966,   969,   972,
     978,   981,   984,   987,   990,   996,   999,  1002,  1008,  1011,
    1017,  1020,  1026,  1029,  1035,  1038,  1044,  1047,  1053,  1061,
    1066,  1072,  1076,  1084,  1087,  1090,  1093,  1096,  1099,  1102,
    1105,  1108,  1111,  1114
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

#define YYPACT_NINF -283

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-283)))

#define YYTABLE_NINF -212

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      91,   -45,   -29,   -20,   -45,   -16,   -16,    65,   104,   104,
    -283,   136,  -283,  -283,  -283,  -283,  -283,  -283,   821,    32,
    1038,   851,  -283,   -15,   -12,  -283,   104,   136,  -283,   136,
    -283,    58,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,   303,    72,    39,   509,    90,
    -283,  -283,  -283,  -283,    17,    59,    85,   117,   509,    99,
     131,  -283,  -283,   142,    -9,  -283,   136,   935,  -283,   152,
    -283,   681,   681,   153,   303,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,   681,   509,   681,   681,   681,   681,   681,
     158,   159,  -283,   163,  -283,  -283,   -34,  -283,   754,  -283,
     147,  -283,   -54,    98,   165,    13,   206,   148,   149,   150,
     221,   224,  -283,   509,  -283,  1062,   788,    43,    36,    38,
    -283,   168,   509,  -283,   170,   170,   881,    66,  -283,  -283,
    -283,  -283,    78,   171,   176,     7,   172,  -283,  -283,  -283,
    -283,   127,  -283,   509,   181,   552,   681,   -34,  -283,   303,
     177,  -283,  -283,  -283,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   186,  -283,  1062,   352,  -283,   180,  -283,   788,
     196,   189,   199,   200,   908,    46,  -283,  -283,  -283,   180,
     194,   204,   202,   201,   205,   -21,  -283,  -283,   207,  -283,
    -283,  -283,   881,  1062,   788,    79,   509,  -283,  -283,  -283,
     209,  -283,  -283,   208,    80,  -283,   198,  -283,   212,   509,
    -283,  -283,  -283,   -54,   -54,    98,    98,   165,   165,   165,
     165,    13,    13,   206,   148,   149,   150,   221,  -283,    84,
     214,   218,   180,   219,   220,   217,   223,   226,   595,  -283,
    -283,  -283,   415,  -283,  -283,   227,  -283,  -283,  -283,  -283,
    -283,  -283,   322,  -283,  -283,    88,  -283,   180,  -283,  1062,
     170,  1062,   225,   132,   228,   170,  -283,  -283,   170,   233,
     961,  -283,  -283,   170,  -283,  -283,  -283,  -283,   180,  -283,
     788,    24,  -283,   247,  -283,   681,  -283,   509,    44,  -283,
     681,   681,   269,   466,   681,  -283,  -283,  -283,  -283,    50,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,   509,   720,   509,  -283,  -283,  -283,
     230,   137,   881,   134,  -283,  -283,  -283,   987,  1013,   139,
    -283,  -283,   180,  -283,  -283,  -283,   -19,  -283,    47,  -283,
     229,   236,   238,  -283,  -283,   232,   638,   242,  -283,  -283,
     147,  -283,  -283,   881,   143,  -283,   881,   144,   881,  -283,
    -283,  -283,  -283,   180,   180,   681,  -283,  -283,   681,   239,
     180,  -283,   881,  -283,   881,  -283,   271,  -283,   243,  -283,
     245,  -283,  -283,  -283,  -283,    -3,   244,   180,  -283,  -283,
    -283,  -283
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
      57,     0,     0,     0,     0,   142,   155,   156,   157,   152,
     153,   154,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    58,   146,   170,   139,   143,     0,   158,
     173,   180,   184,   187,   190,   195,   198,   200,   202,   204,
     206,   208,    59,     0,    53,     0,     0,     0,     0,     0,
      69,     0,     0,     3,    63,    63,    27,     0,     4,    24,
     174,   175,     0,     0,     0,     0,     0,   176,   177,   178,
     179,     0,    54,     0,     0,     0,     0,   140,   161,     0,
     147,   159,   171,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,    30,     0,    96,     0,
       0,     0,     0,     0,     0,     0,    70,    72,    73,     0,
       0,     0,     0,     0,     0,     0,    91,    51,     0,    43,
      44,    26,    29,     0,     0,     0,     0,   145,    60,   160,
       0,    62,   163,   166,     0,   137,     0,   162,   148,     0,
     181,   182,   183,   185,   186,   188,   189,   194,   193,   191,
     192,   196,   197,   199,   201,   203,   205,   207,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     107,   114,     0,   105,   108,     0,   110,   117,   118,   111,
     112,   113,   173,   115,   116,     0,    95,     0,    98,     0,
      63,     0,     0,     0,     0,    63,    71,    76,    63,     0,
       0,    93,    94,    63,    92,    52,    28,     5,     0,   100,
       0,     0,   144,     0,   165,     0,   164,     0,     0,    31,
       0,     0,     0,     0,     0,   132,   133,   134,   135,     0,
     103,   106,   109,   223,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,    97,    90,    66,
       0,     0,    82,     0,    75,    65,    68,     0,    25,     0,
      67,    99,     0,   102,   151,   168,     0,   138,     0,   149,
       0,     0,     0,   128,   127,     0,     0,     0,   136,   210,
     212,   209,    74,    78,     0,    81,    84,     0,    88,   101,
     167,   169,   150,     0,     0,     0,   126,   130,     0,     0,
       0,    77,    80,    83,    86,    87,   119,   123,     0,   131,
       0,   129,   122,    79,    85,     0,     0,     0,   120,   121,
     124,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,   315,  -159,   -14,   -26,   -18,  -283,  -283,  -121,  -283,
    -283,   317,    15,    60,    25,  -283,  -158,   333,   -49,  -130,
     -73,   -10,  -283,  -283,   154,  -283,  -283,  -103,  -283,   -53,
    -283,   145,  -268,  -283,   -84,  -283,    86,  -283,  -282,  -283,
     -52,  -283,  -283,  -283,  -283,  -283,  -283,  -283,    93,  -283,
    -283,   203,  -283,   251,  -283,   222,  -283,  -163,   -43,    73,
      74,    37,    70,   216,   197,   210,   215,   248,  -283,   -75,
    -283,  -283,  -283
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   127,   176,    50,    90,    52,    53,   177,     7,
       8,     9,    10,    11,    12,    13,    14,    18,    91,    92,
      93,    62,    15,   185,   186,   187,   188,   189,   194,   333,
     195,   196,    16,    94,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   356,   378,   390,   260,   261,   214,    95,
      96,    97,    98,    99,   147,   148,   346,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     264,   265,   324
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   117,    51,    51,    49,   201,    57,    59,   134,   121,
     136,   135,   262,   211,    65,   239,   193,   250,   191,    68,
       2,   355,   154,   240,    28,   345,    17,    51,   130,   131,
     161,   162,   178,   155,   156,    63,    30,   181,   144,   190,
     145,    28,    19,   137,   138,   139,   140,   146,   133,    51,
     192,    20,    30,   128,    30,    22,    51,    60,   267,   283,
      64,   370,   123,    61,   172,    25,    61,   125,    27,    29,
     215,   216,   150,   198,   182,   183,   175,   191,   371,   205,
      51,   286,   143,   288,   182,   183,    66,   208,   115,   262,
     116,    30,   193,   266,   250,   268,   389,    51,    51,   143,
     263,   173,   163,   164,   344,   277,    54,   184,    51,   192,
      70,   220,   221,   222,   199,   200,   179,   184,   180,   143,
     289,   339,   143,   218,   349,   295,   275,   372,   358,     1,
       2,    51,    67,   291,     3,     4,     5,     6,   118,   202,
     262,   203,     1,     2,    69,   354,   298,     3,     4,   115,
       6,   204,   290,   294,   180,   295,    51,   299,   302,   203,
     128,    51,   360,   325,   119,   326,    51,   113,   114,   342,
     274,   152,   153,   215,     1,     2,   122,   263,   367,     3,
       4,   157,   158,   327,    51,    51,    51,   159,   160,   287,
      76,    77,    78,    79,   359,   120,    80,    81,   227,   228,
     229,   230,   123,   115,   341,   332,   343,   366,   115,   180,
     363,   365,   368,   124,   203,   262,   382,   384,   180,   203,
     347,   165,   166,   129,   348,   350,   351,   132,   263,   357,
     223,   224,   141,   225,   226,   231,   232,   142,   143,   167,
     170,   168,   381,   169,   171,   383,   197,   385,    61,   207,
     206,    51,   212,    51,   209,   328,   219,   330,   369,   175,
     329,   393,    51,   394,   238,   335,   128,   269,   336,   270,
     271,   272,    51,   340,   278,   279,   280,   361,   364,   281,
     296,   379,   292,   282,   364,   285,     2,   293,   300,   386,
     387,   297,   301,   303,   304,   305,   392,   352,   395,   331,
     388,   306,   373,   263,   307,   312,   334,   337,   362,   374,
     376,   398,   375,   401,    51,   380,   396,   391,   397,    51,
      51,    24,   400,   128,   173,    26,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    21,   311,   276,
     284,   309,    31,   399,   210,    51,   152,   153,    51,   151,
      51,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    51,   234,    51,     0,     0,   217,
       0,     0,     0,     0,    46,     0,    71,    72,   240,   235,
     241,   242,   243,   233,   244,   236,   245,   246,   247,     0,
       1,    73,   248,     0,     0,     0,     0,  -211,     0,  -211,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    74,    75,    76,    77,    78,    79,   237,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
       0,   175,   249,    85,     0,    86,    87,    88,    89,    71,
      72,   240,     0,   241,   242,   243,     0,   244,     0,   245,
     246,   247,     0,     1,    73,   248,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    74,    75,    76,    77,
      78,    79,     0,     0,    80,    81,    82,     0,     0,    83,
      71,    72,     0,     0,   175,   310,    85,     0,    86,    87,
      88,    89,     0,     0,     1,    73,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    74,    75,    76,
      77,    78,    79,    71,    72,    80,    81,    82,     0,     0,
      83,     0,     0,     0,   353,     0,     0,    85,    73,    86,
      87,    88,    89,     0,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      74,    75,    76,    77,    78,    79,    71,    72,    80,    81,
      82,     0,     0,    83,     0,     0,     0,     0,    84,     0,
      85,    73,    86,    87,    88,    89,     0,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    74,    75,    76,    77,    78,    79,    71,
      72,    80,    81,    82,     0,   213,    83,     0,     0,     0,
       0,     0,     0,    85,    73,    86,    87,    88,    89,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    74,    75,    76,    77,
      78,    79,    71,    72,    80,    81,    82,     0,     0,    83,
       0,     0,     0,   308,     0,     0,    85,    73,    86,    87,
      88,    89,     0,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    74,
      75,    76,    77,    78,    79,    71,    72,    80,    81,    82,
       0,     0,    83,     0,     0,     0,   377,     0,     0,    85,
      73,    86,    87,    88,    89,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,     0,     0,    83,     0,     0,     0,    73,
       0,     0,    85,     0,    86,    87,    88,    89,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,     0,    31,    83,     0,     0,     0,     0,     0,
       0,    85,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    85,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      31,     0,   174,     0,     0,     0,     0,   175,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    46,     0,     0,     0,    47,     0,    48,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    46,     0,     0,     0,    47,     0,    58,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,    31,     0,     0,
       0,     0,    46,     0,     0,   174,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,    31,     0,     0,     0,     0,    46,
       0,     0,   273,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,     0,
      31,     0,     0,     0,     0,     0,    46,     0,   126,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,    31,     0,     0,     0,
       0,     0,   338,     0,   332,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
       0,     0,    31,     0,     0,     0,     0,     0,   338,     0,
     363,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,    31,     0,    55,
      56,     0,     0,     0,    46,    69,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    46,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      18,    54,    20,    21,    18,   126,    20,    21,    83,    58,
      85,    84,   175,   143,    24,   174,   119,   175,    39,    45,
      39,   303,    76,    26,     9,   293,    71,    45,    71,    72,
      17,    18,   116,    87,    88,    47,    11,     1,    72,     1,
      74,    26,    71,    86,    87,    88,    89,    81,    74,    67,
      71,    71,    27,    67,    29,    71,    74,    72,   179,    80,
      72,    80,    71,    78,   113,     0,    78,    76,     8,     9,
     145,   146,    98,   122,    38,    39,    79,    39,   346,   132,
      98,   202,    75,   204,    38,    39,    26,    80,    71,   252,
      73,    66,   195,   177,   252,   179,   378,   115,   116,    75,
     175,   115,    89,    90,    80,   189,    74,    71,   126,    71,
      71,   154,   155,   156,   124,   125,    73,    71,    75,    75,
     204,   280,    75,   149,    80,    75,    80,    80,    78,    38,
      39,   149,    74,   206,    43,    44,    45,    46,    79,    73,
     303,    75,    38,    39,    72,   303,   219,    43,    44,    71,
      46,    73,    73,    73,    75,    75,   174,    73,   242,    75,
     174,   179,   325,    75,    79,    77,   184,    77,    78,   290,
     184,    24,    25,   248,    38,    39,    77,   252,   337,    43,
      44,    83,    84,   267,   202,   203,   204,    22,    23,   203,
      63,    64,    65,    66,   324,    78,    69,    70,   161,   162,
     163,   164,    71,    71,   288,    73,   290,    73,    71,    75,
      73,   332,    73,    71,    75,   378,    73,    73,    75,    75,
     295,    15,    16,    71,   297,   300,   301,    74,   303,   304,
     157,   158,    74,   159,   160,   165,   166,    78,    75,    91,
      19,    92,   363,    93,    20,   366,    78,   368,    78,    73,
      79,   269,    71,   271,    82,   269,    79,   271,   342,    79,
     270,   382,   280,   384,    78,   275,   280,    71,   278,    80,
      71,    71,   290,   283,    80,    71,    74,   326,   331,    78,
      82,   356,    73,    78,   337,    78,    39,    79,    74,   373,
     374,    79,    74,    74,    74,    78,   380,    28,    27,    74,
     375,    78,    73,   378,    78,    78,    78,    74,    78,    73,
      78,   395,    74,   397,   332,    73,    73,    78,    73,   337,
     338,     6,    78,   337,   338,     8,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     4,   252,   185,
     195,   248,    39,   395,   141,   363,    24,    25,   366,    98,
     368,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   382,   168,   384,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    71,    -1,    24,    25,    26,   169,
      28,    29,    30,   167,    32,   170,    34,    35,    36,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    75,    -1,    77,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   171,
      -1,    69,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    83,    84,    85,    86,    24,
      25,    26,    -1,    28,    29,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      24,    25,    -1,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    24,    25,    69,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    -1,    81,    39,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    24,    25,    69,    70,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      81,    39,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    24,
      25,    69,    70,    71,    -1,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    39,    83,    84,    85,    86,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    24,    25,    69,    70,    71,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    81,    39,    83,    84,
      85,    86,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    24,    25,    69,    70,    71,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    81,
      39,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,    39,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    39,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      39,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    71,    -1,    -1,    -1,    75,    -1,    77,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    71,    -1,    -1,    -1,    75,    -1,    77,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    71,    72,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
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
      78,   112,    77,    71,    71,    76,    73,    96,    97,    71,
     152,   152,    74,    98,   163,   114,   163,   152,   152,   152,
     152,    74,    78,    75,    72,    74,    81,   148,   149,    61,
      98,   147,    24,    25,    76,    87,    88,    83,    84,    22,
      23,    17,    18,    89,    90,    15,    16,    91,    92,    93,
      19,    20,   112,    97,    74,    79,    97,   102,   128,    73,
      75,     1,    38,    39,    71,   117,   118,   119,   120,   121,
       1,    39,    71,   121,   122,   124,   125,    78,   112,   115,
     115,   102,    73,    75,    73,   123,    79,    73,    80,    82,
     145,   113,    71,    73,   142,   163,   163,   149,    98,    79,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     155,   156,   156,   157,   158,   159,   160,   161,    78,    96,
      26,    28,    29,    30,    32,    34,    35,    36,    40,    80,
     110,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     140,   141,   151,   163,   164,   165,   128,   102,   128,    71,
      80,    71,    71,    74,    97,    80,   118,   128,    80,    71,
      74,    78,    78,    80,   125,    78,   102,    97,   102,   128,
      73,   114,    73,    79,    73,    75,    82,    79,   114,    73,
      74,    74,   128,    74,    74,    78,    78,    78,    78,   142,
      80,   130,    78,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   166,    75,    77,   128,    97,   115,
      97,    74,    73,   123,    78,   115,   115,    74,    71,    96,
     115,   128,   102,   128,    80,   126,   150,   163,   114,    80,
     163,   163,    28,    78,   110,   132,   137,   163,    78,   113,
     151,   112,    78,    73,   123,   102,    73,    96,    73,   128,
      80,   126,    80,    73,    73,    74,    78,    78,   138,   163,
      73,   102,    73,   102,    73,   102,   128,   128,   163,   132,
     139,    78,   128,   102,   102,    27,    73,    73,   128,   134,
      78,   128
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
     113,   114,   114,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     127,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   135,   136,   136,   136,   137,   137,   137,   138,
     138,   139,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   146,   146,
     147,   148,   148,   149,   149,   149,   149,   149,   150,   150,
     151,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   154,   154,   154,   155,   155,   155,
     156,   156,   156,   156,   156,   157,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   164,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166
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
       3,     1,     3,     0,     1,     7,     7,     7,     7,     4,
       1,     2,     1,     1,     4,     3,     2,     5,     4,     6,
       5,     4,     3,     5,     4,     6,     5,     5,     4,     2,
       4,     1,     2,     2,     2,     6,     5,     7,     6,     5,
       4,     6,     5,     3,     2,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     5,     5,     7,     7,     2,     1,     1,     2,
       1,     1,     2,     2,     2,     2,     3,     1,     3,     1,
       2,     1,     1,     1,     4,     3,     1,     2,     3,     5,
       6,     5,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     2,     2,     3,     3,     2,     5,     1,     2,
       1,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
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
#line 210 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1787 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 213 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1795 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 219 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 1804 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 223 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].name_type));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 1813 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 230 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type(0, (yyvsp[0].base_type));
  }
#line 1821 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 233 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type((yyvsp[-1].dims), (yyvsp[0].base_type));
  }
#line 1829 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 239 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = primitive_type((yyvsp[0].primitive_type));
  }
#line 1837 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 242 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = module_type((yyvsp[0].string_array_2));
  }
#line 1845 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 245 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = (yyvsp[0].base_type);
  }
#line 1853 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 251 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1861 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 254 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1869 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 257 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1877 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 260 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1885 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 263 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1893 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 266 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1901 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 269 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1909 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 272 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1917 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 275 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1925 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 278 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1933 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 281 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1941 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 284 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1949 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 287 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_ROOT_OBJECT;
  }
#line 1957 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 293 "yacc/koala.y" /* yacc.c:1646  */
    {
    //outf("Module:%s, TypeName:%s\n", $1.val, $3.val);
    (yyval.string_array_2)[0] = (yyvsp[-2].ident); (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1966 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 297 "yacc/koala.y" /* yacc.c:1646  */
    {
    //outf("TypeName:%s\n", $1.val);
    (yyval.string_array_2)[0].val = null;
    (yyval.string_array_2)[0].len = 0;
    (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1977 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 306 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type(null, (yyvsp[0].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 1986 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 310 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type(null, null);
  }
#line 1994 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 313 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 2004 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 318 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type((yyvsp[-1].linked_list), null);
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2013 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 325 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 2022 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 329 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2030 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 366 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2039 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 370 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2048 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 374 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2057 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 378 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2066 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 389 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-3].linked_list), null, (yyvsp[-1].linked_list), true);
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2076 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 394 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-4].linked_list), (yyvsp[-3].name_type), (yyvsp[-1].linked_list), true);
    free_linked_list((yyvsp[-4].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2086 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 402 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-2].linked_list), (yyvsp[-1].name_type), null, false);
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2095 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 406 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-3].linked_list), null, (yyvsp[-1].linked_list), false);
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2105 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 411 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-4].linked_list), (yyvsp[-3].name_type), (yyvsp[-1].linked_list), false);
    free_linked_list((yyvsp[-4].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2115 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 419 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[0].ident), null));
  }
#line 2124 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 423 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), new_variable((yyvsp[0].ident), null));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2133 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 430 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[0].linked_list);
  }
#line 2141 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 436 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2149 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 439 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2158 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 446 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2167 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 450 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2176 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 464 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_type_struct((yyvsp[-5].ident), (yyvsp[-2].member_declarations)[0], (yyvsp[-2].member_declarations)[1]);
    free_linked_list((yyvsp[-2].member_declarations)[0]);
    free_linked_list((yyvsp[-2].member_declarations)[1]);
  }
#line 2186 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 469 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2192 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 470 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = new_exp_type_interface($2, $5[0], $5[1]);
  }
#line 2200 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 473 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2206 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 474 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = new_exp_type_redef();
  }
#line 2214 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 480 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declarations)[0] = new_linked_list();
    (yyval.member_declarations)[1] = new_linked_list();
    if ((yyvsp[0].member_declaration).type == 1) {
      linked_list_add_tail((yyval.member_declarations)[0], (yyvsp[0].member_declaration).var);
    } else {
      linked_list_add_tail((yyval.member_declarations)[1], (yyvsp[0].member_declaration).func);
    }
  }
#line 2228 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 489 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].member_declaration).type == 1) {
      linked_list_add_tail((yyvsp[-1].member_declarations)[0], (yyvsp[0].member_declaration).var);
    } else {
      linked_list_add_tail((yyvsp[-1].member_declarations)[1], (yyvsp[0].member_declaration).func);
    }
    (yyval.member_declarations)[0] = (yyvsp[-1].member_declarations)[0];
    (yyval.member_declarations)[1] = (yyvsp[-1].member_declarations)[1];
  }
#line 2242 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 501 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declaration).type = 1;
    (yyval.member_declaration).var = (yyvsp[0].variable);
  }
#line 2251 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 505 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declaration).type = 2;
    (yyval.member_declaration).func = (yyvsp[0].function);
  }
#line 2260 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 512 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.variable) = new_variable((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2268 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 515 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.variable) = new_variable((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2276 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 521 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.function) = new_method((yyvsp[-1].method_header_1).name, (yyvsp[-1].method_header_1).parameter_list, (yyvsp[-1].method_header_1).return_type_list, (yyvsp[0].expr));
    if ((yyvsp[-1].method_header_1).parameter_list != null)
      free_linked_list((yyvsp[-1].method_header_1).parameter_list);
    if ((yyvsp[-1].method_header_1).return_type_list != null)
      free_linked_list((yyvsp[-1].method_header_1).return_type_list);
  }
#line 2288 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 531 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-3].ident);
    (yyval.method_header_1).parameter_list = null;
    (yyval.method_header_1).return_type_list = (yyvsp[0].linked_list);
  }
#line 2298 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 536 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-2].ident);
    (yyval.method_header_1).parameter_list = null;
    (yyval.method_header_1).return_type_list = null;
  }
#line 2308 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 541 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-4].ident);
    (yyval.method_header_1).parameter_list = (yyvsp[-2].linked_list);
    (yyval.method_header_1).return_type_list = (yyvsp[0].linked_list);
  }
#line 2318 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 546 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-3].ident);
    (yyval.method_header_1).parameter_list = (yyvsp[-1].linked_list);
    (yyval.method_header_1).return_type_list = null;
  }
#line 2328 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 81:
#line 551 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-3].ident);
    (yyval.method_header_1).parameter_list = null;
    (yyval.method_header_1).return_type_list = (yyvsp[0].linked_list);
  }
#line 2338 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 556 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-2].ident);
    (yyval.method_header_1).parameter_list = null;
    (yyval.method_header_1).return_type_list = null;
  }
#line 2348 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 561 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-4].ident);
    (yyval.method_header_1).parameter_list = (yyvsp[-2].linked_list);
    (yyval.method_header_1).return_type_list = (yyvsp[0].linked_list);
  }
#line 2358 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 84:
#line 566 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_1).name = (yyvsp[-3].ident);
    (yyval.method_header_1).parameter_list = (yyvsp[-1].linked_list);
    (yyval.method_header_1).return_type_list = null;
  }
#line 2368 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 85:
#line 574 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_2).name = (yyvsp[-4].ident);
    (yyval.method_header_2).parameter_type_list = (yyvsp[-2].linked_list);
    (yyval.method_header_2).return_type_list = (yyvsp[0].linked_list);
  }
#line 2378 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 86:
#line 579 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_2).name = (yyvsp[-3].ident);
    (yyval.method_header_2).parameter_type_list = (yyvsp[-1].linked_list);
    (yyval.method_header_2).return_type_list = null;
  }
#line 2388 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 584 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_2).name = (yyvsp[-4].ident);
    (yyval.method_header_2).parameter_type_list = (yyvsp[-2].linked_list);
    (yyval.method_header_2).return_type_list = (yyvsp[0].linked_list);
  }
#line 2398 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 589 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header_2).name = (yyvsp[-3].ident);
    (yyval.method_header_2).parameter_type_list = (yyvsp[-1].linked_list);
    (yyval.method_header_2).return_type_list = null;
  }
#line 2408 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 597 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
  }
#line 2417 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 90:
#line 601 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-3].linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
    (yyval.linked_list) = (yyvsp[-3].linked_list);
  }
#line 2426 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 95:
#line 620 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-4].ident), null, (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2435 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 96:
#line 624 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-3].ident), null, null, (yyvsp[0].expr));
  }
#line 2443 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 627 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-5].ident), (yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2453 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 632 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-4].ident), (yyvsp[-2].linked_list), null, (yyvsp[0].expr));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2462 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 639 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2471 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 643 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, null, (yyvsp[0].expr));
  }
#line 2479 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 646 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2489 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 651 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-2].linked_list), null, (yyvsp[0].expr));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2498 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 659 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2507 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 663 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq(null);
  }
#line 2515 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 669 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2524 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 673 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2533 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 680 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2541 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 683 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2549 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 689 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2557 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 692 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2565 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 695 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2573 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 698 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2580 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 700 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2588 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 703 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2596 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 115:
#line 709 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2604 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 116:
#line 712 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2612 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 760 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_return(null);
  }
#line 2620 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 763 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_return((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2629 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 770 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2638 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 774 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2647 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 783 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2655 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 786 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
    LINKED_LIST_MERGE_TAIL(&(yyval.expr)->term.trailer_list, (yyvsp[0].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 2665 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 794 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_id((yyvsp[0].ident));
  }
#line 2673 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 797 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_self();
  }
#line 2681 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 800 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2689 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 803 "yacc/koala.y" /* yacc.c:1646  */
    {
    check_primitive_type((yyvsp[-3].primitive_type), (yyvsp[-1].expr)->term);
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2698 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 807 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_exp((yyvsp[-1].expr));
  }
#line 2706 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 810 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_anonymous((yyvsp[0].anonymous));
  }
#line 2714 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 813 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2720 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 814 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2726 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 815 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2732 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 816 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2738 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 817 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2744 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 821 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_uint((yyvsp[0].ival));
  }
#line 2752 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 824 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_float((yyvsp[0].fval));
  }
#line 2760 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 827 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_string((yyvsp[0].string_literal));
  }
#line 2768 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 830 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_null();
  }
#line 2776 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 833 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_bool(true);
  }
#line 2784 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 836 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_bool(false);
  }
#line 2792 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 851 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].trailer));
  }
#line 2801 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 855 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].trailer));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2810 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 862 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_field_access((yyvsp[0].ident));
  }
#line 2818 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 865 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_array_access((yyvsp[-1].expr));
  }
#line 2826 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 868 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2835 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 872 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call(null);
  }
#line 2843 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 875 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_interface_implementation();
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2852 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 882 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2861 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 886 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2870 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 893 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2878 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 896 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_INC_AFTER, (yyvsp[-1].expr));
  }
#line 2886 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 899 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_DEC_AFTER, (yyvsp[-1].expr));
  }
#line 2894 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 905 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2902 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 908 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_INC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 2915 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 916 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_DEC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 2928 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 924 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2936 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 927 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_MINUS, (yyvsp[0].expr));
  }
#line 2944 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 930 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_BNOT, (yyvsp[0].expr));
  }
#line 2952 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 933 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_LNOT, (yyvsp[0].expr));
  }
#line 2960 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 939 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2968 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 942 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_TIMES, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2976 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 945 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_DIVIDE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2984 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 948 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MOD, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 2992 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 954 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3000 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 957 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_PLUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3008 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 960 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MINUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3016 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 966 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3024 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 969 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3032 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 972 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_RSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3040 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 978 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3048 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 981 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3056 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 984 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3064 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 987 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3072 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 990 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3080 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 996 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3088 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 999 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_EQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3096 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1002 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3104 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1008 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3112 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1011 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3120 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1017 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3128 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1020 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BXOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3136 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1026 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3144 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1029 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3152 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1035 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3160 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1038 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3168 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1044 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3176 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1047 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3184 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1053 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3192 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1061 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_assign_list((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 3202 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1066 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_compound_assign((yyvsp[-1].compound_op), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3210 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1072 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 3219 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1076 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 3228 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1084 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_PLUS_ASSIGN;
  }
#line 3236 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1087 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_MINUS_ASSIGN;
  }
#line 3244 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1090 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_TIMES_ASSIGN;
  }
#line 3252 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1093 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_DIVIDE_ASSIGN;
  }
#line 3260 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1096 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_MOD_ASSIGN;
  }
#line 3268 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1099 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_AND_ASSIGN;
  }
#line 3276 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1102 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_OR_ASSIGN;
  }
#line 3284 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1105 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_XOR_ASSIGN;
  }
#line 3292 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1108 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_RIGHT_SHIFT_ASSIGN;
  }
#line 3300 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1111 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_LEFT_SHIFT_ASSIGN;
  }
#line 3308 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1114 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_TYPELESS_ASSIGN;
  }
#line 3316 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 3320 "koala_yacc.c" /* yacc.c:1646  */
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
#line 1121 "yacc/koala.y" /* yacc.c:1906  */


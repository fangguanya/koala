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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

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
       0,   209,   209,   212,   218,   222,   229,   232,   238,   241,
     244,   250,   253,   256,   259,   262,   265,   268,   271,   274,
     277,   280,   283,   286,   292,   296,   305,   309,   312,   317,
     324,   328,   335,   336,   337,   338,   339,   340,   341,   345,
     349,   350,   354,   355,   356,   360,   361,   365,   369,   373,
     377,   389,   394,   402,   406,   411,   419,   423,   430,   436,
     439,   446,   450,   459,   460,   464,   469,   470,   474,   475,
     478,   479,   483,   492,   504,   508,   515,   518,   524,   534,
     539,   544,   549,   554,   559,   564,   569,   577,   582,   587,
     592,   600,   604,   611,   615,   622,   630,   643,   647,   650,
     655,   659,   662,   663,   664,   665,   671,   675,   678,   683,
     687,   694,   698,   704,   708,   715,   718,   724,   727,   730,
     733,   735,   738,   744,   747,   753,   754,   758,   759,   760,
     764,   768,   769,   770,   774,   775,   776,   780,   781,   785,
     789,   790,   791,   795,   798,   805,   809,   818,   821,   829,
     832,   835,   838,   842,   845,   848,   849,   850,   851,   852,
     856,   859,   862,   865,   868,   871,   877,   878,   882,   886,
     890,   897,   900,   903,   907,   910,   917,   921,   928,   931,
     934,   940,   943,   951,   959,   962,   965,   968,   974,   977,
     980,   983,   989,   992,   995,  1001,  1004,  1007,  1013,  1016,
    1019,  1022,  1025,  1031,  1034,  1037,  1043,  1046,  1052,  1055,
    1061,  1064,  1070,  1073,  1079,  1082,  1088,  1096,  1101,  1107,
    1111,  1119,  1122,  1125,  1128,  1131,  1134,  1137,  1140,  1143,
    1146,  1149
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

#define YYPACT_NINF -294

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-294)))

#define YYTABLE_NINF -220

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     126,   -36,    36,    40,   -36,    -9,    -9,   112,   140,   140,
    -294,   166,  -294,  -294,  -294,  -294,  -294,  -294,   869,  -294,
      18,  -294,   362,   899,  -294,   -44,   -26,  -294,   140,   166,
    -294,   166,  -294,    -3,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  1110,    14,    74,
     557,     1,  -294,  -294,  -294,  -294,  -294,    71,  -294,    73,
     133,   116,   557,   162,   152,  -294,  -294,   157,    44,  -294,
     166,   983,  -294,   184,  -294,   729,   729,    26,  1110,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,   729,   557,   729,
     729,   729,   729,   729,   182,   179,  -294,   190,  -294,  -294,
     -13,  -294,   802,  -294,   100,  -294,   -22,    91,   178,     8,
     232,   176,   177,   175,   253,   255,  -294,   557,  -294,  -294,
    1086,   286,   115,    37,    19,  -294,   199,   557,  -294,   200,
     200,   929,   138,  -294,  -294,  -294,  -294,  -294,    28,   203,
     211,    63,   206,  -294,  -294,  -294,  -294,    85,  -294,   557,
     214,   600,   729,   -13,  -294,  1110,   215,  -294,  -294,  -294,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   212,  -294,
    -294,  1086,   400,  -294,   217,  -294,   328,   222,   219,   229,
     230,   956,   118,  -294,  -294,  -294,   217,   223,   231,   233,
     226,   228,   -16,  -294,  -294,   234,  -294,  -294,  -294,   929,
    1086,   836,   146,   557,  -294,  -294,  -294,   236,  -294,  -294,
     235,   147,  -294,   237,  -294,   238,   557,  -294,  -294,  -294,
     -22,   -22,    91,    91,   178,   178,   178,   178,     8,     8,
     232,   176,   177,   175,   253,  -294,   151,   242,   244,   217,
     246,   247,   245,   248,   254,   643,  -294,  -294,  -294,   463,
    -294,  -294,   270,  -294,  -294,  -294,  -294,  -294,  -294,   122,
    -294,  -294,    83,  -294,  -294,   217,  -294,  1086,   200,  1086,
     250,   156,   271,   200,  -294,  -294,   200,   259,  1009,  -294,
    -294,   200,  -294,  -294,  -294,  -294,   217,  -294,   836,    87,
    -294,   272,  -294,   729,  -294,   557,   107,  -294,   729,   729,
     282,   514,   729,  -294,  -294,  -294,  -294,    10,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,   557,   768,   557,  -294,  -294,  -294,   273,   164,
     929,   163,  -294,  -294,  -294,  1035,  1061,   167,  -294,  -294,
     217,  -294,  -294,  -294,     0,  -294,   127,  -294,   277,   279,
     280,  -294,  -294,   281,   686,   288,  -294,  -294,   100,  -294,
    -294,   929,   168,  -294,   929,   171,   929,  -294,  -294,  -294,
    -294,   217,   217,   729,  -294,  -294,   729,   284,   217,  -294,
     929,  -294,   929,  -294,   337,  -294,   293,  -294,   295,  -294,
    -294,  -294,  -294,    -2,   291,   217,  -294,  -294,  -294,  -294
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      40,    38,    45,    47,    48,    49,    50,    56,     0,   105,
       0,    71,     0,     0,     2,    63,    63,     1,    33,    34,
      41,    35,    46,     0,    15,    16,    17,    18,    11,    12,
      13,    14,    19,    20,    21,    22,    23,     0,    25,     0,
       0,     0,     6,     8,     9,    10,   104,     0,    70,     0,
       0,     0,     0,     0,     0,    64,    39,     0,     0,    42,
      32,     0,     7,     0,    57,     0,     0,     0,     0,   150,
     163,   164,   165,   160,   161,   162,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    58,   154,   178,
     147,   151,     0,   166,   181,   188,   192,   195,   198,   203,
     206,   208,   210,   212,   214,   216,    59,     0,    53,   103,
       0,     0,     0,     0,     0,    69,     0,     0,     3,    63,
      63,    27,     0,     4,    24,   182,   183,   110,     0,     0,
       0,     0,     0,   184,   185,   186,   187,     0,    54,     0,
       0,     0,     0,   148,   169,     0,   155,   167,   179,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
     102,     0,     0,    30,     0,    98,     0,     0,     0,     0,
       0,     0,     0,    72,    74,    75,     0,     0,     0,     0,
       0,     0,     0,    93,    51,     0,    43,    44,    26,    29,
       0,     0,     0,     0,   153,    60,   168,     0,    62,   171,
     174,     0,   145,     0,   170,   156,     0,   189,   190,   191,
     193,   194,   196,   197,   202,   201,   199,   200,   204,   205,
     207,   209,   211,   213,   215,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   115,   122,     0,
     113,   116,     0,   118,   125,   126,   119,   120,   121,   181,
     123,   124,     0,    97,   101,     0,   100,     0,    63,     0,
       0,     0,     0,    63,    73,    78,    63,     0,     0,    95,
      96,    63,    94,    52,    28,     5,     0,   107,     0,     0,
     152,     0,   173,     0,   172,     0,     0,    31,     0,     0,
       0,     0,     0,   140,   141,   142,   143,     0,   111,   114,
     117,   231,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     0,     0,     0,    99,    92,    66,     0,     0,
      84,     0,    77,    65,    68,     0,    25,     0,    67,   106,
       0,   109,   159,   176,     0,   146,     0,   157,     0,     0,
       0,   136,   135,     0,     0,     0,   144,   218,   220,   217,
      76,    80,     0,    83,    86,     0,    90,   108,   175,   177,
     158,     0,     0,     0,   134,   138,     0,     0,     0,    79,
      82,    85,    88,    89,   127,   131,     0,   139,     0,   137,
     130,    81,    87,     0,     0,     0,   128,   129,   132,   133
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,   349,  -165,   -15,   -33,   -18,  -294,  -294,   -95,  -294,
    -294,   363,    42,    35,    11,  -294,  -170,   366,   -60,  -136,
     -73,   -20,  -294,  -294,   181,  -294,  -294,  -107,  -294,   -56,
    -294,   173,  -271,  -294,   -90,  -294,   131,  -294,  -293,  -294,
     -12,  -294,  -294,  -294,  -294,  -294,  -294,  -294,   137,  -294,
    -294,   249,  -294,   292,  -294,   240,  -294,  -172,   -43,    86,
      88,    48,    80,   224,   221,   225,   251,   260,  -294,   -78,
    -294,  -294,  -294
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,   132,   183,    52,    94,    54,    55,   184,     7,
       8,     9,    10,    11,    12,    13,    14,    18,    95,    96,
      97,    66,    15,   192,   193,   194,   195,   196,   201,   341,
     202,   203,    16,    98,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   364,   386,   398,   267,   268,   221,    99,
     100,   101,   102,   103,   153,   154,   354,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     271,   272,   332
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   122,   126,    51,    53,    53,    69,    61,    63,   140,
     269,   142,   257,   218,    72,   141,   246,   200,   363,    56,
     197,    67,    32,   198,   247,   167,   168,   137,    64,    53,
     353,   185,   135,   136,    65,    17,   208,    19,   188,     2,
      32,    21,    32,    29,    31,   139,    68,   143,   144,   145,
     146,    30,    65,    53,   160,   199,   133,   178,   198,   150,
      53,   151,    24,    70,   291,   161,   162,   205,   152,   156,
      30,    71,   119,   222,   223,   189,   190,   182,   117,   118,
     378,    32,   212,   379,    53,   303,    73,   269,   366,   257,
     199,   275,    57,   397,   273,   200,   276,   169,   170,   120,
     138,   211,    53,    53,   270,   179,   285,    20,   191,   206,
     207,    22,    27,    53,   294,   128,   296,   227,   228,   229,
     130,   297,   225,   347,   158,   159,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    53,   149,   269,
     299,   362,   120,   215,   121,    74,   158,   159,    80,    81,
      82,    83,   123,   306,    84,    85,   189,   190,   333,   310,
     334,   368,   149,    53,     1,     2,   133,   352,    53,     3,
       4,     5,     6,    53,   163,   164,   282,   222,     1,     2,
     375,   270,   149,     3,     4,   335,     6,   357,   186,   191,
     187,    53,    53,    53,   125,   295,   367,  -219,   283,  -219,
     165,   166,   149,   350,     1,     2,   349,   380,   351,     3,
       4,   209,   124,   210,   269,   234,   235,   236,   237,   298,
     302,   187,   303,   128,   307,   355,   210,   120,   129,   340,
     358,   359,   356,   270,   365,   120,   374,   371,   187,   127,
     376,   390,   210,   187,   392,   373,   210,   171,   172,   230,
     231,   238,   239,   232,   233,   134,   147,   148,   337,    53,
     377,    53,   336,   343,   338,   149,   344,   173,   175,   174,
      53,   348,   176,   133,   369,   177,   389,   204,    65,   391,
      53,   393,   213,   372,   214,   219,   387,   180,   216,   372,
     245,   394,   395,   277,   226,   401,   182,   402,   400,   278,
     279,   280,   287,   286,   289,   396,   290,   288,   270,   300,
     360,     2,   293,   406,   301,   409,   308,   305,   309,   304,
     311,   312,    53,   313,   339,    33,   314,    53,    53,   274,
     133,   179,   315,   345,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   320,   342,
     381,   370,   382,    53,   383,    26,    53,    48,    53,   384,
     181,   388,   399,    58,   403,   182,   404,    33,   405,   408,
      23,    28,    53,   284,    53,   292,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     319,   407,   317,   224,   157,   241,   217,   240,     0,    48,
     242,    33,   181,    59,    60,     0,     0,   182,     0,     0,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    75,    76,   247,   243,   248,   249,
     250,     0,   251,    48,   252,   253,   254,   244,     1,    77,
     255,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    78,    79,    80,    81,    82,    83,     0,     0,    84,
      85,    86,     0,     0,    87,     0,     0,     0,     0,   182,
     256,    89,     0,    90,    91,    92,    93,    75,    76,   247,
       0,   248,   249,   250,     0,   251,     0,   252,   253,   254,
       0,     1,    77,   255,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    78,    79,    80,    81,    82,    83,
       0,     0,    84,    85,    86,     0,     0,    87,    75,    76,
       0,     0,   182,   318,    89,     0,    90,    91,    92,    93,
       0,     0,     1,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    78,    79,    80,    81,    82,
      83,    75,    76,    84,    85,    86,     0,     0,    87,     0,
       0,     0,   361,     0,     0,    89,    77,    90,    91,    92,
      93,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    78,    79,
      80,    81,    82,    83,    75,    76,    84,    85,    86,     0,
       0,    87,     0,     0,     0,     0,    88,     0,    89,    77,
      90,    91,    92,    93,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    78,    79,    80,    81,    82,    83,    75,    76,    84,
      85,    86,     0,   220,    87,     0,     0,     0,     0,     0,
       0,    89,    77,    90,    91,    92,    93,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    78,    79,    80,    81,    82,    83,
      75,    76,    84,    85,    86,     0,     0,    87,     0,     0,
       0,   316,     0,     0,    89,    77,    90,    91,    92,    93,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    78,    79,    80,
      81,    82,    83,    75,    76,    84,    85,    86,     0,     0,
      87,     0,     0,     0,   385,     0,     0,    89,    77,    90,
      91,    92,    93,     0,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      78,    79,    80,    81,    82,    83,     0,     0,    84,    85,
      86,     0,     0,    87,     0,     0,     0,    77,     0,     0,
      89,     0,    90,    91,    92,    93,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    78,
      79,    80,    81,    82,    83,     0,     0,    84,    85,    86,
       0,    33,    87,     0,     0,     0,     0,     0,     0,    89,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    33,     0,     0,     0,     0,
       0,     0,     0,    89,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    33,     0,
     181,     0,     0,     0,     0,   182,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,    33,     0,
      48,     0,     0,     0,    49,     0,    50,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,    33,     0,
      48,     0,     0,     0,    49,     0,    62,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,    33,     0,     0,     0,     0,
      48,     0,     0,   181,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,    33,     0,     0,     0,     0,    48,     0,     0,
     281,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,    33,     0,
       0,     0,     0,     0,    48,     0,   131,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,    33,     0,     0,     0,     0,     0,
     346,     0,   340,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
      33,     0,     0,     0,     0,     0,   346,     0,   371,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     0,     0,    33,     0,     0,     0,     0,
       0,     0,    48,    73,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,    33,
       0,     0,     0,     0,     0,     0,     0,    48,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48
};

static const yytype_int16 yycheck[] =
{
      18,    57,    62,    18,    22,    23,    26,    22,    23,    87,
     182,    89,   182,   149,    47,    88,   181,   124,   311,     1,
       1,    47,    11,    39,    26,    17,    18,     1,    72,    47,
     301,   121,    75,    76,    78,    71,   131,     1,     1,    39,
      29,     1,    31,     8,     9,    78,    72,    90,    91,    92,
      93,     9,    78,    71,    76,    71,    71,   117,    39,    72,
      78,    74,    71,    28,    80,    87,    88,   127,    81,   102,
      28,    74,     1,   151,   152,    38,    39,    79,    77,    78,
      80,    70,   138,   354,   102,    75,    72,   259,    78,   259,
      71,   186,    74,   386,   184,   202,   186,    89,    90,    71,
      74,    73,   120,   121,   182,   120,   196,    71,    71,   129,
     130,    71,     0,   131,   209,    71,   211,   160,   161,   162,
      76,   211,   155,   288,    24,    25,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   155,    75,   311,
     213,   311,    71,    80,    73,    71,    24,    25,    63,    64,
      65,    66,    79,   226,    69,    70,    38,    39,    75,   249,
      77,   333,    75,   181,    38,    39,   181,    80,   186,    43,
      44,    45,    46,   191,    83,    84,   191,   255,    38,    39,
     345,   259,    75,    43,    44,   275,    46,    80,    73,    71,
      75,   209,   210,   211,    78,   210,   332,    75,    80,    77,
      22,    23,    75,   298,    38,    39,   296,    80,   298,    43,
      44,    73,    79,    75,   386,   167,   168,   169,   170,    73,
      73,    75,    75,    71,    73,   303,    75,    71,    71,    73,
     308,   309,   305,   311,   312,    71,    73,    73,    75,    77,
      73,    73,    75,    75,    73,   340,    75,    15,    16,   163,
     164,   171,   172,   165,   166,    71,    74,    78,   278,   277,
     350,   279,   277,   283,   279,    75,   286,    91,    93,    92,
     288,   291,    19,   288,   334,    20,   371,    78,    78,   374,
     298,   376,    79,   339,    73,    71,   364,     1,    82,   345,
      78,   381,   382,    71,    79,   390,    79,   392,   388,    80,
      71,    71,    71,    80,    78,   383,    78,    74,   386,    73,
      28,    39,    78,   403,    79,   405,    74,    79,    74,    82,
      74,    74,   340,    78,    74,    39,    78,   345,   346,     1,
     345,   346,    78,    74,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    78,    78,
      73,    78,    73,   371,    74,     6,   374,    71,   376,    78,
      74,    73,    78,     1,    27,    79,    73,    39,    73,    78,
       4,     8,   390,   192,   392,   202,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     259,   403,   255,   153,   102,   174,   147,   173,    -1,    71,
     175,    39,    74,    41,    42,    -1,    -1,    79,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    24,    25,    26,   176,    28,    29,
      30,    -1,    32,    71,    34,    35,    36,   177,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    24,    25,    26,
      -1,    28,    29,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    69,    70,    71,    -1,    -1,    74,    24,    25,
      -1,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    24,    25,    69,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    -1,    81,    39,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    24,    25,    69,    70,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,    39,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    24,    25,    69,
      70,    71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    39,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      24,    25,    69,    70,    71,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    81,    39,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    24,    25,    69,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    -1,    81,    39,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    69,    70,
      71,    -1,    -1,    74,    -1,    -1,    -1,    39,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    69,    70,    71,
      -1,    39,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    39,    -1,
      74,    -1,    -1,    -1,    -1,    79,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      71,    -1,    -1,    -1,    75,    -1,    77,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      71,    -1,    -1,    -1,    75,    -1,    77,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    43,    44,    45,    46,   103,   104,   105,
     106,   107,   108,   109,   110,   116,   126,    71,   111,     1,
      71,     1,    71,   111,    71,    95,    95,     0,   105,   107,
     106,   107,   108,    39,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    71,    75,
      77,    97,    98,    99,   100,   101,     1,    74,     1,    41,
      42,    97,    77,    97,    72,    78,   115,    47,    72,   115,
     107,    74,    98,    72,    71,    24,    25,    39,    61,    62,
      63,    64,    65,    66,    69,    70,    71,    74,    79,    81,
      83,    84,    85,    86,    99,   112,   113,   114,   127,   143,
     144,   145,   146,   147,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    77,    78,     1,
      71,    73,   123,    79,    79,    78,   112,    77,    71,    71,
      76,    73,    96,    97,    71,   152,   152,     1,    74,    98,
     163,   114,   163,   152,   152,   152,   152,    74,    78,    75,
      72,    74,    81,   148,   149,    61,    98,   147,    24,    25,
      76,    87,    88,    83,    84,    22,    23,    17,    18,    89,
      90,    15,    16,    91,    92,    93,    19,    20,   112,    97,
       1,    74,    79,    97,   102,   128,    73,    75,     1,    38,
      39,    71,   117,   118,   119,   120,   121,     1,    39,    71,
     121,   122,   124,   125,    78,   112,   115,   115,   102,    73,
      75,    73,   123,    79,    73,    80,    82,   145,   113,    71,
      73,   142,   163,   163,   149,    98,    79,   152,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   155,   156,   156,
     157,   158,   159,   160,   161,    78,    96,    26,    28,    29,
      30,    32,    34,    35,    36,    40,    80,   110,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   140,   141,   151,
     163,   164,   165,   128,     1,   102,   128,    71,    80,    71,
      71,    74,    97,    80,   118,   128,    80,    71,    74,    78,
      78,    80,   125,    78,   102,    97,   102,   128,    73,   114,
      73,    79,    73,    75,    82,    79,   114,    73,    74,    74,
     128,    74,    74,    78,    78,    78,    78,   142,    80,   130,
      78,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   166,    75,    77,   128,    97,   115,    97,    74,
      73,   123,    78,   115,   115,    74,    71,    96,   115,   128,
     102,   128,    80,   126,   150,   163,   114,    80,   163,   163,
      28,    78,   110,   132,   137,   163,    78,   113,   151,   112,
      78,    73,   123,   102,    73,    96,    73,   128,    80,   126,
      80,    73,    73,    74,    78,    78,   138,   163,    73,   102,
      73,   102,    73,   102,   128,   128,   163,   132,   139,    78,
     128,   102,   102,    27,    73,    73,   128,   134,    78,   128
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
     116,   116,   117,   117,   118,   118,   119,   119,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   127,   127,
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
       3,     1,     3,     0,     1,     7,     7,     7,     7,     4,
       3,     2,     1,     2,     1,     1,     4,     3,     2,     5,
       4,     6,     5,     4,     3,     5,     4,     6,     5,     5,
       4,     2,     4,     1,     2,     2,     2,     6,     5,     7,
       6,     6,     5,     4,     3,     2,     5,     4,     6,     5,
       2,     3,     2,     1,     2,     1,     1,     2,     1,     1,
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
#line 209 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1797 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 212 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1805 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 218 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 1814 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 222 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].name_type));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 1823 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 229 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type(0, (yyvsp[0].base_type));
  }
#line 1831 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 232 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.name_type) = new_name_type((yyvsp[-1].dims), (yyvsp[0].base_type));
  }
#line 1839 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 238 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = primitive_type((yyvsp[0].primitive_type));
  }
#line 1847 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 241 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = module_type((yyvsp[0].string_array_2));
  }
#line 1855 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 244 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = (yyvsp[0].base_type);
  }
#line 1863 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 250 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT8;
  }
#line 1871 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 253 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT16;
  }
#line 1879 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 256 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT32;
  }
#line 1887 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 259 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_UINT64;
  }
#line 1895 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 262 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT8;
  }
#line 1903 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 265 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT16;
  }
#line 1911 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 268 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT32;
  }
#line 1919 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 271 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_INT64;
  }
#line 1927 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 274 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT32;
  }
#line 1935 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 277 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_FLOAT64;
  }
#line 1943 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 280 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_BOOL;
  }
#line 1951 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 283 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_STRING;
  }
#line 1959 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 286 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.primitive_type) = TYPE_ROOT_OBJECT;
  }
#line 1967 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 292 "yacc/koala.y" /* yacc.c:1646  */
    {
    //outf("Module:%s, TypeName:%s\n", $1.val, $3.val);
    (yyval.string_array_2)[0] = (yyvsp[-2].ident); (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1976 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 296 "yacc/koala.y" /* yacc.c:1646  */
    {
    //outf("TypeName:%s\n", $1.val);
    (yyval.string_array_2)[0].val = null;
    (yyval.string_array_2)[0].len = 0;
    (yyval.string_array_2)[1] = (yyvsp[0].ident);
  }
#line 1987 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 305 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type(null, (yyvsp[0].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 1996 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 309 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type(null, null);
  }
#line 2004 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 312 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 2014 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 317 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.base_type) = func_type((yyvsp[-1].linked_list), null);
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2023 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 324 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].name_type));
  }
#line 2032 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 328 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2040 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 365 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2049 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 369 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2058 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 373 "yacc/koala.y" /* yacc.c:1646  */
    {
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2067 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 377 "yacc/koala.y" /* yacc.c:1646  */
    {
    outs("FunctionDeclaration\n");
    show_expr((yyvsp[0].expr));
    outs("\n");
  }
#line 2077 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 389 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-3].linked_list), null, (yyvsp[-1].linked_list), true);
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2087 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 394 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-4].linked_list), (yyvsp[-3].name_type), (yyvsp[-1].linked_list), true);
    free_linked_list((yyvsp[-4].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2097 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 402 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-2].linked_list), (yyvsp[-1].name_type), null, false);
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2106 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 406 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-3].linked_list), null, (yyvsp[-1].linked_list), false);
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2116 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 411 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = build_variable_declaration((yyvsp[-4].linked_list), (yyvsp[-3].name_type), (yyvsp[-1].linked_list), false);
    free_linked_list((yyvsp[-4].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2126 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 419 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[0].ident), null));
  }
#line 2135 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 423 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), new_variable((yyvsp[0].ident), null));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2144 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 430 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = (yyvsp[0].linked_list);
  }
#line 2152 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 436 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2160 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 439 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2169 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 446 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2178 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 450 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2187 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 464 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_type_struct((yyvsp[-5].ident), (yyvsp[-2].member_declarations)[0], (yyvsp[-2].member_declarations)[1]);
    free_linked_list((yyvsp[-2].member_declarations)[0]);
    free_linked_list((yyvsp[-2].member_declarations)[1]);
  }
#line 2197 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 469 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2203 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 470 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_type_interface((yyvsp[-5].ident), (yyvsp[-2].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2212 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 474 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2218 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 475 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = new_exp_type_redef();
  }
#line 2226 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 478 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2232 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 479 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2238 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 483 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declarations)[0] = new_linked_list();
    (yyval.member_declarations)[1] = new_linked_list();
    if ((yyvsp[0].member_declaration).type == 1) {
      linked_list_add_tail((yyval.member_declarations)[0], (yyvsp[0].member_declaration).var);
    } else {
      linked_list_add_tail((yyval.member_declarations)[1], (yyvsp[0].member_declaration).func);
    }
  }
#line 2252 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 492 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].member_declaration).type == 1) {
      linked_list_add_tail((yyvsp[-1].member_declarations)[0], (yyvsp[0].member_declaration).var);
    } else {
      linked_list_add_tail((yyvsp[-1].member_declarations)[1], (yyvsp[0].member_declaration).func);
    }
    (yyval.member_declarations)[0] = (yyvsp[-1].member_declarations)[0];
    (yyval.member_declarations)[1] = (yyvsp[-1].member_declarations)[1];
  }
#line 2266 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 504 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declaration).type = 1;
    (yyval.member_declaration).var = (yyvsp[0].variable);
  }
#line 2275 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 508 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.member_declaration).type = 2;
    (yyval.member_declaration).func = (yyvsp[0].function);
  }
#line 2284 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 515 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.variable) = new_variable((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2292 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 518 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.variable) = new_variable((yyvsp[-2].ident), (yyvsp[-1].name_type));
  }
#line 2300 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 524 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.function) = new_method((yyvsp[-1].method_header).name, (yyvsp[-1].method_header).parameter_list, (yyvsp[-1].method_header).return_type_list, (yyvsp[0].expr));
    if ((yyvsp[-1].method_header).parameter_list != null)
      free_linked_list((yyvsp[-1].method_header).parameter_list);
    if ((yyvsp[-1].method_header).return_type_list != null)
      free_linked_list((yyvsp[-1].method_header).return_type_list);
  }
#line 2312 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 534 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2322 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 539 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-2].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = null;
  }
#line 2332 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 81:
#line 544 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2342 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 549 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2352 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 554 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2362 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 84:
#line 559 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-2].ident);
    (yyval.method_header).parameter_list = null;
    (yyval.method_header).return_type_list = null;
  }
#line 2372 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 85:
#line 564 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2382 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 86:
#line 569 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2392 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 577 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2402 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 582 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2412 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 587 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-4].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-2].linked_list);
    (yyval.method_header).return_type_list = (yyvsp[0].linked_list);
  }
#line 2422 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 90:
#line 592 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.method_header).name = (yyvsp[-3].ident);
    (yyval.method_header).parameter_type_list = (yyvsp[-1].linked_list);
    (yyval.method_header).return_type_list = null;
  }
#line 2432 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 91:
#line 600 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
  }
#line 2441 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 92:
#line 604 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-3].linked_list), new_variable((yyvsp[-1].ident), (yyvsp[0].name_type)));
    (yyval.linked_list) = (yyvsp[-3].linked_list);
  }
#line 2450 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 93:
#line 611 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].intf_func_proto));
  }
#line 2459 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 94:
#line 615 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].intf_func_proto));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2468 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 95:
#line 622 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.intf_func_proto) = new_intf_func_proto((yyvsp[-1].method_header).name,
                             (yyvsp[-1].method_header).parameter_list,
                             null,
                             (yyvsp[-1].method_header).return_type_list);
    free_linked_list((yyvsp[-1].method_header).parameter_list);
    free_linked_list((yyvsp[-1].method_header).return_type_list);
  }
#line 2481 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 96:
#line 630 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.intf_func_proto) = new_intf_func_proto((yyvsp[-1].method_header).name,
                             null,
                             (yyvsp[-1].method_header).parameter_type_list,
                             (yyvsp[-1].method_header).return_type_list);
    free_linked_list((yyvsp[-1].method_header).parameter_type_list);
    free_linked_list((yyvsp[-1].method_header).return_type_list);
  }
#line 2494 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 643 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-4].ident), null, (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2503 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 647 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-3].ident), null, null, (yyvsp[0].expr));
  }
#line 2511 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 650 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-5].ident), (yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2521 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 655 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_function((yyvsp[-4].ident), (yyvsp[-2].linked_list), null, (yyvsp[0].expr));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2530 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 659 "yacc/koala.y" /* yacc.c:1646  */
    {
    outs("FUNC ID '(' ParameterList ')'");
  }
#line 2538 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 662 "yacc/koala.y" /* yacc.c:1646  */
    {outs("FUNC ID '(' ')' error\n");}
#line 2544 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 663 "yacc/koala.y" /* yacc.c:1646  */
    {outs("FUNC ID '(' error\n");}
#line 2550 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 664 "yacc/koala.y" /* yacc.c:1646  */
    {outs("FUNC ID error\n");}
#line 2556 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 665 "yacc/koala.y" /* yacc.c:1646  */
    {
    outs("FUNC error\n");
  }
#line 2564 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 671 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2573 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 675 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func(null, null, (yyvsp[0].expr));
  }
#line 2581 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 678 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-3].linked_list), (yyvsp[-1].linked_list), (yyvsp[0].expr));
    free_linked_list((yyvsp[-3].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2591 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 683 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.anonymous) = new_anonymous_func((yyvsp[-2].linked_list), null, (yyvsp[0].expr));
    free_linked_list((yyvsp[-2].linked_list));
  }
#line 2600 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 687 "yacc/koala.y" /* yacc.c:1646  */
    {
    outs("AnonymousFunctionDeclaration error\n");
  }
#line 2608 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 694 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2617 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 698 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_seq(null);
  }
#line 2625 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 704 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2634 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 708 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2643 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 115:
#line 715 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2651 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 116:
#line 718 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2659 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 117:
#line 724 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2667 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 727 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2675 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 730 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2683 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 733 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2690 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 735 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2698 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 738 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2706 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 744 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2714 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 747 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2722 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 795 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_return(null);
  }
#line 2730 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 798 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_return((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2739 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 805 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2748 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 809 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 2757 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 818 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2765 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 821 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[-1].expr);
    LINKED_LIST_MERGE_TAIL(&(yyval.expr)->term.trailer_list, (yyvsp[0].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 2775 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 829 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_id((yyvsp[0].ident));
  }
#line 2783 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 832 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_self();
  }
#line 2791 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 835 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2799 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 838 "yacc/koala.y" /* yacc.c:1646  */
    {
    check_primitive_type((yyvsp[-3].primitive_type), (yyvsp[-1].expr)->term);
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 2808 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 842 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_exp((yyvsp[-1].expr));
  }
#line 2816 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 845 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_anonymous((yyvsp[0].anonymous));
  }
#line 2824 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 848 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2830 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 849 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2836 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 850 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2842 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 851 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2848 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 852 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2854 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 856 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_uint((yyvsp[0].ival));
  }
#line 2862 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 859 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_float((yyvsp[0].fval));
  }
#line 2870 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 862 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_string((yyvsp[0].string_literal));
  }
#line 2878 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 865 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_null();
  }
#line 2886 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 868 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_bool(true);
  }
#line 2894 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 871 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_term_bool(false);
  }
#line 2902 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 886 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].trailer));
  }
#line 2911 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 890 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].trailer));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2920 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 897 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_field_access((yyvsp[0].ident));
  }
#line 2928 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 900 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_array_access((yyvsp[-1].expr));
  }
#line 2936 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 903 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call((yyvsp[-1].linked_list));
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2945 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 907 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_func_call(null);
  }
#line 2953 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 910 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.trailer) = new_trailer_interface_implementation();
    free_linked_list((yyvsp[-1].linked_list));
  }
#line 2962 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 917 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 2971 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 921 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-1].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-1].linked_list);
  }
#line 2980 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 928 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 2988 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 931 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_INC_AFTER, (yyvsp[-1].expr));
  }
#line 2996 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 934 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_DEC_AFTER, (yyvsp[-1].expr));
  }
#line 3004 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 940 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3012 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 943 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_INC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 3025 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 951 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expr)->kind != EXP_TERM) {
      yyerror("rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expr) = new_exp_unary(OP_DEC_BEFORE, (yyvsp[0].expr));
    }
  }
#line 3038 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 959 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3046 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 962 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_MINUS, (yyvsp[0].expr));
  }
#line 3054 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 965 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_BNOT, (yyvsp[0].expr));
  }
#line 3062 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 968 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_unary(OP_LNOT, (yyvsp[0].expr));
  }
#line 3070 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 974 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3078 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 977 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_TIMES, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3086 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 980 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_DIVIDE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 983 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MOD, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3102 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 989 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3110 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 992 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_PLUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3118 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 995 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_MINUS, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3126 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1001 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3134 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1004 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3142 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1007 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_RSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3150 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1013 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3158 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1016 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3166 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1019 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GT, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3174 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1022 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3182 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1025 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_GE, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3190 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1031 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3198 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1034 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_EQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3206 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1037 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3214 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1043 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3222 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1046 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3230 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1052 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3238 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1055 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BXOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3246 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1061 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3254 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1064 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_BOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3262 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1070 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3270 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1073 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LAND, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3278 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1079 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3286 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1082 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_binary(OP_LOR, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3294 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1088 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 3302 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1096 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_assign_list((yyvsp[-2].linked_list), (yyvsp[0].linked_list));
    free_linked_list((yyvsp[-2].linked_list));
    free_linked_list((yyvsp[0].linked_list));
  }
#line 3312 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1101 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new_exp_compound_assign((yyvsp[-1].compound_op), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 3320 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1107 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.linked_list) = new_linked_list();
    linked_list_add_tail((yyval.linked_list), (yyvsp[0].expr));
  }
#line 3329 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1111 "yacc/koala.y" /* yacc.c:1646  */
    {
    linked_list_add_tail((yyvsp[-2].linked_list), (yyvsp[0].expr));
    (yyval.linked_list) = (yyvsp[-2].linked_list);
  }
#line 3338 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1119 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_PLUS_ASSIGN;
  }
#line 3346 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1122 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_MINUS_ASSIGN;
  }
#line 3354 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1125 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_TIMES_ASSIGN;
  }
#line 3362 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1128 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_DIVIDE_ASSIGN;
  }
#line 3370 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1131 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_MOD_ASSIGN;
  }
#line 3378 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1134 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_AND_ASSIGN;
  }
#line 3386 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1137 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_OR_ASSIGN;
  }
#line 3394 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1140 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_XOR_ASSIGN;
  }
#line 3402 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1143 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_RIGHT_SHIFT_ASSIGN;
  }
#line 3410 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1146 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_LEFT_SHIFT_ASSIGN;
  }
#line 3418 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1149 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.compound_op) = OP_TYPELESS_ASSIGN;
  }
#line 3426 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 3430 "koala_yacc.c" /* yacc.c:1646  */
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
#line 1156 "yacc/koala.y" /* yacc.c:1906  */


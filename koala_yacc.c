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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  379

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
       2,     2,     2,    88,     2,     2,     2,    90,    93,     2,
      75,    74,    77,    85,    76,    86,    73,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    79,
      91,    78,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    94,     2,     2,     2,     2,     2,
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
     288,   289,   297,   300,   306,   309,   312,   318,   323,   348,
     349,   353,   354,   358,   362,   363,   364,   367,   378,   379,
     383,   384,   385,   389,   390,   394,   395,   399,   400,   404,
     408,   409,   410,   411,   412,   413,   414,   415,   419,   420,
     421,   422,   426,   427,   431,   434,   438,   439,   443,   444,
     450,   451,   452,   453,   457,   458,   459,   460,   465,   466,
     470,   471,   477,   481,   482,   483,   487,   488,   492,   493,
     497,   498,   502,   506,   507,   508,   512,   513,   514,   518,
     519,   523,   527,   528,   557,   560,   563,   566,   569,   573,
     576,   577,   582,   583,   584,   623,   627,   630,   633,   636,
     639,   645,   648,   656,   664,   667,   670,   673,   676,   682,
     685,   693,   701,   704,   707,   710,   716,   719,   722,   725,
     731,   734,   737,   743,   746,   749,   755,   758,   761,   764,
     767,   773,   776,   779,   785,   788,   794,   797,   803,   806,
     812,   815,   821,   824,   830,   836,   842,   843,   847,   848,
     854,   855,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   869,   873,   878
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
  "')'", "'('", "','", "'*'", "'='", "';'", "'['", "']'", "':'", "'{'",
  "'}'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "$accept", "ModuleFilePathName", "TypeList", "Type",
  "PrimitiveType", "ModuleType", "FunctionType", "ReturnTypeList",
  "Program", "PackageDeclaration", "ImportDeclarations",
  "ImportDeclaration", "Declarations", "Declaration", "ConstDeclaration",
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
     325,   326,   327,    46,    41,    40,    44,    42,    61,    59,
      91,    93,    58,   123,   125,    43,    45,   126,    33,    47,
      37,    60,    62,    38,    94,   124
};
# endif

#define YYPACT_NINF -284

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-284)))

#define YYTABLE_NINF -199

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,   -21,    22,    33,   -21,    36,    36,   100,    88,    88,
    -284,   170,  -284,  -284,  -284,  -284,  -284,  -284,   785,    38,
    1002,   815,  -284,     9,    55,  -284,    88,   170,  -284,   170,
    -284,    45,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  1052,    51,    57,   578,   -55,
    -284,  -284,  -284,     1,    69,   114,   131,   578,   137,   159,
    -284,  -284,   168,   -30,  -284,   170,   899,  -284,  -284,  -284,
     193,  -284,   710,   710,   148,  -284,  -284,  -284,  -284,   178,
    -284,  -284,  -284,   710,   710,   578,   710,   710,   710,   710,
     191,    11,    89,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,    39,  -284,    -6,    81,   157,     0,   188,   175,   176,
     174,   252,   253,  -284,   578,  -284,  1027,   261,    -8,    -3,
     -10,  -284,    28,   578,  -284,   195,   195,   845,    61,  -284,
    -284,  -284,  -284,  -284,    84,   578,   202,   197,   -39,  -284,
    -284,  -284,  -284,   135,   578,  -284,   196,  -284,  -284,  -284,
     209,   622,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,    86,  -284,  1027,   337,  -284,   200,  -284,   261,   223,
     224,   225,   872,    -7,  -284,  -284,  -284,   200,   228,   226,
     229,   230,   -12,  -284,  -284,   140,  -284,  -284,  -284,   845,
    1027,   261,    98,  -284,  -284,  -284,  -284,   251,  -284,   446,
    -284,   200,  -284,  -284,   119,   245,  -284,  -284,  -284,    -6,
      -6,    81,    81,   157,   157,   157,   157,     0,     0,   188,
     175,   176,   174,   252,  -284,   150,   255,   256,   200,   257,
     259,   490,  -284,  -284,   402,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   280,  -284,   151,  -284,   249,  -284,   200,  -284,
    1027,  1027,   260,   156,   258,   195,  -284,  -284,   263,   925,
    -284,  -284,   195,  -284,  -284,  -284,  -284,   200,  -284,   261,
    -284,  -284,   -38,  -284,  -284,   710,  -284,  -284,   710,   710,
     311,   534,   710,  -284,   146,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,   578,   750,
     578,  -284,  -284,  -284,   262,   160,   845,   161,  -284,  -284,
     951,   977,   162,  -284,  -284,   200,  -284,  -284,  -284,   269,
     271,   272,  -284,  -284,   666,   267,   274,  -284,  -284,    39,
     273,  -284,   845,   165,  -284,   845,   182,   845,  -284,   200,
     200,   710,  -284,   710,   275,  -284,   200,  -284,   845,  -284,
     845,  -284,   323,  -284,   277,   278,  -284,  -284,  -284,  -284,
    -284,    -4,   285,   200,  -284,  -284,  -284,  -284,  -284
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      41,    39,    46,    48,    49,    50,    51,    57,     0,     0,
       0,     0,     2,    68,    68,     1,    34,    35,    42,    36,
      47,     0,    16,    17,    18,    19,    12,    13,    14,    15,
      20,    21,    22,    23,    24,     0,    26,     0,     0,     0,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
      69,    40,     0,     0,    43,    33,     0,     9,    10,    11,
       0,    58,     0,     0,     0,   136,   148,   149,   150,   145,
     146,   147,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    59,    66,   140,   151,   138,   141,
     135,   159,   166,   170,   173,   176,   181,   184,   186,   188,
     190,   192,   194,    64,     0,    54,     0,     0,     0,     0,
       0,    72,     0,     0,     3,    68,    68,    28,     0,     4,
      25,   145,   160,   161,     0,     0,     0,     0,     0,   162,
     163,   164,   165,     0,     0,    55,   142,    62,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,    31,     0,   101,     0,     0,
       0,     0,     0,     0,    73,    75,    76,     0,     0,     0,
       0,     0,     0,    96,    52,     0,    44,    45,    27,    30,
       0,     0,     0,    65,   137,    63,    67,     0,    60,     0,
     154,   157,   195,   196,     0,     0,   167,   168,   169,   171,
     172,   174,   175,   180,   179,   177,   178,   182,   183,   185,
     187,   189,   191,   193,    56,     0,     0,     0,     0,     0,
       0,     0,    95,   110,     0,   108,   111,   113,   116,   117,
     114,   115,   159,   213,     0,   214,     0,   100,     0,   103,
       0,     0,     0,     0,     0,    68,    74,    79,     0,     0,
      98,    99,    68,    97,    53,    29,     5,     0,   105,     0,
     139,   144,     0,   158,   156,     0,   155,    32,     0,     0,
       0,     0,     0,   132,     0,    94,   109,   212,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,     0,     0,
       0,   112,   102,    93,     0,     0,    85,     0,    78,    70,
       0,    26,     0,    71,   104,     0,   107,   143,   197,     0,
       0,     0,   128,   127,     0,     0,     0,   133,   201,   199,
     200,    77,    81,     0,    84,    87,     0,    91,   106,     0,
       0,     0,   130,     0,     0,   126,     0,    80,    83,    86,
      89,    90,   118,   123,     0,     0,   131,   129,   122,    82,
      88,     0,     0,     0,   121,   120,   119,   124,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,   351,  -163,   -14,   -18,   314,   325,   -83,  -284,  -284,
     360,    27,    24,    32,  -284,  -159,   367,   -56,  -284,   281,
    -124,  -284,   -15,  -284,  -284,   189,  -284,  -284,   -99,  -284,
     -48,  -162,  -284,   185,  -284,  -284,  -284,   134,  -284,  -284,
       8,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   237,  -155,   -32,    92,    94,    29,    80,   215,   216,
     214,   236,   240,  -284,   -71,    99,  -284,  -284,  -284,  -284,
    -283
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   128,   175,    90,    51,    52,   176,     7,     8,
       9,    10,    11,    12,    13,    14,    18,    91,    92,    93,
      94,    95,    61,    15,   183,   184,   185,   186,   187,   191,
     317,   177,   192,   193,    16,    96,   244,   245,   246,   247,
     248,   376,   249,   250,   334,   353,   365,   251,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   213,   214,   254,   255,   308,
     256
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   122,    50,    50,    49,   118,    56,    58,   335,    64,
     235,   203,   136,   137,   257,   243,   259,   160,   161,   252,
     208,   190,   236,   114,   115,   267,   188,    67,   188,   138,
     180,   181,    27,    29,   180,   181,    28,   144,   144,   278,
     132,   133,   124,    30,   198,   206,   327,   126,    50,   283,
      65,    17,   129,    28,   139,   140,   141,   142,   171,    30,
     189,    30,   189,   148,   149,   182,   178,   195,   179,   182,
     366,   153,   272,   116,    50,   117,   290,   265,   146,   174,
     212,   215,    59,   154,   155,   243,   202,   144,    60,   252,
     145,   162,   163,   190,    19,   258,   312,    30,    50,    50,
      25,    62,   172,   253,   144,    20,   322,   194,    22,    50,
     196,   197,   150,    53,   151,   324,   275,   326,   277,   152,
      66,   216,   217,   218,    70,     1,     2,    31,    63,    71,
       3,     4,   333,     6,    60,   199,   252,   200,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   119,   282,   339,    50,   116,   346,   201,   129,
      50,    46,   144,   348,    50,   234,   156,   157,   264,    84,
       1,     2,   279,   253,   179,     3,     4,     5,     6,   158,
     159,    50,    50,    50,   338,   294,   276,   362,   363,   223,
     224,   225,   226,   284,   368,   285,   325,   120,   252,    76,
      77,    78,   131,   164,   165,    80,    81,     1,     2,   374,
     121,   378,     3,     4,   212,   123,   144,   329,   330,   274,
     253,   336,   144,   134,   287,   337,   200,   309,   116,   310,
     316,   124,   116,   344,   342,   345,   347,   179,   200,   358,
     125,   179,    50,    50,   227,   228,   313,   314,   219,   220,
     319,    50,   221,   222,   340,   129,   360,   323,   200,   357,
     135,    50,   359,   354,   361,   130,   143,   343,   166,   168,
     167,   169,   343,   170,    60,   369,   204,   370,   205,   209,
     364,   210,   253,   174,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   260,   261,   262,    50,    31,
     268,   269,    50,    50,   148,   149,   129,   172,   270,   271,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    50,   280,   286,    50,   311,    50,
     288,   289,   291,    46,   292,   315,   173,   318,   320,   331,
      50,   341,    50,   349,   174,   350,   355,   351,   356,   144,
     371,   372,   373,   150,   367,   151,  -198,    24,  -198,    68,
     152,    72,    73,   236,   377,   237,   238,   239,    26,   240,
      69,    21,   266,   147,     1,    74,   241,   273,   296,   375,
     207,   229,   231,   230,   328,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
      75,    76,    77,    78,   131,   232,     0,    80,    81,    82,
     233,     0,    83,     0,     0,     0,     0,    84,     0,     0,
       0,   242,    86,    87,    88,    89,    72,    73,   236,     0,
     237,   238,   239,     0,   240,     0,     0,     0,     0,     1,
      74,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    75,    76,    77,    78,   131,
      72,    73,    80,    81,    82,     0,     0,    83,     0,     0,
       0,     0,    84,     0,    74,     0,   295,    86,    87,    88,
      89,     0,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,    75,
      76,    77,    78,    79,    72,    73,    80,    81,    82,     0,
       0,    83,     0,     0,     0,     0,    84,     0,    74,    85,
     281,    86,    87,    88,    89,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    75,    76,    77,    78,    79,    72,    73,
      80,    81,    82,     0,     0,    83,     0,     0,     0,   293,
      84,     1,    74,    85,     0,    86,    87,    88,    89,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,    75,    76,    77,
      78,   131,    72,    73,    80,    81,    82,     0,     0,    83,
       0,     0,     0,   332,    84,     0,    74,     0,     0,    86,
      87,    88,    89,     0,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    75,    76,    77,    78,    79,    72,    73,    80,    81,
      82,     0,     0,    83,     0,     0,     0,     0,    84,     0,
      74,    85,     0,    86,    87,    88,    89,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    75,    76,    77,    78,   131,
      72,    73,    80,    81,    82,     0,   211,    83,     0,     0,
       0,     0,    84,     0,    74,     0,     0,    86,    87,    88,
      89,     0,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,    75,
      76,    77,    78,   131,    72,    73,    80,    81,    82,     0,
       0,    83,     0,     0,     0,   352,    84,     0,    74,     0,
       0,    86,    87,    88,    89,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    75,    76,    77,    78,   131,     0,     0,
      80,    81,    82,     0,     0,    83,     0,     0,    74,     0,
      84,     0,     0,     0,     0,    86,    87,    88,    89,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    75,    76,    77,    78,   131,     0,     0,
      80,    81,    82,    31,     0,    83,     0,     0,     0,     0,
      84,     0,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    46,     0,     0,
       0,    47,     0,    48,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    46,     0,     0,
       0,    47,     0,    57,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
      31,     0,     0,     0,     0,     0,     0,    46,     0,     0,
     173,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,    31,     0,     0,
       0,     0,     0,     0,    46,     0,     0,   263,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,    31,     0,     0,     0,     0,     0,     0,
       0,    46,     0,   127,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    31,
       0,     0,     0,     0,     0,     0,     0,   321,     0,   316,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,    31,     0,     0,     0,     0,
       0,     0,     0,   321,     0,   342,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      31,     0,    54,    55,     0,     0,     0,     0,     0,    46,
      70,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      18,    57,    20,    21,    18,    53,    20,    21,   291,    24,
     173,   135,    83,    84,   176,   174,   178,    17,    18,   174,
     144,   120,    26,    78,    79,   187,    38,    45,    38,    85,
      37,    38,     8,     9,    37,    38,     9,    76,    76,   201,
      72,    73,    72,    11,   127,    84,    84,    77,    66,   211,
      26,    72,    66,    26,    86,    87,    88,    89,   114,    27,
      72,    29,    72,    24,    25,    72,    74,   123,    76,    72,
     353,    77,    84,    72,    92,    74,   238,    84,    92,    83,
     151,   152,    73,    89,    90,   244,   134,    76,    79,   244,
      79,    91,    92,   192,    72,   178,   258,    65,   116,   117,
       0,    46,   116,   174,    76,    72,   269,    79,    72,   127,
     125,   126,    73,    75,    75,   277,   199,   279,   201,    80,
      75,   153,   154,   155,    73,    37,    38,    38,    73,    72,
      42,    43,   291,    45,    79,    74,   291,    76,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    83,   209,   309,   173,    72,   320,    74,   173,
     178,    72,    76,   325,   182,    79,    85,    86,   182,    80,
      37,    38,    74,   244,    76,    42,    43,    44,    45,    22,
      23,   199,   200,   201,   308,   241,   200,   349,   350,   160,
     161,   162,   163,    74,   356,    76,   279,    83,   353,    64,
      65,    66,    67,    15,    16,    70,    71,    37,    38,   371,
      79,   373,    42,    43,   285,    78,    76,   288,   289,    79,
     291,   292,    76,    75,    74,    79,    76,    76,    72,    78,
      74,    72,    72,   316,    74,    74,    74,    76,    76,    74,
      72,    76,   260,   261,   164,   165,   260,   261,   156,   157,
     265,   269,   158,   159,   310,   269,    74,   272,    76,   342,
      82,   279,   345,   334,   347,    72,    75,   315,    93,    95,
      94,    19,   320,    20,    79,   358,    74,   360,    81,    83,
     351,    72,   353,    83,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    72,    72,    72,   316,    38,
      72,    75,   320,   321,    24,    25,   320,   321,    79,    79,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   342,    74,    81,   345,    79,   347,
      75,    75,    75,    72,    75,    75,    75,    79,    75,    28,
     358,    79,   360,    74,    83,    74,    79,    75,    74,    76,
      27,    74,    74,    73,    79,    75,    76,     6,    78,    45,
      80,    24,    25,    26,    79,    28,    29,    30,     8,    32,
      45,     4,   183,    92,    37,    38,    39,   192,   244,   371,
     143,   166,   168,   167,   285,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,   169,    -1,    70,    71,    72,
     170,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    24,    25,    26,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      24,    25,    70,    71,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    38,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    24,    25,    70,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    38,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    24,    25,
      70,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    79,
      80,    37,    38,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    24,    25,    70,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    79,    80,    -1,    38,    -1,    -1,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    24,    25,    70,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      38,    83,    -1,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      24,    25,    70,    71,    72,    -1,    74,    75,    -1,    -1,
      -1,    -1,    80,    -1,    38,    -1,    -1,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    24,    25,    70,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    79,    80,    -1,    38,    -1,
      -1,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    -1,    -1,    38,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      70,    71,    72,    38,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    78,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    78,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    72,
      73,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    42,    43,    44,    45,   104,   105,   106,
     107,   108,   109,   110,   111,   119,   130,    72,   112,    72,
      72,   112,    72,    97,    97,     0,   106,   108,   107,   108,
     109,    38,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    72,    76,    78,    99,
     100,   101,   102,    75,    40,    41,    99,    78,    99,    73,
      79,   118,    46,    73,   118,   108,    75,   100,   101,   102,
      73,    72,    24,    25,    38,    63,    64,    65,    66,    67,
      70,    71,    72,    75,    80,    83,    85,    86,    87,    88,
     100,   113,   114,   115,   116,   117,   131,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    78,    79,    72,    74,   126,    83,
      83,    79,   113,    78,    72,    72,    77,    74,    98,    99,
      72,    67,   149,   149,    75,    82,   160,   160,   113,   149,
     149,   149,   149,    75,    76,    79,    99,   115,    24,    25,
      73,    75,    80,    77,    89,    90,    85,    86,    22,    23,
      17,    18,    91,    92,    15,    16,    93,    94,    95,    19,
      20,   113,    99,    75,    83,    99,   103,   127,    74,    76,
      37,    38,    72,   120,   121,   122,   123,   124,    38,    72,
     124,   125,   128,   129,    79,   113,   118,   118,   103,    74,
      76,    74,   126,   116,    74,    81,    84,   147,   116,    83,
      72,    74,   160,   161,   162,   160,   149,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   153,   153,   154,
     155,   156,   157,   158,    79,    98,    26,    28,    29,    30,
      32,    39,    84,   111,   132,   133,   134,   135,   136,   138,
     139,   143,   148,   160,   163,   164,   166,   127,   103,   127,
      72,    72,    72,    75,    99,    84,   121,   127,    72,    75,
      79,    79,    84,   129,    79,   103,    99,   103,   127,    74,
      74,    84,   113,   127,    74,    76,    81,    74,    75,    75,
     127,    75,    75,    79,   113,    84,   133,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   165,    76,
      78,    79,   127,    99,    99,    75,    74,   126,    79,   118,
      75,    72,    98,   118,   127,   103,   127,    84,   161,   160,
     160,    28,    79,   111,   140,   166,   160,    79,   116,   148,
     113,    79,    74,   126,   103,    74,    98,    74,   127,    74,
      74,    75,    79,   141,   160,    79,    74,   103,    74,   103,
      74,   103,   127,   127,   160,   142,   166,    79,   127,   103,
     103,    27,    74,    74,   127,   136,   137,    79,   127
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     105,   106,   106,   107,   107,   107,   108,   108,   109,   109,
     109,   109,   110,   110,   111,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   116,   116,   116,   117,   118,   118,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   130,   130,   131,   131,   131,   131,   132,   132,
     133,   133,   134,   134,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   139,   139,   139,   140,   140,   140,   141,
     141,   142,   143,   143,   144,   144,   144,   144,   144,   145,
     145,   145,   146,   146,   146,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     153,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   166,   166
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     4,     3,     5,
       4,     1,     3,     3,     2,     2,     2,     1,     1,     1,
       3,     1,     2,     3,     5,     5,     1,     2,     1,     1,
       1,     1,     5,     6,     4,     5,     6,     1,     3,     1,
       3,     1,     2,     3,     1,     3,     1,     3,     0,     1,
       7,     7,     4,     1,     2,     1,     1,     4,     3,     2,
       5,     4,     6,     5,     4,     3,     5,     4,     6,     5,
       5,     4,     2,     4,     3,     2,     1,     2,     2,     2,
       6,     5,     7,     6,     5,     4,     6,     5,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     5,     7,
       1,     1,     5,     5,     7,     7,     2,     1,     1,     2,
       1,     1,     2,     3,     1,     1,     1,     3,     1,     4,
       1,     1,     2,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     4,     4,     3,     4,     1,
       2,     2,     2,     2,     2,     2,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 150 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1752 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 153 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = null;
  }
#line 1760 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 165 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1766 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 166 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1772 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "yacc/koala.y" /* yacc.c:1646  */
    {
    //$$ = new_type_info($1, null);
  }
#line 1780 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 173 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1788 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 176 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1794 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 177 "yacc/koala.y" /* yacc.c:1646  */
    {printf(">>>>>>PrimitiveType Array:%d\n", dim_count);}
#line 1800 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "yacc/koala.y" /* yacc.c:1646  */
    {printf(">>>>>>ModuleType Array:%d\n", dim_count);}
#line 1806 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 179 "yacc/koala.y" /* yacc.c:1646  */
    {printf(">>>>>>FunctionType Array:%d\n", dim_count);}
#line 1812 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 183 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT8;
  }
#line 1820 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 186 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT16;
  }
#line 1828 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 189 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT32;
  }
#line 1836 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 192 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_UINT64;
  }
#line 1844 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_INT8;
  }
#line 1852 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 198 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_INT16;
  }
#line 1860 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 201 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("int32\n");
    (yyval.type) = TYPE_INT32;
  }
#line 1869 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_INT64;
  }
#line 1877 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 208 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_FLOAT32;
  }
#line 1885 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 211 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_FLOAT64;
  }
#line 1893 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 214 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_BOOL;
  }
#line 1901 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("string\n");
    (yyval.type) = TYPE_STRING;
  }
#line 1910 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 221 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.type) = TYPE_ROOT_OBJECT;
  }
#line 1918 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 227 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("Module:%s, Type:%s\n", (yyvsp[-2].identifier).val, (yyvsp[0].identifier).val);
  }
#line 1926 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 230 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("Type:%s\n", (yyvsp[0].identifier).val);
  }
#line 1934 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 236 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1942 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 239 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1948 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 240 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("FunctionType 3\n");
    (yyval.func_proto_type) = new_func_proto_type(null, null);
  }
#line 1957 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 244 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 1963 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 297 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1971 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 300 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1979 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 306 "yacc/koala.y" /* yacc.c:1646  */
    {
    //new_var_decl($2, $3, null);
  }
#line 1987 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 309 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 1995 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 312 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2003 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 318 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = linked_list_new();
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2013 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 323 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("IDENTIFIER: %s\n", (yyvsp[0].identifier).val);
    (yyval.linked_list) = (yyvsp[-2].linked_list);
    linked_list_add_tail((yyval.linked_list), new_simple_var((yyvsp[0].identifier)));
  }
#line 2023 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 94:
#line 431 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("code block\n");
  }
#line 2031 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 471 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----statement\n");
  }
#line 2039 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 477 "yacc/koala.y" /* yacc.c:1646  */
    {
    //expr_tree_print($1);
    printf("----expression_statement\n");
  }
#line 2048 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 557 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2056 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 560 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2064 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 563 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2072 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 566 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[-1].expression);
  }
#line 2080 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 569 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2086 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 573 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("complex_primary\n");
  }
#line 2094 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 576 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2100 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 577 "yacc/koala.y" /* yacc.c:1646  */
    {}
#line 2106 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 623 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("INTEGER: %lld\n", (yyvsp[0].ival));
    (yyval.expression) = new_uint_expr((yyvsp[0].ival));
  }
#line 2115 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 627 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_float_expr((yyvsp[0].fval));
  }
#line 2123 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 630 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_string_expr((yyvsp[0].str_val));
  }
#line 2131 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 633 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = null;
  }
#line 2139 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 636 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_bool_expr(true);
  }
#line 2147 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 639 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_bool_expr(false);
  }
#line 2155 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 645 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2163 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 648 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2176 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 656 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].expression)->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_AFTER, (yyvsp[-1].expression));
    }
  }
#line 2189 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 664 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2197 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 667 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2205 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 670 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2213 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 673 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2221 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 676 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2229 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 682 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2237 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 685 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_INC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2250 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 693 "yacc/koala.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].expression)->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      (yyval.expression) = new_unary_exp(OP_DEC_BEFORE, (yyvsp[0].expression));
    }
  }
#line 2263 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 701 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2271 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 704 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_MINUS, (yyvsp[0].expression));
  }
#line 2279 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 707 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_BNOT, (yyvsp[0].expression));
  }
#line 2287 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 710 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_unary_exp(OP_LNOT, (yyvsp[0].expression));
  }
#line 2295 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 716 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2303 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 719 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_TIMES, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2311 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 722 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_DIVIDE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2319 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 725 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_MOD, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2327 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 731 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2335 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 734 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2343 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 737 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2351 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 743 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2359 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 746 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2367 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 749 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_RSHIFT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2375 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 755 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2383 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 758 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2391 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 761 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2399 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 764 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2407 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 767 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2415 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 773 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2423 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 776 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2431 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 779 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_NEQ, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2439 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 785 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2447 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 788 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2455 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 794 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2463 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 797 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BXOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2471 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 803 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2479 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 806 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_BOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2487 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 812 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2495 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 815 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2503 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 821 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2511 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 824 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = new_binary_exp(OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression));
  }
#line 2519 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 830 "yacc/koala.y" /* yacc.c:1646  */
    {
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 2527 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 836 "yacc/koala.y" /* yacc.c:1646  */
    {
  }
#line 2534 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 873 "yacc/koala.y" /* yacc.c:1646  */
    {
    printf("----basic_expression\n");
    //show_expr($1);
    //putchar('\n');
  }
#line 2544 "koala_yacc.c" /* yacc.c:1646  */
    break;

  case 214:
#line 878 "yacc/koala.y" /* yacc.c:1646  */
    {

  }
#line 2552 "koala_yacc.c" /* yacc.c:1646  */
    break;


#line 2556 "koala_yacc.c" /* yacc.c:1646  */
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
#line 885 "yacc/koala.y" /* yacc.c:1906  */


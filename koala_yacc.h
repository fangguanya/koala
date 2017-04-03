/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 14 "yacc/koala.y" /* yacc.c:1909  */

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

#line 166 "koala_yacc.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

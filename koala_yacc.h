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
    EQ = 258,
    NEQ = 259,
    GE = 260,
    LE = 261,
    AND = 262,
    OR = 263,
    NOT = 264,
    ELLIPSIS = 265,
    TRUE = 266,
    FALSE = 267,
    IF = 268,
    ELSE = 269,
    WHILE = 270,
    DO = 271,
    FOR = 272,
    IN = 273,
    SWITCH = 274,
    CASE = 275,
    BREAK = 276,
    CONTINUE = 277,
    DEFAULT = 278,
    VAR = 279,
    FUNC = 280,
    RETURN = 281,
    STRUCT = 282,
    INTERFACE = 283,
    TYPE = 284,
    CONST = 285,
    PACKAGE = 286,
    IMPORT = 287,
    INT8 = 288,
    INT16 = 289,
    INT32 = 290,
    INT64 = 291,
    UINT8 = 292,
    UINT16 = 293,
    UINT32 = 294,
    UINT64 = 295,
    FLOAT32 = 296,
    FLOAT64 = 297,
    BOOL = 298,
    STRING = 299,
    INTEGER = 300,
    HEX = 301,
    OCT = 302,
    FLOAT = 303,
    STRING_LITERAL = 304,
    ID = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 14 "yacc/koala.y" /* yacc.c:1909  */

  char *ident;
  char *str_val;
  unsigned long long ival;
  double fval;
  struct list_head *list;

#line 113 "koala_yacc.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOALA_YACC_H_INCLUDED  */

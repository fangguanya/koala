%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol.h"
#define YYDEBUG 1
%}

%union
{
  unsigned int uval;
  struct symtab *symp;
  int bval;
}

/* terminal */
%token ASSIGN ADD SUB MUL DIV CR LBRACE RBRACE SEMICOLON
%token LPARA RPARA TRUE FALSE IF
%token GT
%token <uval> NUMBER
%token <symp> ID

/* non-terminal */
%type <uval> expr term factor
%type <bval> logic_expr

%%

program : statement_list CR
  | program statement_list CR
  | program CR    /* multi CR */
  | CR
  ;

statement_list: statement
  | statement_list statement
  ;

statement: ID ASSIGN expr SEMICOLON {
    $1->value = $3;
    printf(">>> (%s) = (%d)\n", $1->name, $1->value);
  }
  | expr SEMICOLON {
    struct symtab *sym_tbl = symbol_lookup("_");
    sym_tbl->value = $1;
  }
  | SEMICOLON {
  }
  | if_stmt {
    printf("statement:if_stmt\n");
  }
  ;

if_stmt : IF LBRACE logic_expr RBRACE LPARA statement_list RPARA {
    if ($3 == 1) {
      printf("condtion: true\n");
    }
    else if ($3 == 0) {
      printf("condtion: false\n");
    }
    else {
      yyerror("if_stmt error");
    }
  }
  ;

logic_expr : TRUE {
    $$ = 1;
  }
  | FALSE {
    $$ = 0;
  }
  | expr GT expr {
    $$ = $1 > $3 ? 1 : 0;
  }
  ;

expr: term {
    $$ = $1;
  }
  | expr ADD term {
    $$ = $1 + $3;
    printf(">>> %d + %d = %d\n", $1, $3, $$);
  }
  | expr SUB term {
    $$ = $1 - $3;
    printf(">>> %d - %d = %d\n", $1, $3, $$);
  }
  ;

term: factor {
    $$ = $1;
  }
  | term MUL factor {
    $$ = $1 * $3;
    printf(">>> %d * %d = %d\n", $1, $3, $$);
  }
  | term DIV factor {
    if ($3 == 0)
    {
      yyerror("divide by zero");
      exit(1);
    }
    else
    {
      $$ = $1 / $3;
      printf(">>> %d / %d = %d\n", $1, $3, $$);
    }
  }
  ;

factor: NUMBER {
    $$ = $1;
  }
  | ID {
    $$ = $1->value;
  }
  | LBRACE expr RBRACE {
    $$ = $2;
  }
  | SUB factor {
    $$ = -$2;
  }
  ;

%%

extern char *yytext;

int yyerror(const char const *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

extern FILE *yyin;

int main()
{
  yyin = stdin;
  yyparse();
}

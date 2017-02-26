
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

%}

%union {
  char *ident;
  char *str_val;
  unsigned long long ival;
  double fval;
  struct list_head *list;
}

%token EQ
%token NEQ
%token GE
%token LE
%token AND
%token OR
%token NOT
%token ELLIPSIS

%token TRUE
%token FALSE

%token IF
%token ELSE
%token WHILE
%token DO
%token FOR
%token IN
%token SWITCH
%token CASE
%token BREAK
%token CONTINUE
%token DEFAULT
%token VAR
%token FUNC
%token RETURN
%token STRUCT
%token INTERFACE
%token TYPE
%token CONST
%token PACKAGE
%token IMPORT

%token INT8
%token INT16
%token INT32
%token INT64
%token UINT8
%token UINT16
%token UINT32
%token UINT64
%token FLOAT32
%token FLOAT64
%token BOOL
%token STRING

%token INTEGER
%token HEX
%token OCT
%token FLOAT

%token STRING_LITERAL
%token <ident> ID

/*--------------------------------------------------------------------------*/
%type <list> var_list

%start program

%%

semicolons
  : ';'
  | semicolons ';'
  ;

program
  : package_statement import_statements declarations
  | package_statement import_statements
  | package_statement                   declarations
  |                   import_statements declarations
  | package_statement
  |                   import_statements
  |                                     declarations
  ;

package_statement
  : PACKAGE qualified_name semicolons
  ;

import_statements
  : import_statement
  | import_statements import_statement
  ;

import_statement
  : IMPORT qualified_name semicolons
  | IMPORT qualified_name '.' '*' semicolons
  ;

qualified_name
  : ID {
  }
  | qualified_name '.' ID {
  }
  ;

declarations
  : type_declaration
  | declarations type_declaration
  | var_declaration
  | declarations var_declaration
  ;

type_declaration
  : TYPE ID STRUCT '{' field_declarations '}'
  | TYPE ID INTERFACE '{' method_declaration '}'
  | TYPE ID type_specifier semicolons
  ;

field_declarations
  : field_declaration
  | field_declarations field_declaration
  ;

field_declaration
  : ID type_specifier semicolons
  ;

method_declaration
  :
  ;

var_declaration
  : VAR var_list type_specifier semicolons
  | VAR var_list '=' var_initialization semicolons {
    printf("VAR\n");
    struct var_decl_stmt *stmt = new_var_decl_stmt();
    stmt->ident_list = $2;
    stmt->value_list = null;
    add_stmt(&stmt->stmt);
    show_var_list($2);
  }
  | VAR var_list type_specifier '=' var_initialization semicolons
  | VAR error
  ;

var_list
  : ID {
    $$ = new_list();
    struct variable *var = new_variable($1);
    LIST_ADD_TAIL($$, &var->var_node);
    printf("ID\n");
  }
  | var_list ',' ID {
    struct variable *var = new_variable($3);
    LIST_ADD_TAIL($1, &var->var_node);
    $$ = $1;
    printf("ID-LIST\n");
  }
  ;

var_initialization
  : INTEGER {
    printf("INTEGER\n");
  }
  | var_initialization ',' INTEGER {
    printf("INTEGER-LIST\n");
  }
  ;

para_type_list
  : type_specifier
  | para_type_list ',' type_specifier
  ;

return_type_list
  : type_specifier
  | '(' type_specifier ')'
  | '(' return_type_list ',' type_specifier ')'
  ;

type_specifier
  : primitive_type
  | FUNC '(' para_type_list ')' return_type_list
  | ID    /* user defined type */
  ;

/*
array_type
  : '[' ']' type_specifier
  | '[' INTEGER ']' type_specifier
  | array_type '[' ']' type_specifier
  | array_type '[' INTEGER ']' type_specifier
  ;
*/

primitive_type
  : UINT8
  | UINT16
  | UINT32
  | UINT64
  | INT8
  | INT16
  | INT32
  | INT64
  | FLOAT32
  | FLOAT64
  | BOOL
  | STRING
  ;

%%

extern char *yytext;

int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

extern FILE *yyin;

int main()
{
  koala_compiler_init();
  yyin = fopen("./test.koala", "r");
  yyparse();
}

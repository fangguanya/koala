
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

%}

%union {
  char unary_op;
  char *ident;
  int64 ival;
  float64 fval;
  char *str_val;
  struct value *value;
  struct list_head *list;
  struct expr_node *expr_node;
}

%token ELLIPSIS

%token ADD_ASSIGN
%token SUB_ASSIGN
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token AND_ASSIGN
%token OR_ASSIGN
%token XOR_ASSIGN
%token RIGHT_ASSIGN
%token LEFT_ASSIGN

%token EQ
%token NE
%token GE
%token LE
%token AND
%token OR
%token NOT
%token SHIFT_LEFT
%token SHIFT_RIGHT
%token INC
%token DEC

%token TOKEN_THIS

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
%token TOKEN_NIL

%token TOKEN_TRUE
%token TOKEN_FALSE

%token <ival> INTEGER
%token <ival> HEX
%token <ival> OCT
%token <fval> FLOAT

%token <str_val> STRING_LITERAL
%token <ident> ID
%token OP

/*--------------------------------------------------------------------------*/

%nonassoc IFX
%nonassoc ELSE
%nonassoc NO_CODE_BLOCK

/*--------------------------------------------------------------------------*/
%type <expr_node> qualified_name
%type <expr_node> literal_name
%type <expr_node> complex_primary
%type <expr_node> just_not_name
%type <expr_node> primary_expression
%type <expr_node> postfix_expression
%type <expr_node> unary_expression
%type <expr_node> multiplicative_expression
%type <expr_node> additive_expression
%type <expr_node> shift_expression
%type <expr_node> relational_expression
%type <expr_node> equality_expression
%type <expr_node> and_expression
%type <expr_node> exclusive_or_expression
%type <expr_node> inclusive_or_expression
%type <expr_node> logical_and_expression
%type <expr_node> logical_or_expression
%type <expr_node> expression
%type <expr_node> expression_statement

%type <unary_op> unary_operator

%start program

%%

semicolons
  : ';'
  ;

qualified_name
  : ID {
    struct expr_node *node = new_expr_node(ID);
    STRING_SET(node->s, $1);
    $$ = node;
  }
  | qualified_name '.' ID
  ;

type_name_list
  : type_name
  | type_name_list ',' type_name
  ;

type_name
  : primitive_type
  | qualified_name
  | array_type
  ;

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
  | INTERFACE '{' '}'
  ;

function_type
  : FUNC '(' ')'
  | FUNC '(' ')' return_type_list
  | FUNC '(' parameter_type_list ')'
  | FUNC '(' parameter_type_list ')' return_type_list
  ;

array_type
  : '[' INTEGER ']' type_name
  ;

field_name
  : ID
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

/*--------------------------------------------------------------------------*/

declarations
  : type_declaration
  | declarations type_declaration
  | variable_declaration
  | declarations variable_declaration
  | function_declaration
  | declarations function_declaration
  | method_declaration
  | declarations method_declaration
  ;

type_declaration
  : TYPE ID STRUCT '{' field_declarations '}'
  | TYPE ID INTERFACE '{' interface_function_declarations '}'
  | TYPE ID variable_type semicolons
  ;

field_declarations
  : field_declaration
  | field_declarations field_declaration
  ;

field_declaration
  : ID type_name semicolons
  ;

interface_function_declarations
  : interface_function_declaration
  | interface_function_declarations interface_function_declaration
  ;

interface_function_declaration
  : ID '(' ')' semicolons
  | ID '(' ')' return_type_list semicolons
  | ID '(' parameter_type_list ')' semicolons
  | ID '(' parameter_type_list ')' return_type_list semicolons
  | ID '(' parameter_list ')' semicolons
  | ID '(' parameter_list ')' return_type_list semicolons
  ;

return_type_list
  : type_name
  | '(' type_name_list ')'
  ;

parameter_type_list
  : type_name
  | parameter_type_list ',' type_name
  ;

parameter_list
  : ID type_name
  | parameter_list ',' ID type_name
  ;

/*--------------------------------------------------------------------------*/

function_declaration
  : FUNC ID '(' ')' code_block
  | FUNC ID '(' ')' return_type_list code_block
  | FUNC ID '(' parameter_list ')' code_block
  | FUNC ID '(' parameter_list ')' return_type_list code_block
  ;

anonymous_function_declaration
  : FUNC '(' ')' code_block
  | FUNC '(' ')' return_type_list code_block
  | FUNC '(' parameter_list ')' code_block
  | FUNC '(' parameter_list ')' return_type_list code_block
  ;

/*--------------------------------------------------------------------------*/

method_declaration
  : FUNC method_name '(' ')' code_block
  | FUNC method_name '(' ')' return_type_list code_block
  | FUNC method_name '(' parameter_list ')' code_block
  | FUNC method_name '(' parameter_list ')' return_type_list code_block
  ;

method_name
  : ID '.' ID
  ;

code_block
  : '{' local_variable_declaration_statements '}'
  | '{' '}'
  ;

/*--------------------------------------------------------------------------*/
local_variable_declaration_statements
  : local_variable_declaration_statement
  | local_variable_declaration_statements local_variable_declaration_statement
  ;

local_variable_declaration_statement
  : variable_declaration
  | statemnet
  ;

statemnet
  : expression_statement ';' {
    expr_tree_print($1);
  }
  | selection_statement
  | iteration_statemnet
  | jump_statement
  ;

selection_statement
  : if_statement
  | switch_statement
  ;

if_statement
  : IF '(' expression ')' code_block
  | IF '(' expression ')' code_block ELSE else_statemnet
  ;

else_statemnet
  : if_statement
  | code_block
  ;

switch_statement
  : SWITCH '(' expression ')' code_block
  ;

iteration_statemnet
  : WHILE '(' expression ')' code_block
  | DO code_block WHILE '(' expression ')' ';'
  | FOR '(' for_init for_expr for_incr ')' code_block
  ;

for_init
  : expression_statement ';'
  | variable_declaration
  | ';'
  ;

for_expr
  : expression ';'
  | ';'
  ;

for_incr
  : expression_statement
  ;

jump_statement
  : RETURN ';'
  | RETURN expression_list ';'
  ;

/*--------------------------------------------------------------------------*/
variable_declaration
  : VAR variable_list variable_type ';'
  | VAR variable_list '=' expression_list ';'
  | VAR variable_list variable_type '=' expression_list ';'
  ;

variable_list
  : ID
  | variable_list ',' ID
  ;

variable_type
  : type_name
  | function_type
  ;

/*-------------------------------------------------------------------------*/

primary_expression
  : qualified_name {
    $$ = $1;
  }
  | literal_name {

  }
  | just_not_name {
    $$ = $1;
  }
  ;

just_not_name
  : TOKEN_THIS {

  }
  | '(' expression ')' {

  }
  | complex_primary {
    $$ = $1;
  }
  ;

complex_primary
  : array_access {

  }
  | field_access {

  }
  | method_call {

  }
  ;

literal_name  //常量允许访问成员变量和成员方法，不允许数组操作
  : INTEGER {
    struct expr_node *node = new_expr_node(INTEGER);
    node->i = $1;
    $$ = node;
  }
  | FLOAT {

  }
  | STRING_LITERAL {
    struct expr_node *node = new_expr_node(STRING_LITERAL);
    STRING_SET(node->s, $1);
    $$ = node;
  }
  | TOKEN_NIL {
    struct expr_node *node = new_expr_node(TOKEN_NIL);
    node->f = 0.0;
    $$ = node;
  }
  | TOKEN_TRUE {
    struct expr_node *node = new_expr_node(BOOL);
    node->b = 1;
    $$ = node;
  }
  | TOKEN_FALSE {
    struct expr_node *node = new_expr_node(BOOL);
    node->b = 0;
    $$ = node;
  }
  ;

array_complex_primary
  : '(' expression ')'
  | array_access
  | field_access
  | method_call
  ;

array_access
  : qualified_name '[' expression ']'
  | array_complex_primary '[' expression ']' //常量不允许数组操作
  ;

field_access
  : just_not_name '.' ID
  ;

method_call
  : method_access '(' argument_list ')'
  | method_access '(' ')'
  ;

method_access
  : complex_primary
  | qualified_name
  ;

/*-------------------------------------------------------------------------*/

initializer_expression
  : struct_initializer
  | anonymous_function_declaration
  //| interface_initializer
  ;

struct_initializer
  : '{' '}'
  | '{' expression_list '}'
  | '{' field_initializer_list '}'
  | type_name '{' '}'
  | type_name '{' expression_list '}'
  | type_name '{' field_initializer_list '}'
  ;

field_initializer_list
  : field_initializer
  | field_initializer_list ',' field_initializer
  ;

field_initializer
  : field_name ':' expression
  ;

/*-------------------------------------------------------------------------*/

postfix_expression
  : primary_expression {
    $$ = $1;
  }
  | real_postfix_expression {

  }
  ;

real_postfix_expression
  : postfix_expression INC
  | postfix_expression DEC
  ;

argument_list
	: expression_list
	;

unary_expression
  : postfix_expression {
    $$ = $1;
  }
  | INC unary_expression {

  }
  | DEC unary_expression {

  }
  | unary_operator unary_expression {
    if ($1 == '+') {
      $$ = $2;
    } else if ($1 == '-') {
      $2->i = - $2->i;
      $$ = $2;
    } else if ($1 == '~') {
      $2->i = ~$2->i;
      $$ = $2;
    } else {
      if ($2->type == BOOL) {
        $2->b = !$2->b;
        $$ = $2;
      } else {
        yyerror("not a bool type, cannot NOT operation\n");
        exit(-1);
      }
    }
  }
  ;

unary_operator
  : '+' {
    $$ = '+';
  }
  | '-' {
    $$ = '-';
  }
	| '~' {
    $$ = '~';
  }
	| '!' {
    $$ = '!';
  }
	;

multiplicative_expression
	: unary_expression {
    $$ = $1;
  }
	| multiplicative_expression '*' unary_expression {

  }
	| multiplicative_expression '/' unary_expression {

  }
	| multiplicative_expression '%' unary_expression {

  }
	;

additive_expression
	: multiplicative_expression {
    $$ = $1;
  }
	| additive_expression '+' multiplicative_expression {
    struct expr_node *node = new_expr_node(OP);
    node->op = '+';
    node->left = $1;
    node->right = $3;
    $$ = node;
  }
	| additive_expression '-' multiplicative_expression {}
	;

shift_expression
	: additive_expression {
    $$ = $1;
  }
	| shift_expression SHIFT_LEFT additive_expression {}
	| shift_expression SHIFT_RIGHT additive_expression {}
	;

relational_expression
	: shift_expression {
    $$ = $1;
  }
	| relational_expression '<' shift_expression {}
	| relational_expression '>' shift_expression {}
	| relational_expression LE  shift_expression {}
	| relational_expression GE  shift_expression {}
	;

equality_expression
	: relational_expression {
    $$ = $1;
  }
	| equality_expression EQ relational_expression {}
	| equality_expression NE relational_expression {}
	;

and_expression
	: equality_expression {
    $$ = $1;
  }
	| and_expression '&' equality_expression {}
	;

exclusive_or_expression
	: and_expression {
    $$ = $1;
  }
	| exclusive_or_expression '^' and_expression {}
	;

inclusive_or_expression
	: exclusive_or_expression {
    $$ = $1;
  }
	| inclusive_or_expression '|' exclusive_or_expression {}
	;

logical_and_expression
  : inclusive_or_expression {
    $$ = $1;
  }
  | logical_and_expression AND inclusive_or_expression {}
  ;

logical_or_expression
  : logical_and_expression {
    $$ = $1;
  }
  | logical_or_expression OR logical_and_expression {}
  ;

expression
  : logical_or_expression {
    $$ = $1;
  }
  ;

expressions
  : expression
  | initializer_expression
  ;

expression_list
  : expressions
  | expression_list ',' expressions
  ;

/*--------------------------------------------------------------------------*/

assignment_expression
  : assignment_variable_list '=' expression_list
  | assignment_variable compound_assignment_operator expression
  ;

assignment_variable_list
  : assignment_variable
  | assignment_variable_list ',' assignment_variable
  ;

assignment_variable
  : qualified_name
  | array_access
  | field_access
  ;

compound_assignment_operator
  : ADD_ASSIGN
  | SUB_ASSIGN
  | MUL_ASSIGN
  | DIV_ASSIGN
  | MOD_ASSIGN
  | AND_ASSIGN
  | OR_ASSIGN
  | XOR_ASSIGN
  | RIGHT_ASSIGN
  | LEFT_ASSIGN
  ;

expression_statement
  : expression {
    $$ = $1;
  }
  | assignment_expression {

  }
  ;

/*--------------------------------------------------------------------------*/

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

int main(int argc, char *argv[])
{
  int i;
  printf("%d\n", argc);
  for (i = 0; i < argc; i++)
  {
    printf("%s\n", argv[i]);
  }

  koala_compiler_init();
  yyin = fopen(argv[1], "r");
  yyparse();
}

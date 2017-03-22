
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

%}

%union {
  string identifier;
  int primitive_type;
  char *ident;
  uint64 ival;
  float64 fval;
  string str_val;
  linked_list_t *linked_list;
  type_info_t *new_type_info;
  func_proto_type_t *func_proto_type;
  array_type_t *array_type;
  expr_t *expression;
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
%token <identifier> IDENTIFIER

/*--------------------------------------------------------------------------*/

%nonassoc ELSE

/*--------------------------------------------------------------------------*/
%type <str_val> qualified_name
%type <new_type_info> type_name
%type <primitive_type> primitive_type
%type <array_type> array_type
%type <func_proto_type> function_type
%type <linked_list> type_name_list
%type <linked_list> var_list

%type <expression> basic_expression
%type <expression> logical_or_expression
%type <expression> logical_and_expression
%type <expression> inclusive_or_expression
%type <expression> exclusive_or_expression
%type <expression> and_expression
%type <expression> equality_expression
%type <expression> relational_expression
%type <expression> shift_expression
%type <expression> additive_expression
%type <expression> multiplicative_expression
%type <expression> unary_expression
%type <expression> postfix_expression
%type <expression> primary_expression

%type <expression> constant


%start program

%%

qualified_name
  : IDENTIFIER {
    $$ = $1;
  }
  /*
  | qualified_name '.' IDENTIFIER {
    $$ = string_append($1, $3);
  }
  */
  ;

type_name_list
  : type_name {
    $$ = null;
  }
  | type_name_list ',' type_name {
    $$ = null;
  }
  ;

type_name
  : primitive_type {
    $$ = new_type_info($1, null);
  }
  | qualified_name {
    $$ = new_type_info(TYPE_DEFINED, $1.val);
  }
  | array_type {
    $$ = new_type_info(TYPE_ARRAY, $1);
  }
  | function_type {
    $$ = new_type_info(TYPE_FUNC, $1);
  }
  | INTERFACE '{' '}' {
    $$ = new_type_info(TYPE_INTF, null);
  }
  ;

primitive_type
  : UINT8 {
    $$ = TYPE_UINT8;
  }
  | UINT16 {
    $$ = TYPE_UINT16;
  }
  | UINT32 {
    $$ = TYPE_UINT32;
  }
  | UINT64 {
    $$ = TYPE_UINT64;
  }
  | INT8 {
    $$ = TYPE_INT8;
  }
  | INT16 {
    $$ = TYPE_INT16;
  }
  | INT32 {
    $$ = TYPE_INT32;
  }
  | INT64 {
    $$ = TYPE_INT64;
  }
  | FLOAT32 {
    $$ = TYPE_FLOAT32;
  }
  | FLOAT64 {
    $$ = TYPE_FLOAT64;
  }
  | BOOL {
    $$ = TYPE_BOOL;
  }
  | STRING {
    $$ = TYPE_STRING;
  }
  ;

function_type
  : FUNC '(' ')' {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' ')' return_type_list {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' type_name_list ')' {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' type_name_list ')' return_type_list {
    $$ = new_func_proto_type(null, null);
  }
  ;

array_type
  : '[' INTEGER ']' type_name {
    $$ = new_array_type($2, $4);
  }
  ;

return_type_list
  : type_name
  | '(' type_name_list ')'
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
  : PACKAGE qualified_name ';'
  ;

import_statements
  : import_statement
  | import_statements import_statement
  ;

import_statement
  : IMPORT qualified_name ';'
  | IMPORT qualified_name '.' '*' ';'
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
  : TYPE IDENTIFIER STRUCT '{' field_declarations '}'
  | TYPE IDENTIFIER INTERFACE '{' interface_function_declarations '}'
  | TYPE IDENTIFIER type_name ';'
  ;

field_declarations
  : IDENTIFIER type_name ';'
  | field_declarations IDENTIFIER type_name ';'
  ;

interface_function_declarations
  : interface_function_declaration
  | interface_function_declarations interface_function_declaration
  ;

interface_function_declaration
  : IDENTIFIER '(' ')' ';'
  | IDENTIFIER '(' ')' return_type_list ';'
  | IDENTIFIER '(' type_name_list ')' ';'
  | IDENTIFIER '(' type_name_list ')' return_type_list ';'
  | IDENTIFIER '(' parameter_list ')' ';'
  | IDENTIFIER '(' parameter_list ')' return_type_list ';'
  ;

parameter_list
  : IDENTIFIER type_name
  | parameter_list ',' IDENTIFIER type_name
  ;

/*--------------------------------------------------------------------------*/

function_declaration
  : FUNC IDENTIFIER '(' ')' code_block
  | FUNC IDENTIFIER '(' ')' return_type_list code_block
  | FUNC IDENTIFIER '(' parameter_list ')' code_block
  | FUNC IDENTIFIER '(' parameter_list ')' return_type_list code_block
  ;


anonymous_function_declaration
  : FUNC '(' ')' code_block
  | FUNC '(' ')' return_type_list code_block
  | FUNC '(' parameter_list ')' code_block
  | FUNC '(' parameter_list ')' return_type_list code_block
  ;


/*--------------------------------------------------------------------------*/

method_declaration
  : FUNC IDENTIFIER '.' IDENTIFIER '(' ')' code_block
  | FUNC IDENTIFIER '.' IDENTIFIER '(' ')' return_type_list code_block
  | FUNC IDENTIFIER '.' IDENTIFIER '(' parameter_list ')' code_block
  | FUNC IDENTIFIER '.' IDENTIFIER '(' parameter_list ')' return_type_list code_block
  ;

code_block
  : '{' local_variable_declaration_statements '}' {
    printf("code block\n");
  }
  | '{' '}'
  ;

/*--------------------------------------------------------------------------*/
local_variable_declaration_statements
  : local_variable_declaration_statement
  | local_variable_declaration_statements local_variable_declaration_statement
  ;

local_variable_declaration_statement
  : variable_declaration
  | statement {
    printf("----statement\n");
  }
  ;

statement
  : expression_statement ';' {
    //expr_tree_print($1);
    printf("----expression_statement\n");
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
  : IF '(' basic_expression ')' code_block
  | IF '(' basic_expression ')' code_block ELSE else_statemnet
  ;

else_statemnet
  : if_statement
  | code_block
  ;

switch_statement
  : SWITCH '(' basic_expression ')' code_block
  ;

iteration_statemnet
  : WHILE '(' basic_expression ')' code_block
  | DO code_block WHILE '(' basic_expression ')' ';'
  | FOR '(' for_init for_expr for_incr ')' code_block
  ;

for_init
  : expression_statement ';'
  | variable_declaration
  | ';'
  ;

for_expr
  : basic_expression ';'
  | ';'
  ;

for_incr
  : expression_statement
  ;

jump_statement
  : RETURN ';'
  | RETURN expression_list ';'
  ;

/*--------------------------------------------------------------------------.
|  |
|                                                     |
`--------------------------------------------------------------------------*/
variable_declaration
  : VAR var_list type_name ';' {
    new_var_decl($2, $3, null);
  }
  | VAR var_list '=' expression_list ';' {

  }
  | VAR var_list type_name '=' expression_list ';' {

  }
  ;

var_list
  : IDENTIFIER {
    printf("IDENTIFIER: %s\n", $1.val);
    $$ = linked_list_new();
    linked_list_add_tail($$, new_simple_var($1));
  }
  | var_list ',' IDENTIFIER {
    printf("IDENTIFIER: %s\n", $3.val);
    $$ = $1;
    linked_list_add_tail($$, new_simple_var($3));
  }
  ;

/*-------------------------------------------------------------------------*/
/*
array_complex_primary
  : '(' basic_expression ')'
  | array_access
  | field_access
  | method_call
  ;

array_access
  : qualified_name '[' basic_expression ']'
  | array_complex_primary '[' basic_expression ']' //常量不允许数组操作
  ;

field_access
  : just_not_name '.' IDENTIFIER
  ;

method_call
  : method_access '(' argument_list ')'
  | method_access '(' ')'
  ;

method_access
  : complex_primary
  | qualified_name
  ;

argument_list
	: expression_list
	;
*/

/*-------------------------------------------------------------------------*/

initializer_expression
  : '{' '}'
  | '{' expression_list '}'
  | '{' field_initial_list '}'
  | '{' array_initial_list '}'
  | qualified_name '{' '}'
  | qualified_name '{' expression_list '}'
  | qualified_name '{' field_initial_list '}'
  | array_type '{' '}'
  | array_type '{' expression_list '}'
  | array_type '{' array_initial_list '}'
  | anonymous_function_declaration
  | primitive_type '(' basic_expression ')'
  ;

field_initial_list
  : IDENTIFIER ':' expression
  | field_initial_list ',' IDENTIFIER ':' expression
  ;

array_initial_list
  : INTEGER ':' expression
  | array_initial_list ',' INTEGER ':' expression
  ;

/*-------------------------------------------------------------------------*/

primary_expression
  : qualified_name {    /* IDENTIFIER { */
    $$ = new_string_expr($1);
  }
  | constant {
    $$ = $1;
  }
  | '(' basic_expression ')' {
    $$ = $2;
  }
  ;

constant  //常量允许访问成员变量和成员方法，不允许数组操作
  : INTEGER {
    $$ = new_uint_expr($1);
  }
  | FLOAT {
    $$ = new_float_expr($1);
  }
  | STRING_LITERAL {
    $$ = new_string_expr($1);
  }
  | TOKEN_NIL {
    $$ = null;
  }
  | TOKEN_TRUE {
    $$ = new_bool_expr(true);
  }
  | TOKEN_FALSE {
    $$ = new_bool_expr(false);
  }
  ;

postfix_expression
  : primary_expression {
    $$ = $1;
  }
  | postfix_expression INC {
    if ($1->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_INC_AFTER, $1);
    }
  }
  | postfix_expression DEC {
    if ($1->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_DEC_AFTER, $1);
    }
  }
  | postfix_expression '.' IDENTIFIER {

  }
  | postfix_expression '[' basic_expression ']' {

  }
  | postfix_expression '(' ')' {

  }
  | postfix_expression '(' argument_expression_list ')' {

  }
  ;

argument_expression_list
	: basic_expression
	| argument_expression_list ',' basic_expression
	;

unary_expression
  : postfix_expression {
    $$ = $1;
  }
  | INC unary_expression {
    if ($2->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_INC_BEFORE, $2);
    }
  }
  | DEC unary_expression {
    if ($2->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_DEC_BEFORE, $2);
    }
  }
  | '+' unary_expression {
    $$ = $2;
  }
  | '-' unary_expression {
    $$ = new_unary_exp(OP_MINUS, $2);
  }
  | '~' unary_expression {
    $$ = new_unary_exp(OP_BNOT, $2);
  }
  | '!' unary_expression {
    $$ = new_unary_exp(OP_LNOT, $2);
  }
  ;

multiplicative_expression
	: unary_expression {
    $$ = $1;
  }
	| multiplicative_expression '*' unary_expression {
    $$ = new_binary_exp(OP_TIMES, $1, $3);
  }
	| multiplicative_expression '/' unary_expression {
    $$ = new_binary_exp(OP_DIVIDE, $1, $3);
  }
	| multiplicative_expression '%' unary_expression {
    $$ = new_binary_exp(OP_MOD, $1, $3);
  }
	;

additive_expression
	: multiplicative_expression {
    $$ = $1;
  }
	| additive_expression '+' multiplicative_expression {
    $$ = new_binary_exp(OP_PLUS, $1, $3);
  }
	| additive_expression '-' multiplicative_expression {
    $$ = new_binary_exp(OP_MINUS, $1, $3);
  }
	;

shift_expression
	: additive_expression {
    $$ = $1;
  }
	| shift_expression SHIFT_LEFT additive_expression {
    $$ = new_binary_exp(OP_LSHIFT, $1, $3);
  }
	| shift_expression SHIFT_RIGHT additive_expression {
    $$ = new_binary_exp(OP_RSHIFT, $1, $3);
  }
	;

relational_expression
	: shift_expression {
    $$ = $1;
  }
	| relational_expression '<' shift_expression {
    $$ = new_binary_exp(OP_LT, $1, $3);
  }
	| relational_expression '>' shift_expression {
    $$ = new_binary_exp(OP_GT, $1, $3);
  }
	| relational_expression LE  shift_expression {
    $$ = new_binary_exp(OP_LE, $1, $3);
  }
	| relational_expression GE  shift_expression {
    $$ = new_binary_exp(OP_GE, $1, $3);
  }
	;

equality_expression
	: relational_expression {
    $$ = $1;
  }
	| equality_expression EQ relational_expression {
    $$ = new_binary_exp(OP_EQ, $1, $3);
  }
	| equality_expression NE relational_expression {
    $$ = new_binary_exp(OP_NEQ, $1, $3);
  }
	;

and_expression
	: equality_expression {
    $$ = $1;
  }
	| and_expression '&' equality_expression {
    $$ = new_binary_exp(OP_BAND, $1, $3);
  }
	;

exclusive_or_expression
	: and_expression {
    $$ = $1;
  }
	| exclusive_or_expression '^' and_expression {
    $$ = new_binary_exp(OP_BXOR, $1, $3);
  }
	;

inclusive_or_expression
	: exclusive_or_expression {
    $$ = $1;
  }
	| inclusive_or_expression '|' exclusive_or_expression {
    $$ = new_binary_exp(OP_BOR, $1, $3);
  }
	;

logical_and_expression
  : inclusive_or_expression {
    $$ = $1;
  }
  | logical_and_expression AND inclusive_or_expression {
    $$ = new_binary_exp(OP_LAND, $1, $3);
  }
  ;

logical_or_expression
  : logical_and_expression {
    $$ = $1;
  }
  | logical_or_expression OR logical_and_expression {
    $$ = new_binary_exp(OP_LOR, $1, $3);
  }
  ;

basic_expression
  : logical_or_expression {
    $$ = $1;
  }
  ;

expression
  : basic_expression {
  }
  | initializer_expression
  ;

expression_list
  : expression
  | expression_list ',' expression
  ;

/*--------------------------------------------------------------------------*/

assignment_expression
  : assignment_variable_list '=' expression_list
  | assignment_variable compound_assignment_operator basic_expression
  ;

assignment_variable_list
  : assignment_variable
  | assignment_variable_list ',' assignment_variable
  ;

assignment_variable
  : qualified_name
  //| array_access
  //| field_access
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
  : basic_expression {
    printf("----basic_expression\n");
    show_expr($1);
    putchar('\n');
  }
  | assignment_expression {

  }
  ;

/*--------------------------------------------------------------------------*/

%%

int yyerror(const char *str)
{
  fprintf(stderr, "%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  fprintf(stdout, "%s\n", str);
}

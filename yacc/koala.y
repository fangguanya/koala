
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
}

%token ELLIPSIS

%token VAR_ASSIGN
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
%token AS
%token NEW

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
%token ROOT_OBJECT
%token DIMS

%token TOKEN_THIS
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
//%type <new_type_info> Type
%type <type> PrimitiveType
%type <func_proto_type> FunctionType
%type <linked_list> TypeList
%type <linked_list> VariableList

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


%start Program

%%

ModuleFilePathName
  : IDENTIFIER {
    //$$ = null;
  }
  | ModuleFilePathName '.' IDENTIFIER {
    //$$ = null;
  }
  ;
/*
ExpressionName
  : IDENTIFIER {}
  | ExpressionName '.' IDENTIFIER {}
  ;
*/

TypeList
  : Type {}
  | TypeList ',' Type {}
  ;

Type
  : PrimitiveType {
    //$$ = new_type_info($1, null);
  }
  | ModuleType {

  }
  | FunctionType {}
  | DIMS PrimitiveType {}
  | DIMS ModuleType {}
  | DIMS FunctionType {}
  ;

PrimitiveType
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
  | ROOT_OBJECT {
    $$ = TYPE_ROOT_OBJECT;
  }
  ;

ModuleType
  : IDENTIFIER {
    printf("Type:%s\n", $1.val);
  }
  | IDENTIFIER '.' IDENTIFIER {
    printf("Module:%s, Type:%s\n", $1.val, $3.val);
  }
  ;

FunctionType
  : FUNC '(' ')' {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' ')' ReturnTypeList {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' TypeList ')' {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' TypeList ')' ReturnTypeList {
    $$ = new_func_proto_type(null, null);
  }
  ;

ReturnTypeList
  : Type
  | '(' Type ')'
  | '(' ReturnTypeList ',' Type ')'
  ;

/*--------------------------------------------------------------------------*/
Program
  : PackageDeclaration ImportDeclarations Declarations
  | PackageDeclaration ImportDeclarations
  | PackageDeclaration                    Declarations
  |                    ImportDeclarations Declarations
  | PackageDeclaration
  |                    ImportDeclarations
  |                                       Declarations
  ;

PackageDeclaration
  : PACKAGE ModuleFilePathName SemiOrEmpty
  ;

ImportDeclarations
  : ImportDeclaration
  | ImportDeclarations ImportDeclaration
  ;

ImportDeclaration
  : IMPORT ModuleFilePathName SemiOrEmpty
  | IMPORT ModuleFilePathName AS IDENTIFIER SemiOrEmpty
  | IMPORT ModuleFilePathName '.' '*' SemiOrEmpty
  ;

Declarations
  : Declaration
  | Declarations Declaration
  ;

Declaration
  : VariableDeclaration
  | TypeDeclaration
  | FunctionDeclaration
  ;

/*--------------------------------------------------------------------------.
|  |
|                                                     |
`--------------------------------------------------------------------------*/
VariableDeclaration
  : VAR VariableList Type ';' {
    //new_var_decl($2, $3, null);
  }
  | VAR VariableList '=' VariableInitializerList ';' {

  }
  | VAR VariableList Type '=' VariableInitializerList ';' {

  }
  ;

VariableList
  : IDENTIFIER {
    printf("IDENTIFIER: %s\n", $1.val);
    $$ = linked_list_new();
    linked_list_add_tail($$, new_simple_var($1));
  }
  | VariableList ',' IDENTIFIER {
    printf("IDENTIFIER: %s\n", $3.val);
    $$ = $1;
    linked_list_add_tail($$, new_simple_var($3));
  }
  ;

VariableInitializerList
  : ComplexVariableInitializer
  | VariableInitializerList ',' ComplexVariableInitializer
  ;

ComplexVariableInitializer
  : basic_expression {}
  | PrimitiveType '(' basic_expression ')' {}
  | AnonymousFunctionDeclaration {}
  | '{' ArrayInitializerList '}'
  | DimExprs Type
  | DimExprs Type '{' ArrayInitializerList '}'
  | DimExprs Type '{' '}'
  ;

ArrayInitializerList
  : ArrayInitializer
  | ArrayInitializerList ',' ArrayInitializer
  ;

DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
  : '[' basic_expression ']'
  ;

ArrayInitializer
  : basic_expression {}
  | PrimitiveType '(' basic_expression ')' {}
  | AnonymousFunctionDeclaration {}
  | ArrayPositionInitializer {}
  | '{' ArrayInitializerList '}'
  ;

ArrayPositionInitializer
  : INTEGER ':' ArrayInitializer
  ;

/*--------------------------------------------------------------------------*/

SemiOrEmpty
  : %empty
  | ';'
  ;

TypeDeclaration
  : TYPE IDENTIFIER STRUCT '{' MemberDeclarations '}' SemiOrEmpty
  | TYPE IDENTIFIER INTERFACE '{' InterfaceFunctionDeclarations '}' SemiOrEmpty
  | TYPE IDENTIFIER Type ';'
  ;

MemberDeclarations
  : MemberDeclaration
  | MemberDeclarations MemberDeclaration
  ;

MemberDeclaration
  : FieldDeclaration
  | MethodDeclaration
  ;

FieldDeclaration
  : VAR IDENTIFIER Type ';'
  | IDENTIFIER Type ';'
  ;

MethodDeclaration
  : MethodDeclarationHeader1 CodeBlock
  ;

MethodDeclarationHeader1
  : FUNC IDENTIFIER '(' ')'
  | FUNC IDENTIFIER '(' ')' ReturnTypeList
  | FUNC IDENTIFIER '(' ParameterList ')'
  | FUNC IDENTIFIER '(' ParameterList ')' ReturnTypeList
  | IDENTIFIER '(' ')'
  | IDENTIFIER '(' ')' ReturnTypeList
  | IDENTIFIER '(' ParameterList ')'
  | IDENTIFIER '(' ParameterList ')' ReturnTypeList
  ;

MethodDeclarationHeader2
  : FUNC IDENTIFIER '(' TypeList ')'
  | FUNC IDENTIFIER '(' TypeList ')' ReturnTypeList
  | IDENTIFIER '(' TypeList ')'
  | IDENTIFIER '(' TypeList ')' ReturnTypeList
  ;

ParameterList
  : IDENTIFIER Type
  | ParameterList ',' IDENTIFIER Type
  ;

CodeBlock
  : '{' local_variable_declaration_statements '}' {
    printf("code block\n");
  }
  | '{' '}'
  ;

InterfaceFunctionDeclarations
  : InterfaceFunctionDeclaration
  | InterfaceFunctionDeclarations InterfaceFunctionDeclaration
  ;

InterfaceFunctionDeclaration
  : MethodDeclarationHeader1 ';'
  | MethodDeclarationHeader2 ';'
  ;

/*--------------------------------------------------------------------------*/

FunctionDeclaration
  : FUNC IDENTIFIER '(' ')' CodeBlock
  | FUNC IDENTIFIER '(' ')' ReturnTypeList CodeBlock
  | FUNC IDENTIFIER '(' ParameterList ')' CodeBlock
  | FUNC IDENTIFIER '(' ParameterList ')' ReturnTypeList CodeBlock
  ;

AnonymousFunctionDeclaration
  : FUNC '(' ')' CodeBlock
  | FUNC '(' ')' ReturnTypeList CodeBlock
  | FUNC '(' ParameterList ')' CodeBlock
  | FUNC '(' ParameterList ')' ReturnTypeList CodeBlock
  ;

/*--------------------------------------------------------------------------*/
local_variable_declaration_statements
  : local_variable_declaration_statement
  | local_variable_declaration_statements local_variable_declaration_statement
  ;

local_variable_declaration_statement
  : VariableDeclaration
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
  : IF '(' basic_expression ')' CodeBlock
  | IF '(' basic_expression ')' CodeBlock ELSE else_statemnet
  ;

else_statemnet
  : if_statement
  | CodeBlock
  ;

switch_statement
  : SWITCH '(' basic_expression ')' CodeBlock
  ;

iteration_statemnet
  : WHILE '(' basic_expression ')' CodeBlock
  | DO CodeBlock WHILE '(' basic_expression ')' ';'
  | FOR '(' for_init for_expr for_incr ')' CodeBlock
  ;

for_init
  : expression_statement ';'
  | VariableDeclaration
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

/*-------------------------------------------------------------------------*/
/*
array_access
  : IDENTIFIER '[' basic_expression ']'
  | just_not_name '[' basic_expression ']' //常量不允许数组操作
  ;

field_access
  : just_not_name '.' IDENTIFIER {
    printf(">>>>>>>>>>%s\n", $3.val);
  }
  ;

method_call
  : method_access '(' expression_list ')'
  | method_access '(' ')'
  ;

method_access
  : complex_primary
  | IDENTIFIER
  ;
*/
/*-------------------------------------------------------------------------*/

primary_expression
  : IDENTIFIER {

  }
  | constant {
    $$ = $1;
  }
  | TOKEN_THIS {

  }
  | '(' basic_expression ')' {
    $$ = $2;
  }
  ;
/*
just_not_name
  : TOKEN_THIS {}
  | '(' basic_expression ')' {
    $$ = $2;
  }
  | complex_primary {
    //$$ = $1;
    printf("complex_primary\n");
  }
  ;


complex_primary_expression
  : array_access {

  }
  | field_access {
    printf("field_access\n");
  }
  | method_call {

  }

array_access
  :
  | ExpressionName DimExpr
  | complex_primary_expression DimExpr
  ;

DimExpr
  : '[' basic_expression ']'
  ;
*/

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
  | postfix_expression '(' expression_list ')' {

  }
  | postfix_expression '(' ')' {

  }
  | postfix_expression '(' ')' CodeBlock {

  }
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
  //| ComplexVariableInitializer
  ;

expression_list
  : expression
  | expression_list ',' expression
  ;

postfix_expression_list
  : postfix_expression
  | postfix_expression_list ',' postfix_expression
  ;

/*--------------------------------------------------------------------------*/

assignment_expression
  : postfix_expression_list '=' VariableInitializerList
  | postfix_expression compound_assignment_operator ComplexVariableInitializer
  | postfix_expression VAR_ASSIGN ComplexVariableInitializer
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

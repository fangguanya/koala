
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

%}

%union {
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
  trailer_t *trailer;
  term_t term;
  anonymous_function_t anonymous;
}

%token ELLIPSIS

%token TYPELESS_ASSIGN
%token ADD_ASSIGN
%token SUB_ASSIGN
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token AND_ASSIGN
%token OR_ASSIGN
%token XOR_ASSIGN
%token RIGHT_SHIFT_ASSIGN
%token LEFT_SHIFT_ASSIGN

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
%token FALLTHROUGH
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
%token FUNC_HEADER

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
%token <dims> DIMS

%token SELF
%token TOKEN_NIL
%token TOKEN_TRUE
%token TOKEN_FALSE

%token <ival> INTEGER
%token <ival> HEX
%token <ival> OCT
%token <fval> FLOAT

%token <string_literal> STRING_LITERAL
%token <ident> ID

/*--------------------------------------------------------------------------*/

%nonassoc ELSE

%precedence ID
%precedence '.'

%precedence ')'
%precedence '('

//%expect 2

/*--------------------------------------------------------------------------*/
%type <primitive_type> PrimitiveType
%type <string_array_2> ModuleType
%type <base_type> FunctionType
%type <base_type> BaseType
%type <name_type> TypeName

%type <linked_list> TypeNameList
%type <linked_list> VariableList
%type <linked_list> TrailerList
%type <linked_list> ParameterList
%type <linked_list> ReturnTypeList
%type <linked_list> CodeBlock
%type <linked_list> LocalVariableDeclsOrStatements

%type <expr> LocalVariableDeclOrStatement
%type <expr> Statement
%type <expr> ExpressionStatement

%type <expr> ExpressionList
%type <expr> Expression
%type <expr> LogicalOrExpression
%type <expr> LogicalAndExpression
%type <expr> InclusiveOrExpression
%type <expr> ExclusiveOrExpression
%type <expr> AndExpression
%type <expr> EqualityExpression
%type <expr> RelationalExpression
%type <expr> ShiftExpression
%type <expr> AdditiveExpression
%type <expr> MultiplicativeExpression
%type <expr> UnaryExpression
%type <expr> PostfixExpression
%type <expr> PrimaryExpression

%type <term> Literal
%type <term> Term
%type <anonymous> AnonymousFunctionDeclaration

%type <trailer> Trailer

%start Program

%%

ModulePathName
  : ID {
    //$$ = null;
  }
  | ModulePathName '.' ID {
    //$$ = null;
  }
  ;

TypeNameList
  : TypeName {
    $$ = linked_list_new();
    linked_list_add_tail($$, $1);
  }
  | TypeNameList ',' TypeName {
    linked_list_add_tail($1, $3);
    $$ = $1;
  }
  ;

TypeName
  : BaseType {
    $$ = new_name_type(0, $1);
  }
  | DIMS BaseType {
    $$ = new_name_type($1, $2);
  }
  ;

BaseType
  : PrimitiveType {
    $$ = new_primitive_type($1);
  }
  | ModuleType {
    $$ = new_module_type($1);
  }
  | FunctionType {
    $$ = $1;
  }
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
  : ID '.' ID {
    printf("Module:%s, TypeName:%s\n", $1.val, $3.val);
    $$[0] = $1; $$[1] = $3;
  }
  | ID {
    printf("TypeName:%s\n", $1.val);
    $$[0].val = null;
    $$[0].len = 0;
    $$[1] = $1;
  }
  ;

FunctionType
  : FUNC '(' ')' ReturnTypeList {
    $$ = new_func_type(null, $4);
  }
  | FUNC '(' ')' {
    $$ = new_func_type(null, null);
  }
  | FUNC '(' TypeNameList ')' ReturnTypeList {
    $$ = new_func_type($3, $5);
  }
  | FUNC '(' TypeNameList ')' {
    $$ = new_func_type($3, null);
  }
  ;

ReturnTypeList
  : TypeName {
    $$ = linked_list_new();
    linked_list_add_tail($$, $1);
  }
  | '(' TypeNameList ')' {
    $$ = $2;
  }
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
  : PACKAGE ModulePathName SemiOrEmpty
  ;

ImportDeclarations
  : ImportDeclaration
  | ImportDeclarations ImportDeclaration
  ;

ImportDeclaration
  : IMPORT ModulePathName SemiOrEmpty
  | IMPORT ModulePathName AS ID SemiOrEmpty
  | IMPORT ModulePathName '.' '*' SemiOrEmpty
  ;

Declarations
  : Declaration
  | Declarations Declaration
  ;

Declaration
  : ConstDeclaration
  | VariableDeclaration
  | TypeDeclaration
  | FunctionDeclaration
  ;

/*--------------------------------------------------------------------------.
|  |
|                                                     |
`--------------------------------------------------------------------------*/
ConstDeclaration
  : CONST VariableList '=' ArrayInitializerList ';' {

  }
  | CONST VariableList TypeName '=' ArrayInitializerList ';' {

  }
  ;

VariableDeclaration
  : VAR VariableList TypeName ';' {
    //new_var_decl($2, $3, null);
  }
  | VAR VariableList '=' VariableInitializerList ';' {

  }
  | VAR VariableList TypeName '=' VariableInitializerList ';' {

  }
  ;

VariableList
  : ID {
    printf("ID: %s\n", $1.val);
    //$$ = linked_list_new();
    //linked_list_add_tail($$, new_simple_var($1));
  }
  | VariableList ',' ID {
    printf("ID: %s\n", $3.val);
    //$$ = $1;
    //linked_list_add_tail($$, new_simple_var($3));
  }
  ;

VariableInitializerList
  : ArrayInitializerList
  ;

VariableInitializer
  : Expression
  | '{' ArrayInitializerList '}'
  ;

ArrayInitializerList
  : VariableInitializer
  | ArrayInitializerList ',' VariableInitializer
  ;

/*--------------------------------------------------------------------------*/

SemiOrEmpty
  : %empty
  | ';'
  ;

TypeDeclaration
  : TYPE ID STRUCT '{' MemberDeclarations '}' SemiOrEmpty
  | TYPE ID INTERFACE '{' InterfaceFunctionDeclarations '}' SemiOrEmpty
  | TYPE ID TypeName ';'
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
  : VAR ID TypeName ';'
  | ID TypeName ';'
  ;

MethodDeclaration
  : MethodDeclarationHeader1 CodeBlock
  ;

MethodDeclarationHeader1
  : FUNC ID '(' ')' ReturnTypeList
  | FUNC ID '(' ')'
  | FUNC ID '(' ParameterList ')' ReturnTypeList
  | FUNC ID '(' ParameterList ')'
  | ID '(' ')' ReturnTypeList
  | ID '(' ')'
  | ID '(' ParameterList ')' ReturnTypeList
  | ID '(' ParameterList ')'
  ;

MethodDeclarationHeader2
  : FUNC ID '(' TypeNameList ')' ReturnTypeList
  | FUNC ID '(' TypeNameList ')'
  | ID '(' TypeNameList ')' ReturnTypeList
  | ID '(' TypeNameList ')'
  ;

ParameterList
  : ID TypeName {
    $$ = linked_list_new();
    linked_list_add_tail($$, new_variable($1, $2));
  }
  | ParameterList ',' ID TypeName {
    linked_list_add_tail($1, new_variable($3, $4));
    $$ = $1;
  }
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
  : FUNC ID '(' ')' ReturnTypeList CodeBlock
  | FUNC ID '(' ')' CodeBlock
  | FUNC ID '(' ParameterList ')' ReturnTypeList CodeBlock
  | FUNC ID '(' ParameterList ')' CodeBlock
  ;

AnonymousFunctionDeclaration
  : FUNC '(' ')' ReturnTypeList CodeBlock {
    $$ = new_anonymous_func(null, $4, $5);
  }
  | FUNC '(' ')' CodeBlock {
    $$ = new_anonymous_func(null, null, $4);
  }
  | FUNC '(' ParameterList ')' ReturnTypeList CodeBlock {
    $$ = new_anonymous_func($3, $5, $6);
  }
  | FUNC '(' ParameterList ')' CodeBlock {
    $$ = new_anonymous_func($3, null, $5);
  }
  ;

/*--------------------------------------------------------------------------*/
CodeBlock
  : '{' LocalVariableDeclsOrStatements '}' {
    $$ = $2;
  }
  | '{' '}' {
    $$ = null;
  }
  ;

LocalVariableDeclsOrStatements
  : LocalVariableDeclOrStatement {
    $$ = linked_list_new();
    linked_list_add_tail($$, $1);
  }
  | LocalVariableDeclsOrStatements LocalVariableDeclOrStatement {
    linked_list_add_tail($1, $2);
    $$ = $1;
  }
  ;

LocalVariableDeclOrStatement
  : VariableDeclaration {

  }
  | Statement {
    $$ = $1;
  }
  ;

Statement
  : ExpressionStatement ';' {
    $$ = $1;
  }
  | SelectionStatement {

  }
  | IterationStatemnet {

  }
  | JumpStatement {

  }
  | CodeBlock {
    $$ = new_exp_list($1);
  }
  ;

ExpressionStatement
  : Expression {
    show_expr($1);
    printf("----ExpressionStatement----\n");
  }
  | AssignmentExpression {
    printf("----AssignmentExpressionStatement----\n");
  }
  ;

SelectionStatement
  : IfStatement
  | SwitchStatement
  ;

IfStatement
  : IF '(' Expression ')' CodeBlock
  | IF '(' Expression ')' CodeBlock ELSE CodeBlock
  | IF '(' Expression ')' CodeBlock ELSE IfStatement
  ;

SwitchStatement
  : SWITCH '(' Expression ')' CodeBlock
  ;

IterationStatemnet
  : WHILE '(' Expression ')' CodeBlock
  | DO CodeBlock WHILE '(' Expression ')' ';'
  | FOR '(' ForInit ForExpr ForIncr ')' CodeBlock
  ;

ForInit
  : ExpressionStatement ';'
  | VariableDeclaration
  | ';'
  ;

ForExpr
  : Expression ';'
  | ';'
  ;

ForIncr
  : ExpressionStatement
  ;

JumpStatement
  : BREAK ';'
  | FALLTHROUGH ';'
  | CONTINUE ';'
  | RETURN ';' {
    printf("return----\n");
  }
  | RETURN ExpressionList ';' {
    printf("return----\n");
  }
  ;

ExpressionList
  : Expression {
    linked_list_t *list = linked_list_new();
    linked_list_add_tail(list, $1);
    $$ = new_exp_list(list);
  }
  | ExpressionList ',' Expression {
    linked_list_add_tail($1->list, $3);
    $$ = $1;
  }
  ;

/*-------------------------------------------------------------------------*/

PrimaryExpression
  : Term {
    $$ = new_exp_term($1);
  }
  | Term TrailerList {
    $$ = new_exp_term(new_term_trailer($1, $2));
  }
  ;

Term
  : ID {
    $$ = new_term_id($1);
  }
  | SELF {
    $$ = new_term_self();
  }
  | Literal {
    $$ = $1;
  }
  | PrimitiveType '(' Literal ')' {
    printf("literal with type declaration\n");
    check_primitive_type($1, $3);
    $$ = $3;
  }
  | '(' Expression ')' {
    $$ = new_term_exp($2);
  }
  | AnonymousFunctionDeclaration {
    $$ = new_term_anonymous($1);
  }
  | DimExprs BaseType {}
  | DimExprs DIMS BaseType {}
  | DimExprs BaseType '{' ArrayInitializerList '}' {}
  | DimExprs DIMS BaseType '{' ArrayInitializerList '}' {}
  | DIMS BaseType '{' ArrayInitializerList '}' {}
  ;

Literal  //常量允许访问成员变量和成员方法，不允许数组操作
  : INTEGER {
    $$ = new_term_uint($1);
  }
  | FLOAT {
    $$ = new_term_float($1);
  }
  | STRING_LITERAL {
    $$ = new_term_string($1);
  }
  | TOKEN_NIL {
    $$ = new_term_null();
  }
  | TOKEN_TRUE {
    $$ = new_term_bool(true);
  }
  | TOKEN_FALSE {
    $$ = new_term_bool(false);
  }
  ;

DimExprs
  : DimExpr
  | DimExprs DimExpr
  ;

DimExpr
  : '[' Expression ']'
  ;

TrailerList
  : Trailer {
    $$ = linked_list_new();
    linked_list_add_tail($$, $1);
  }
  | TrailerList Trailer {
    linked_list_add_tail($$, $2);
  }
  ;

Trailer
  : '.' ID {
    $$ = new_trailer_field_access($2);
  }
  | '[' Expression ']' {
    $$ = new_trailer_array_access($2);
  }
  | '(' ExpressionList ')' {
    $$ = new_trailer_func_call($2->list);
  }
  | '(' ')' {
    $$ = new_trailer_func_call(null);
  }
  | '(' ')' '{' FunctionDeclarationList '}' {
    $$ = new_trailer_interface_implementation();
  }
  ;

FunctionDeclarationList
  : FunctionDeclaration
  | FunctionDeclarationList FunctionDeclaration
  ;

PostfixExpression
  : PrimaryExpression
  | PostfixExpression INC
  | PostfixExpression DEC
  ;

UnaryExpression
  : PostfixExpression {
    $$ = $1;
  }
  | INC UnaryExpression {
    if ($2->kind != EXP_TERM) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      $$ = new_exp_unary(OP_INC_BEFORE, $2);
    }
  }
  | DEC UnaryExpression {
    if ($2->kind != EXP_TERM) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      $$ = new_exp_unary(OP_DEC_BEFORE, $2);
    }
  }
  | '+' UnaryExpression {
    $$ = $2;
  }
  | '-' UnaryExpression {
    $$ = new_exp_unary(OP_MINUS, $2);
  }
  | '~' UnaryExpression {
    $$ = new_exp_unary(OP_BNOT, $2);
  }
  | '!' UnaryExpression {
    $$ = new_exp_unary(OP_LNOT, $2);
  }
  ;

MultiplicativeExpression
  : UnaryExpression {
    $$ = $1;
  }
  | MultiplicativeExpression '*' UnaryExpression {
    $$ = new_exp_binary(OP_TIMES, $1, $3);
  }
  | MultiplicativeExpression '/' UnaryExpression {
    $$ = new_exp_binary(OP_DIVIDE, $1, $3);
  }
  | MultiplicativeExpression '%' UnaryExpression {
    $$ = new_exp_binary(OP_MOD, $1, $3);
  }
  ;

AdditiveExpression
  : MultiplicativeExpression {
    $$ = $1;
  }
  | AdditiveExpression '+' MultiplicativeExpression {
    $$ = new_exp_binary(OP_PLUS, $1, $3);
  }
  | AdditiveExpression '-' MultiplicativeExpression {
    $$ = new_exp_binary(OP_MINUS, $1, $3);
  }
  ;

ShiftExpression
  : AdditiveExpression {
    $$ = $1;
  }
  | ShiftExpression SHIFT_LEFT AdditiveExpression {
    $$ = new_exp_binary(OP_LSHIFT, $1, $3);
  }
  | ShiftExpression SHIFT_RIGHT AdditiveExpression {
    $$ = new_exp_binary(OP_RSHIFT, $1, $3);
  }
  ;

RelationalExpression
  : ShiftExpression {
    $$ = $1;
  }
  | RelationalExpression '<' ShiftExpression {
    $$ = new_exp_binary(OP_LT, $1, $3);
  }
  | RelationalExpression '>' ShiftExpression {
    $$ = new_exp_binary(OP_GT, $1, $3);
  }
  | RelationalExpression LE  ShiftExpression {
    $$ = new_exp_binary(OP_LE, $1, $3);
  }
  | RelationalExpression GE  ShiftExpression {
    $$ = new_exp_binary(OP_GE, $1, $3);
  }
  ;

EqualityExpression
  : RelationalExpression {
    $$ = $1;
  }
  | EqualityExpression EQ RelationalExpression {
    $$ = new_exp_binary(OP_EQ, $1, $3);
  }
  | EqualityExpression NE RelationalExpression {
    $$ = new_exp_binary(OP_NEQ, $1, $3);
  }
  ;

AndExpression
  : EqualityExpression {
    $$ = $1;
  }
  | AndExpression '&' EqualityExpression {
    $$ = new_exp_binary(OP_BAND, $1, $3);
  }
  ;

ExclusiveOrExpression
  : AndExpression {
    $$ = $1;
  }
  | ExclusiveOrExpression '^' AndExpression {
    $$ = new_exp_binary(OP_BXOR, $1, $3);
  }
  ;

InclusiveOrExpression
  : ExclusiveOrExpression {
    $$ = $1;
  }
  | InclusiveOrExpression '|' ExclusiveOrExpression {
    $$ = new_exp_binary(OP_BOR, $1, $3);
  }
  ;

LogicalAndExpression
  : InclusiveOrExpression {
    $$ = $1;
  }
  | LogicalAndExpression AND InclusiveOrExpression {
    $$ = new_exp_binary(OP_LAND, $1, $3);
  }
  ;

LogicalOrExpression
  : LogicalAndExpression {
    $$ = $1;
  }
  | LogicalOrExpression OR LogicalAndExpression {
    $$ = new_exp_binary(OP_LOR, $1, $3);
  }
  ;

Expression
  : LogicalOrExpression {
    $$ = $1;
  }
  ;

/*--------------------------------------------------------------------------*/

AssignmentExpression
  : PostfixExpressionList '=' VariableInitializerList
  | PostfixExpression CompoundOperator VariableInitializer
  ;

PostfixExpressionList
  : PostfixExpression
  | PostfixExpressionList ',' PostfixExpression
  ;

CompoundOperator
  : ADD_ASSIGN
  | SUB_ASSIGN
  | MUL_ASSIGN
  | DIV_ASSIGN
  | MOD_ASSIGN
  | AND_ASSIGN
  | OR_ASSIGN
  | XOR_ASSIGN
  | RIGHT_SHIFT_ASSIGN
  | LEFT_SHIFT_ASSIGN
  | TYPELESS_ASSIGN
  ;

/*--------------------------------------------------------------------------*/

%%

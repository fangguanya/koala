
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "koala_includes.h"

int yyerror(const char *str);
int yylex(void);

extern int dim_count;

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
%token DIMS

%token SELF
%token TOKEN_NIL
%token TOKEN_TRUE
%token TOKEN_FALSE

%token <ival> INTEGER
%token <ival> HEX
%token <ival> OCT
%token <fval> FLOAT

%token <str_val> STRING_LITERAL
%token <identifier> ID

/*--------------------------------------------------------------------------*/

%nonassoc ELSE

%precedence ID
%precedence '.'

%precedence ')'
%precedence '('

//%expect 2

/*--------------------------------------------------------------------------*/
//%type <new_type_info> TypeName
%type <type> PrimitiveType
%type <func_proto_type> FunctionType
%type <linked_list> TypeNameList
%type <linked_list> VariableList

%type <expression> Expression
%type <expression> LogicalOrExpression
%type <expression> LogicalAndExpression
%type <expression> InclusiveOrExpression
%type <expression> ExclusiveOrExpression
%type <expression> AndExpression
%type <expression> EqualityExpression
%type <expression> RelationalExpression
%type <expression> ShiftExpression
%type <expression> AdditiveExpression
%type <expression> MultiplicativeExpression
%type <expression> UnaryExpression
%type <expression> PostfixExpression
%type <expression> PrimaryExpression

%type <expression> Literal


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
  : TypeName {}
  | TypeNameList ',' TypeName {}
  ;

TypeName
  : BaseType
  | DIMS BaseType
  ;

BaseType
  : PrimitiveType {
    //$$ = new_type_info($1, null);
  }
  | ModuleType {

  }
  | FunctionType {}
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
    printf("int32\n");
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
    printf("string\n");
    $$ = TYPE_STRING;
  }
  | ROOT_OBJECT {
    $$ = TYPE_ROOT_OBJECT;
  }
  ;

ModuleType
  : ID '.' ID {
    printf("Module:%s, TypeName:%s\n", $1.val, $3.val);
  }
  | ID {
    printf("TypeName:%s\n", $1.val);
  }
  ;

FunctionType
  : FUNC '(' ')' ReturnTypeList {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' ')' {}
  | FUNC '(' TypeNameList ')' ReturnTypeList {
    printf("FunctionType 3\n");
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' TypeNameList ')' {}
  ;

ReturnTypeList
  : TypeName
  | '(' TypeNameList ')'
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
    $$ = linked_list_new();
    linked_list_add_tail($$, new_simple_var($1));
  }
  | VariableList ',' ID {
    printf("ID: %s\n", $3.val);
    $$ = $1;
    linked_list_add_tail($$, new_simple_var($3));
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
  : ID TypeName
  | ParameterList ',' ID TypeName
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
  : FUNC '(' ')' ReturnTypeList CodeBlock
  | FUNC '(' ')' CodeBlock
  | FUNC '(' ParameterList ')' ReturnTypeList CodeBlock
  | FUNC '(' ParameterList ')' CodeBlock
  ;

/*--------------------------------------------------------------------------*/
CodeBlock
  : '{' LocalVariableDeclarationsAndStatements '}' {
    printf("code block\n");
  }
  | '{' '}'
  ;

LocalVariableDeclarationsAndStatements
  : LocalVariableDeclarationOrStatement
  | LocalVariableDeclarationsAndStatements LocalVariableDeclarationOrStatement
  ;

LocalVariableDeclarationOrStatement
  : VariableDeclaration
  | Statement {
    printf("----Statement\n");
  }
  ;

Statement
  : ExpressionStatement ';' {
    //expr_tree_print($1);
    printf("----ExpressionStatement\n");
  }
  | SelectionStatement
  | IterationStatemnet
  | JumpStatement
  | CodeBlock
  ;

ExpressionStatement
  : Expression {
    printf("----Expression\n");
  }
  | AssignmentExpression {
    printf("----AssignmentExpression\n");
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
  | RETURN ';'
  | RETURN ExpressionList ';' {
    printf("-----RETURN\n");
  }
  ;

ExpressionList
  : Expression
  | ExpressionList ',' Expression
  ;

/*-------------------------------------------------------------------------*/

PrimaryExpression
  : Atom {}
  | Atom TrailerList {}
  ;

Atom
  : ID {

  }
  | Literal {
  }
  | SELF {

  }
  | '(' Expression ')' {}
  | PrimitiveType '(' Literal ')' {
    printf("complex_primary\n");
  }
  | AnonymousFunctionDeclaration {}
  | DimExprs BaseType {}
  | DimExprs DIMS BaseType {}
  | DimExprs BaseType '{' ArrayInitializerList '}' {}
  | DimExprs DIMS BaseType '{' ArrayInitializerList '}' {}
  | DIMS BaseType '{' ArrayInitializerList '}' {}
  ;

Literal  //常量允许访问成员变量和成员方法，不允许数组操作
  : INTEGER {
    printf("INTEGER: %lld\n", $1);
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

DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
  : '[' Expression ']'
  ;

TrailerList
  : Trailer
  | TrailerList Trailer
  ;

Trailer
  : '.' ID
  | '[' Expression ']'
  | '(' ExpressionList ')'
  | '(' ')'
  | '(' ')' '{' FunctionDeclarationList '}' {
    printf("interface implementation\n");
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
    if ($2->kind != EXP_VAR) {
      yyerror("error: rvalue required as increment operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_INC_BEFORE, $2);
    }
  }
  | DEC UnaryExpression {
    if ($2->kind != EXP_VAR) {
      yyerror("error: rvalue required as decrement operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_DEC_BEFORE, $2);
    }
  }
  | '+' UnaryExpression {
    $$ = $2;
  }
  | '-' UnaryExpression {
    $$ = new_unary_exp(OP_MINUS, $2);
  }
  | '~' UnaryExpression {
    $$ = new_unary_exp(OP_BNOT, $2);
  }
  | '!' UnaryExpression {
    $$ = new_unary_exp(OP_LNOT, $2);
  }
  ;

MultiplicativeExpression
	: UnaryExpression {
    $$ = $1;
  }
	| MultiplicativeExpression '*' UnaryExpression {
    $$ = new_binary_exp(OP_TIMES, $1, $3);
  }
	| MultiplicativeExpression '/' UnaryExpression {
    $$ = new_binary_exp(OP_DIVIDE, $1, $3);
  }
	| MultiplicativeExpression '%' UnaryExpression {
    $$ = new_binary_exp(OP_MOD, $1, $3);
  }
	;

AdditiveExpression
	: MultiplicativeExpression {
    $$ = $1;
  }
	| AdditiveExpression '+' MultiplicativeExpression {
    $$ = new_binary_exp(OP_PLUS, $1, $3);
  }
	| AdditiveExpression '-' MultiplicativeExpression {
    $$ = new_binary_exp(OP_MINUS, $1, $3);
  }
	;

ShiftExpression
	: AdditiveExpression {
    $$ = $1;
  }
	| ShiftExpression SHIFT_LEFT AdditiveExpression {
    $$ = new_binary_exp(OP_LSHIFT, $1, $3);
  }
	| ShiftExpression SHIFT_RIGHT AdditiveExpression {
    $$ = new_binary_exp(OP_RSHIFT, $1, $3);
  }
	;

RelationalExpression
	: ShiftExpression {
    $$ = $1;
  }
	| RelationalExpression '<' ShiftExpression {
    $$ = new_binary_exp(OP_LT, $1, $3);
  }
	| RelationalExpression '>' ShiftExpression {
    $$ = new_binary_exp(OP_GT, $1, $3);
  }
	| RelationalExpression LE  ShiftExpression {
    $$ = new_binary_exp(OP_LE, $1, $3);
  }
	| RelationalExpression GE  ShiftExpression {
    $$ = new_binary_exp(OP_GE, $1, $3);
  }
	;

EqualityExpression
	: RelationalExpression {
    $$ = $1;
  }
	| EqualityExpression EQ RelationalExpression {
    $$ = new_binary_exp(OP_EQ, $1, $3);
  }
	| EqualityExpression NE RelationalExpression {
    $$ = new_binary_exp(OP_NEQ, $1, $3);
  }
	;

AndExpression
	: EqualityExpression {
    $$ = $1;
  }
	| AndExpression '&' EqualityExpression {
    $$ = new_binary_exp(OP_BAND, $1, $3);
  }
	;

ExclusiveOrExpression
	: AndExpression {
    $$ = $1;
  }
	| ExclusiveOrExpression '^' AndExpression {
    $$ = new_binary_exp(OP_BXOR, $1, $3);
  }
	;

InclusiveOrExpression
	: ExclusiveOrExpression {
    $$ = $1;
  }
	| InclusiveOrExpression '|' ExclusiveOrExpression {
    $$ = new_binary_exp(OP_BOR, $1, $3);
  }
	;

LogicalAndExpression
  : InclusiveOrExpression {
    $$ = $1;
  }
  | LogicalAndExpression AND InclusiveOrExpression {
    $$ = new_binary_exp(OP_LAND, $1, $3);
  }
  ;

LogicalOrExpression
  : LogicalAndExpression {
    $$ = $1;
  }
  | LogicalOrExpression OR LogicalAndExpression {
    $$ = new_binary_exp(OP_LOR, $1, $3);
  }
  ;

Expression
  : LogicalOrExpression
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

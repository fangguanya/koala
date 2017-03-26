
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
  expr_t *Expression;
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

%token SELF
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
//%type <new_type_info> TypeSpecifier
%type <type> PrimitiveType
%type <func_proto_type> FunctionType
%type <linked_list> TypeSpecifierList
%type <linked_list> VariableList

%type <Expression> LogicalOrExpression
%type <Expression> LogicalAndExpression
%type <Expression> InclusiveOrExpression
%type <Expression> ExclusiveOrExpression
%type <Expression> AndExpression
%type <Expression> EqualityExpression
%type <Expression> RelationalExpression
%type <Expression> ShiftExpression
%type <Expression> AdditiveExpression
%type <Expression> MultiplicativeExpression
%type <Expression> UnaryExpression
%type <Expression> PostfixExpression
%type <Expression> PrimaryExpression

%type <Expression> Literal


%start Program

%%

TypeSpecifier
  : TypeName
  | DIMS TypeName
  ;

TypeName
  : PrimitiveType
  | QualifiedName
  | FunctionType
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

QualifiedName
  : IDENTIFIER {
  }
  | QualifiedName '.' IDENTIFIER {
  }
  ;

FunctionType
  : FUNC '(' ')' {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' ')' ReturnTypeSpecifierList {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' TypeSpecifierList ')' {
    $$ = new_func_proto_type(null, null);
  }
  | FUNC '(' TypeSpecifierList ')' ReturnTypeSpecifierList {
    $$ = new_func_proto_type(null, null);
  }
  ;

TypeSpecifierList
  : TypeSpecifier {}
  | TypeSpecifierList ',' TypeSpecifier {}
  ;

ReturnTypeSpecifierList
  : TypeSpecifier
  | '(' TypeSpecifierList ')'
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
  : PACKAGE QualifiedName SemiOrEmpty
  ;

ImportDeclarations
  : ImportDeclaration
  | ImportDeclarations ImportDeclaration
  ;

ImportDeclaration
  : IMPORT QualifiedName SemiOrEmpty
  | IMPORT QualifiedName AS IDENTIFIER SemiOrEmpty
  | IMPORT QualifiedName '.' '*' SemiOrEmpty
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
  : CONST VariableList '=' VariableInitializerList ';' {

  }
  | CONST VariableList TypeSpecifier '=' VariableInitializerList ';' {

  }
  ;

VariableDeclaration
  : VAR VariableList TypeSpecifier ';' {
    //new_var_decl($2, $3, null);
  }
  | VAR VariableList '=' VariableInitializerList ';' {

  }
  | VAR VariableList TypeSpecifier '=' VariableInitializerList ';' {

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

VariableInitializer
  : Expression
  | INTEGER ':' VariableInitializer
  | '{' '}'
  | '{' ArrayInitializerList '}'
  ;

VariableInitializerList
  : ArrayInitializerList
  ;

ArrayInitializerList
  : VariableInitializer
  | ArrayInitializerList ',' VariableInitializer
  ;

/*--------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------*/

SemiOrEmpty
  : %empty
  | ';'
  ;

TypeDeclaration
  : TYPE IDENTIFIER STRUCT '{' MemberDeclarations '}' SemiOrEmpty
  | TYPE IDENTIFIER INTERFACE '{' InterfaceFunctionDeclarations '}' SemiOrEmpty
  | TYPE IDENTIFIER TypeSpecifier ';'
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
  : VAR IDENTIFIER TypeSpecifier ';'
  | IDENTIFIER TypeSpecifier ';'
  ;

MethodDeclaration
  : MethodDeclarationHeader1 CodeBlock
  ;

MethodDeclarationHeader1
  : FUNC IDENTIFIER '(' ')'
  | FUNC IDENTIFIER '(' ')' ReturnTypeSpecifierList
  | FUNC IDENTIFIER '(' ParameterList ')'
  | FUNC IDENTIFIER '(' ParameterList ')' ReturnTypeSpecifierList
  | IDENTIFIER '(' ')'
  | IDENTIFIER '(' ')' ReturnTypeSpecifierList
  | IDENTIFIER '(' ParameterList ')'
  | IDENTIFIER '(' ParameterList ')' ReturnTypeSpecifierList
  ;

MethodDeclarationHeader2
  : FUNC IDENTIFIER '(' TypeSpecifierList ')'
  | FUNC IDENTIFIER '(' TypeSpecifierList ')' ReturnTypeSpecifierList
  | IDENTIFIER '(' TypeSpecifierList ')'
  | IDENTIFIER '(' TypeSpecifierList ')' ReturnTypeSpecifierList
  ;

ParameterList
  : IDENTIFIER TypeSpecifier
  | ParameterList ',' IDENTIFIER TypeSpecifier
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
  | FUNC IDENTIFIER '(' ')' ReturnTypeSpecifierList CodeBlock
  | FUNC IDENTIFIER '(' ParameterList ')' CodeBlock
  | FUNC IDENTIFIER '(' ParameterList ')' ReturnTypeSpecifierList CodeBlock
  ;

AnonymousFunctionDeclaration
  : FUNC '(' ')' CodeBlock
  | FUNC '(' ')' ReturnTypeSpecifierList CodeBlock
  | FUNC '(' ParameterList ')' CodeBlock
  | FUNC '(' ParameterList ')' ReturnTypeSpecifierList CodeBlock {
    printf("-----AnonymousFunctionDeclaration\n");
  }
  ;

/*--------------------------------------------------------------------------*/

CodeBlock
  : '{' CodeBlockBody '}' {
    printf("code block\n");
  }
  | '{' '}'
  ;

/* 变量定义必须在最前面 不允许随处定义变量（可以使用TYPELES变量）*/
CodeBlockBody
  : VariableDeclarations Statements
  | VariableDeclarations
  |                      Statements
  ;

VariableDeclarations
  : VariableDeclaration
  | VariableDeclarations VariableDeclaration
  ;

Statements
  : Statement {
    printf("----Statement\n");
  }
  | Statements Statement
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
    //show_expr($1);
    //putchar('\n');
  }
  | AssignmentExpression {
    printf("----AssignmentExpression\n");
  }
  ;

SelectionStatement
  : IfStatement
  | switch_statement
  ;

IfStatement
  : IF '(' Expression ')' CodeBlock
  | IF '(' Expression ')' CodeBlock ELSE CodeBlock
  | IF '(' Expression ')' CodeBlock ELSE IfStatement
  ;

switch_statement
  : SWITCH '(' Expression ')' CodeBlock
  ;

IterationStatemnet
  : WHILE '(' Expression ')' CodeBlock
  | DO CodeBlock WHILE '(' Expression ')' ';'
  | FOR '(' for_init for_expr for_incr ')' CodeBlock
  ;

for_init
  : ExpressionStatement ';'
  | VariableDeclaration
  | ';'
  ;

for_expr
  : Expression ';'
  | ';'
  ;

for_incr
  : ExpressionStatement
  ;

JumpStatement
  : RETURN ';'
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
  : QualifiedName {

  }
  | NotJustName {}
  ;

NotJustName
  : SELF
  | ComplexPrimary
  | NewAllocationExpression
  ;

ComplexPrimary
  : '(' Expression ')' {}
  | ComplexPrimaryNoParenthesis
  ;

ComplexPrimaryNoParenthesis
  : Literal
  | ArrayAccess
  | FieldAccess
  | MethodCall
  ;

ArrayAccess
  : QualifiedName '[' Expression ']'
  | ComplexPrimary '[' Expression ']'
  ;

FieldAccess
  //: NotJustName '.' IDENTIFIER
  : RealPostfixExpression '.' IDENTIFIER
  ;

MethodCall
  : MethodAccess '(' ArgumentList ')'
  | MethodAccess '(' ')'
  ;

MethodAccess
  : ComplexPrimaryNoParenthesis
  | QualifiedName
  ;

ArgumentList
  : Expression
  | ArgumentList ',' Expression
  ;

NewAllocationExpression
  : PrimitiveType '(' Literal ')'
  | AnonymousFunctionDeclaration
  | DimExprs TypeSpecifier
  | DimExprs TypeSpecifier '{' ArrayInitializerList '}'
  | DimExprs TypeSpecifier '{' '}'
  //| QualifiedName '(' ')' CodeBlock
  ;

DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
  : '[' Expression ']'
  ;

Literal
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

RealPostfixExpression
	: PostfixExpression INC
	| PostfixExpression DEC
	;

PostfixExpression
  : PrimaryExpression {
    $$ = $1;
  }
  | RealPostfixExpression {}
  ;

/*
  | PostfixExpression INC {
    if ($1->kind != EXP_VAR) {
      yyerror("error: lvalue required as increment operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_INC_AFTER, $1);
    }
  }
  | PostfixExpression DEC {
    if ($1->kind != EXP_VAR) {
      yyerror("error: lvalue required as decrement operand\n");
      exit(-1);
    } else {
      $$ = new_unary_exp(OP_DEC_AFTER, $1);
    }
  }
  ;
*/

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
  | RIGHT_ASSIGN
  | LEFT_ASSIGN
  | TYPELESS_ASSIGN
  ;

/*--------------------------------------------------------------------------*/

%%

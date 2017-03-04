
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
  uint64 ival;
  double fval;
  char *str_val;
  struct value *value;
  struct list_head *list;
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
%token ANY_TYPE
%token TOKEN_NULL

%token TOKEN_TRUE
%token TOKEN_FALSE

%token <ival> INTEGER
%token <ival> HEX
%token <ival> OCT
%token <fval> FLOAT

%token <str_val> STRING_LITERAL
%token <ident> ID

/*--------------------------------------------------------------------------*/

%nonassoc IFX
%nonassoc ELSE

/*
%right '='
%left OR
%left AND
%left '|'
%left '^'
%left '&'
%left EQ NE
%left '>' '<' GE LE
%left SHIFT_LEFT SHIFT_RIGHT
%left '+' '-'
%left '*' '/' '%'
%left NEG
%right '~' '!' INC DEC
%left '.'
*/

/*--------------------------------------------------------------------------*/
  //%type <list> var_list
  //%type <list> var_init_list
  //%type <value> base_value

%start program

%%

semicolons
  : ';'
  | semicolons ';'
  ;

qualified_name
  : ID
  | qualified_name '.' ID
  ;

type_name_list
  : type_name
  | type_name_list ',' type_name
  ;

type_name
  : primitive_type
  | qualified_name
  | function_type
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
  | ANY_TYPE
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
  //| var_declaration
  //| declarations var_declaration
  //| function_declaration
  //| declarations function_declaration
  //| method_declaration
  //| declarations method_declaration
  | expression_statement
  | declarations expression_statement
  ;

type_declaration
  : TYPE ID STRUCT '{' field_declarations '}'
  | TYPE ID INTERFACE '{' interface_function_declarations '}'
  | TYPE ID type_name semicolons
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
  : FUNC ID '(' ')' semicolons
  | FUNC ID '(' ')' return_type_list semicolons
  | FUNC ID '(' parameter_type_list ')' semicolons
  | FUNC ID '(' parameter_type_list ')' return_type_list semicolons
  | FUNC ID '(' parameter_list ')' semicolons
  | FUNC ID '(' parameter_list ')' return_type_list semicolons
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
/*
function_declaration
  : FUNC ID '(' para_list ')' return_type_list code_block
  ;

para_list
  : ID type_specifier
  | para_list ',' ID type_specifier
  ;

code_block
  : '{' '}'
  ;
*/
/*--------------------------------------------------------------------------*/
/*
method_declaration
  : FUNC ID '.' ID '(' para_list ')' return_type_list code_block
  ;
*/
/*--------------------------------------------------------------------------*/
/*
var_declaration
  : VAR var_list type_specifier semicolons
  | VAR var_list '=' var_init_list semicolons {
    printf("VAR\n");
    struct var_decl_stmt *stmt = new_var_decl_stmt();
    stmt->ident_list = $2;
    stmt->value_list = $4;
    add_stmt(&stmt->stmt);
    show_var_decl(stmt);
  }
  | VAR var_list type_specifier '=' var_init_list semicolons
  // | VAR error
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

var_init_list
  : base_value {
    $$ = new_list();
    LIST_ADD_TAIL($$, &$1->val_node);
  }
  | var_init_list ',' base_value {
    LIST_ADD_TAIL($1, &$3->val_node);
    $$ = $1;
    printf("VAR-INIT-LIST\n");
  }
  ;

base_value
  : INTEGER {
    struct value *val = new_value();
    val->type = KOALA_TYPE_UINT64;
    val->i = $1;
    $$ = val;
    printf("INTEGER:%llu\n", $1);
  }
  | FLOAT {

  }
  | STRING_LITERAL {

  }
  | TRUE {
    struct value *val = new_value();
    val->type = KOALA_TYPE_BOOL;
    val->b = 1;
    $$ = val;
    printf("BOOL:true\n");
  }
  | FALSE {
    struct value *val = new_value();
    val->type = KOALA_TYPE_BOOL;
    val->b = 0;
    $$ = val;
    printf("BOOL:false\n");
  }
  | ID {  // FUNCTION

  }
  | ID '{' field_init_list '}' { // STRUCT INTERFACE

  }
  | '{' field_init_list '}' {

  }
  ;
*/

/*
field_init_list
  : %empty
  | field_init
  | field_init_list ',' field_init
  ;

field_init
  : base_value
  | ID ':' base_value
  ;
*/

/*-------------------------------------------------------------------------*/

primary_expression
  : qualified_name
  | just_not_name
  ;

just_not_name
  : TOKEN_THIS
  | initializer_expression
  | complex_primary
  ;

complex_primary
  : '(' expression ')'
  | complex_primary_no_parenthesis
  ;

complex_primary_no_parenthesis
  : literal_name
  | array_access
  | field_access
  | method_call
  ;

literal_name  //常量允许访问成员变量和成员方法，不允许数组操作
  : INTEGER   {printf("%llu\n", $1);}
  | FLOAT
  | STRING_LITERAL
  | TOKEN_NULL
  | TOKEN_TRUE
  | TOKEN_FALSE
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
  : complex_primary_no_parenthesis
  | qualified_name
  ;

/*-------------------------------------------------------------------------*/

initializer_expression
  : struct_initializer
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
  : primary_expression
  | real_postfix_expression
  ;

real_postfix_expression
  : postfix_expression INC
  | postfix_expression DEC
  ;

argument_list
	: expression_list
	;

unary_expression
  : postfix_expression
  | INC unary_expression
  | DEC unary_expression
  | unary_operator unary_expression
  ;

unary_operator
  : '+'
  | '-'
	| '~'
	| '!'
	;

multiplicative_expression
	: unary_expression {}
	| multiplicative_expression '*' unary_expression {}
	| multiplicative_expression '/' unary_expression {}
	| multiplicative_expression '%' unary_expression {}
	;

additive_expression
	: multiplicative_expression {}
	| additive_expression '+' multiplicative_expression {}
	| additive_expression '-' multiplicative_expression {}
	;

shift_expression
	: additive_expression {}
	| shift_expression SHIFT_LEFT additive_expression {}
	| shift_expression SHIFT_RIGHT additive_expression {}
	;

relational_expression
	: shift_expression {}
	| relational_expression '<' shift_expression {}
	| relational_expression '>' shift_expression {}
	| relational_expression LE  shift_expression {}
	| relational_expression GE  shift_expression {}
	;

equality_expression
	: relational_expression {}
	| equality_expression EQ relational_expression {}
	| equality_expression NE relational_expression {}
	;

and_expression
	: equality_expression {}
	| and_expression '&' equality_expression {}
	;

exclusive_or_expression
	: and_expression {}
	| exclusive_or_expression '^' and_expression {}
	;

inclusive_or_expression
	: exclusive_or_expression {}
	| inclusive_or_expression '|' exclusive_or_expression {}
	;

logical_and_expression
  : inclusive_or_expression {}
  | logical_and_expression AND inclusive_or_expression {}
  ;

logical_or_expression
  : logical_and_expression {}
  | logical_or_expression OR logical_and_expression {}
  ;

expression
  : logical_or_expression
  ;

expression_list
  : expression
  | expression_list ',' expression
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
  : expression semicolons
  | assignment_expression semicolons
  ;

/*--------------------------------------------------------------------------*/

/*
assignment_expression
  //: logical_or_expression
  //| unary_expression assignment_operator assignment_expression
  : var_list assignment_operator logical_or_expression
  ;

assignment_operator
  : '='
  ;

expression
  : assignment_expression
  | expression {printf("expression\n");}
  ;
*/

/*
array_type
  : '[' ']' type_specifier
  | '[' INTEGER ']' type_specifier
  | array_type '[' ']' type_specifier
  | array_type '[' INTEGER ']' type_specifier
  ;
*/

/*
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
  // | array_type
  ;
*/

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

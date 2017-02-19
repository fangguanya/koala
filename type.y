
%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex (void);
int yyerror(const char *str);

struct type_pair
{
  char name[20];
  char type[20];
};

struct type_define
{
  char *type_name;
  int number;
  struct type_pair *pairs;
};

struct type_pair gparis[20];
int gindex;

void print_type_define(struct type_define *type_define)
{
  int i;
  printf("type:%s\n", type_define->type_name);
  for (i = 0; i < type_define->number; i++)
  {
    printf("name:%s,type:%s\n", type_define->pairs[i].name, type_define->pairs[i].type);
  }
}

typedef struct list_node {
  struct list_node *next;
  char var_name[16];
} list_node;

void list_node_print(struct list_node *node)
{
  struct list_node *tmp = node;
  while (tmp)
  {
    printf("%s\t", tmp->var_name);
    tmp = tmp->next;
  }

  printf("\n");
}
%}

%token IF
%token <number> NUMBER
%token FUNC
%token VAR
%token PACKAGE
%token IMPORT
%token TYPE
%token STRUCT
%token INTERFACE
%token <text> ID
%token EQ
%token TRUE
%token FALSE
%token WHILE

%type <node> id_list
%type <number> logic_expr

%union {
  char *text;
  struct list_node *node;
  unsigned int number;
}

%start program

%%

program
  : package_declaration
  | package_declaration import_list
  | program type_declaration
  | program var_declaration
  | program func_declaration
  | program expr ';'
  | program assign_statement
  | program while_stmt
  | program method_declaration
  | program func_declaration2
  ;

import_list
  : import
  | import_list import
  ;

import
  : IMPORT ID ';'  {printf("import:%s\n", $2);}
  ;

package_declaration
  : PACKAGE ID ';'    {printf("package:%s\n", $2);}
  ;

var_declaration
  : VAR id_list var_type ';'  {list_node_print($2);}
  | VAR id_list '=' expr_list ';' {list_node_print($2);}
  | VAR id_list var_type '=' expr_list ';' {list_node_print($2);}

id_list
  : ID  {
    list_node *node = malloc(sizeof(list_node));
    strcpy(node->var_name, $1);
    node->next = NULL;
    $$ = node;
  }
  | id_list ',' ID {
    printf("-----------\n");
    list_node_print($1);
    printf("%s\n", $3);
    printf("-----------\n");
    list_node *node = malloc(sizeof(list_node));
    strcpy(node->var_name, $3);
    node->next = NULL;
    node->next = $1;
    $$ = node;
  }
  ;

var_type
  : ID
  ;

func_declaration2
  : FUNC ID '.' ID '(' para_list ')' return_list2 ';'
  | FUNC ID '(' para_list ')' return_list2 ';'
  ;

func_declaration
  : FUNC ID '(' para_list ')' return_list2 code_block  {printf("function3\n");}
  ;

interface_func_declaration
  : FUNC ID '(' para_list ')' return_list2 {printf("interface function\n");}
  ;


method_declaration
  : FUNC '(' ID ')' ID '(' para_list ')' return_list2 code_block {printf("method3\n");}
  ;

para_list
  : %empty
  | para_list2
  ;

para_list2
  : ID
  | para_list2 ',' ID
  ;

return_list2
  : %empty
  | return_list
  ;

return_list
  : ID
  | '(' ID ')'
  | '(' return_list ',' ID ')'
  ;

code_block
  : '{' statement_list '}'
  | '{' '}'     {printf("body is empty\n");}
  ;

statement_list
  : statement
  | statement_list statement
  ;

statement
  : assign_statement
  | if_statement
  | expr ';'  {printf("expr stmt\n");}
  | ';'       {printf("empty stmt\n");}
  | while_stmt
  | var_declaration
  ;

while_stmt
  : WHILE '(' logic_expr ')' code_block
  ;

assign_statement
  : id_list '=' expr_list2 ';'   {printf("assign statement");}
  ;

expr_list2
  : expr
  | expr_list2 ',' expr
  ;

if_statement
  : IF '(' ')' code_block               {printf("if-true\n");}
  | IF '(' if_condition ')' code_block  {printf("if-condition\n");}
  ;

if_condition
  : logic_expr
  ;

logic_expr
  : TRUE {
    $$ = 1;
  }
  | FALSE {
    $$ = 0;
  }
  | expr '>' expr { $$ = 0; }
  | expr '<' expr { $$ = 0; }
  | expr EQ expr  { $$ = 0; }
  ;

expr
  : term
  | expr '+' term {
    printf("add\n");
  }
  | expr '-' term {
    printf("sub\n");
  }
  ;

term
  : factor
  | term '*' factor {}
  | term '/' factor {}
  ;

factor
  : ID '(' argument_list ')' {printf("call\n");}
  | ID                       {printf("id:%s\n", $1);}
  ;

argument_list
  : %empty
  | expr
  | argument_list ',' expr
  ;


type_declaration
  : TYPE ID type_specifier ';' {
      struct type_define type_define = {
        .type_name = (char *)$2,
        .number = gindex,
        .pairs = gparis,
      };
      print_type_define(&type_define);
      memset(gparis, 0, sizeof(gparis));
      gindex = 0;
    }
  ;

type_specifier
  : STRUCT '{' struct_declaration_list '}'
  | INTERFACE '{' interface_declaration_list '}'
  | ID
  | FUNC '(' para_list ')' return_list2
  ;

struct_declaration_list
  : struct_declaration ';'
  | struct_declaration_list struct_declaration ';'
  ;

struct_declaration
  : ID ID {
            //printf("%s -> %s\n", $1, $2);
            struct type_pair *pair = &gparis[gindex++];
            strcpy(pair->name, $1);
            strcpy(pair->type, $2);
          }
  ;

interface_declaration_list
  : interface_func_declaration ';'
  | interface_declaration_list interface_func_declaration ';'
  ;

expr_list
  : ID
  | expr_list ',' ID
  ;

%%

extern char *yytext;

int yyerror(const char *str)
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

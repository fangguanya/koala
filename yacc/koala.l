
%{

#include "koala_includes.h"
#include "koala_yacc.h"
static void echo();

%}

D   [0-9]
H   [a-fA-F0-9]
L   [a-zA-Z_]

%%

[\+\-\*\/\%&\|!=><,.;{}\[\]\(\)^:] {return yytext[0];}

"=="                      {return EQ;}
"!="                      {return NE;}
">="                      {return GE;}
"<="                      {return LE;}
"&&"                      {return AND;}
"||"                      {return OR;}
">>"                      {return SHIFT_LEFT;}
"<<"                      {return SHIFT_RIGHT;}
"++"                      {return INC;}
"--"                      {return DEC;}
"+="                      {return ADD_ASSIGN;}
"-="                      {return SUB_ASSIGN;}
"*="                      {return MUL_ASSIGN;}
"/="                      {return DIV_ASSIGN;}
"%="                      {return MOD_ASSIGN;}
"&="                      {return AND_ASSIGN;}
"|="                      {return OR_ASSIGN;}
"^="                      {return XOR_ASSIGN;}
">>="                     {return RIGHT_ASSIGN;}
"<<="                     {return LEFT_ASSIGN;}
"..."                     {return ELLIPSIS;}

"interface{}"             {return ANY_TYPE;}

"if"                      {return IF;}
"else"                    {return ELSE;}
"while"                   {return WHILE;}
"do"                      {return DO;}
"for"                     {return FOR;}
"in"                      {return IN;}
"switch"                  {return SWITCH;}
"case"                    {return CASE;}
"break"                   {return BREAK;}
"continue"                {return CONTINUE;}
"default"                 {return DEFAULT;}
"var"                     {return VAR;}
"func"                    {return FUNC;}
"return"                  {return RETURN;}
"struct"                  {return STRUCT;}
"interface"               {return INTERFACE;}
"type"                    {return TYPE;}
"const"                   {return CONST;}
"package"                 {return PACKAGE;}
"import"                  {return IMPORT;}

"int8"                    {return INT8;}
"int16"                   {return INT16;}
"int32"                   {return INT32;}
"int64"                   {return INT64;}
"uint8"                   {return UINT8;}
"uint16"                  {return UINT16;}
"uint32"                  {return UINT32;}
"uint64"                  {return UINT64;}
"float32"                 {return FLOAT32;}
"float64"                 {return FLOAT64;}
"bool"                    {return BOOL;}
"string"                  {return STRING;}

"this"                    {return TOKEN_THIS;}
"true"                    {return TOKEN_TRUE;}
"false"                   {return TOKEN_FALSE;}
"null"                    {return TOKEN_NULL;}

([1-9][0-9]*|[0])         {
                            echo();
                            yylval.ival = atoi(yytext);
                            return INTEGER;
                          }
0[xX]{H}+                 {return HEX;}
0[0-7]*                   {return OCT;}
[0-9]+[.][0-9]+           {
                            echo();
                            yylval.fval = atof(yytext);
                            return FLOAT;
                          }

(\"(\\.|[^"\\])*\")       {
                            echo();
                            yylval.str_val = strdup(yytext);
                            return STRING_LITERAL;
                          }

{L}({L}|{D})*             {
                            echo();
                            yylval.ident = strdup(yytext);
                            return ID;
                          }

[\t\n ]+                  {}

"//"[^\n]*                          {echo();}
"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"   {echo();}

.                         {}

%%

static void echo() {
  fprintf(stdout, ">>>%s\n", yytext);
}

int yywrap() {
  return 1;
}

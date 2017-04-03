
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
">>"                      {return SHIFT_RIGHT;}
"<<"                      {return SHIFT_LEFT;}
"++"                      {return INC;}
"--"                      {return DEC;}
":="                      {return TYPELESS_ASSIGN;}
"+="                      {return PLUS_ASSGIN;}
"-="                      {return MINUS_ASSIGN;}
"*="                      {return TIMES_ASSIGN;}
"/="                      {return DIVIDE_ASSIGN;}
"%="                      {return MOD_ASSIGN;}
"&="                      {return AND_ASSIGN;}
"|="                      {return OR_ASSIGN;}
"^="                      {return XOR_ASSIGN;}
">>="                     {return RIGHT_SHIFT_ASSIGN;}
"<<="                     {return LEFT_SHIFT_ASSIGN;}
"..."                     {return ELLIPSIS;}

"if"                      {return IF;}
"else"                    {return ELSE;}
"while"                   {return WHILE;}
"do"                      {return DO;}
"for"                     {return FOR;}
"in"                      {return IN;}
"switch"                  {return SWITCH;}
"case"                    {return CASE;}
'fallthrough'             {return FALLTHROUGH;}
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
"as"                      {return AS;}

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
"interface{}"             {return ROOT_OBJECT;}
"[]"+                     {
                            yylval.dims = yyleng/2;
                            return DIMS;
                          }

"self"                    {return SELF;}
"true"                    {return TOKEN_TRUE;}
"false"                   {return TOKEN_FALSE;}
"nil"                     {return TOKEN_NIL;}
"null"                    {return TOKEN_NIL;}

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
                            char tmp = yytext[yyleng - 1];
                            yytext[yyleng - 1] = 0;
                            echo();
                            yylval.string_literal = new_string(yytext + 1);
                            yytext[yyleng - 1] = tmp;
                            return STRING_LITERAL;
                          }

{L}({L}|{D})*             {
                            echo();
                            yylval.ident = new_string(yytext);
                            return ID;
                          }

[\t\n ]+                  {}

"#!"[^\n]*                          {echo();}
"//"[^\n]*                          {echo();}
"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"   {echo();}

.                         {}

%%

static void echo() {
  //fprintf(stdout, ">>>%s\n", yytext);
}

int yywrap() {
  return 1;
}

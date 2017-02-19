
%{

#include "type.tab.h"

%}

%%

";"           {return ';';}
"{"           {return '{';}
"}"           {return '}';}
"="           {return '=';}
","           {return ',';}
"("           {return '(';}
")"           {return ')';}
"."           {return '.';}
">"           {return '>';}
"<"           {return '<';}
"=="          {return EQ;}
"+"           {return '+';}
"-"           {return '-';}
"*"           {return '*';}
"/"           {return '/';}
"%"           {return '%';}
[A-Za-z][a-zA-Z0-9]* {
                //printf("token: %s\n", yytext);
                if (!strcmp(yytext, "while"))
                  return WHILE;
                if (!strcmp(yytext, "true"))
                  return TRUE;
                if (!strcmp(yytext, "false"))
                  return FALSE;
                if (!strcmp(yytext, "if"))
                  return IF;
                else if (!strcmp(yytext, "func"))
                  return FUNC;
                else if (!strcmp(yytext, "var"))
                  return VAR;
                else if (!strcmp(yytext, "package"))
                  return PACKAGE;
                else if (!strcmp(yytext, "import"))
                  return IMPORT;
                else if (!strcmp(yytext, "type"))
                  return TYPE;
                else if (!strcmp(yytext, "struct"))
                  return STRUCT;
                else if (!strcmp(yytext, "interface"))
                  return INTERFACE;
                else {
                  //printf("token:%s\n", yytext);
                  yylval.text = strdup(yytext);
                  return ID;
                }
              }

.             {}

%%

int yywrap()
{
	return 1;
}

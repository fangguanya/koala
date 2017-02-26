
%{

#include "type.tab.h"

void my_printf(char *str);

int lineno;

%}

%%


[\+\-\*\/\%&\|!=><,.;{}\[\]\(\)] {return yytext[0];}

##ddd

"=="          {return EQ;}
"uint32"      {return UINT32;}
"int32"       {return INT32;}
"string"      {return STRING;}
"uint"        {return UINT;}
"int"         {return UINT;}
[0-9]+        {return NUMBER;}
(\"(\\.|[^"\\])*\")   {printf(">>>>>>>>%s\n", yytext);}
"//"[^\n]*              {printf("comment:%s\n", yytext);}
"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/" {printf("multi-line-comment:%s\n", yytext);}

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
                  yylval.text = strdup(yytext);
                  printf(">>token:%s\n", yylval.text);
                  //my_printf(yylval.text);
                  return ID;
                }
              }

.             {}

%%

int yywrap()
{
	return 1;
}

void my_printf(char *str)
{
  printf("%s\n", str);
}

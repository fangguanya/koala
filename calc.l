%{
#include <stdio.h>
#include <stdlib.h>
#include "calc.tab.h"
#include "symbol.h"
%}

/* definition */
digit   [0-9]
number  {digit}+
chars   [A-Za-z\_\.]
word    {chars}+
delimiter   [" "\n\t]
whitespace  [" "]+

%%

"+"               {
                    return ADD;
                  }

"-"               {
                    return SUB;
                  }

"*"               {
                    return MUL;
                  }

"/"               {
                    return DIV;
                  }

"="               {
                    return ASSIGN;
                  }
"("               {
                    return LBRACE;
                  }

")"               {
                    return RBRACE;
                  }

"{"               {
                    return LPARA;
                  }

"}"               {
                    return RPARA;
                  }

">"               {
                    return GT;
                  }

{number}          {
                    yylval.uval = atoi(yytext);
                    return NUMBER;
                  }

[";"]+            {
                    return SEMICOLON;
                  }

"\n"              {
                    return CR;
                  }

{whitespace}      {/* ignore */}

{word}            {
                    if (!strcmp(yytext, "if"))
                    {
                      return IF;
                    }
                    else if (!strcmp(yytext, "true"))
                    {
                      return TRUE;
                    }
                    else if (!strcmp(yytext, "false"))
                    {
                      return FALSE;
                    }
                    else
                    {
                      struct symtab *sym_tbl = symbol_lookup(yytext);
                      yylval.symp = sym_tbl;
                      return ID;
                    }
                  }

.                 {}

%%

int yywrap()
{
	return 1;
}

/*
void main()
{
	yylex();
}
*/

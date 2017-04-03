
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "symbol.h"

#define NSYMS 1024  /* maximum number of symbols */
struct symtab symtab[NSYMS];

extern int yyerror(const char const *str);

struct symtab *symbol_lookup(const char *name)
{
  struct symtab *symbol;
  for (symbol = symtab; symbol < (symtab + NSYMS); symbol++)
  {
    if (symbol->name && !strcmp(symbol->name, name))
    {
      outf("found symbol: (%s)\n", symbol->name);
      return symbol;
    }

    if (!symbol->name)
    {
      /* is it free */
      symbol->name = strdup(name);
      outf("add symbol: (%s)\n", name);
      return symbol;
    }
  }

  yyerror("Too many symbols");
  exit(1);    /* cannot continue */
}

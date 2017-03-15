
#include <stdio.h>
#include "koala_includes.h"

struct symbol_table var_sym_tbl;

void koala_compiler_init()
{
  symbol_table_init(&var_sym_tbl);
}

int main(int argc, char *argv[])
{
  extern FILE *yyin;
  extern int yyparse(void);

  int i;
  printf("%d\n", argc);
  for (i = 0; i < argc; i++)
  {
    printf("%s\n", argv[i]);
  }

  koala_compiler_init();
  yyin = fopen(argv[1], "r");
  yyparse();
}

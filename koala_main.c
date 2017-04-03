
#include <stdio.h>
#include "koala_includes.h"

int yyerror(const char *str)
{
  error_outf("%s\n", str);
  return 0;
}

void yyecho(char *str)
{
  outf("%s\n", str);
}

struct symbol_table var_sym_tbl;

void koala_compiler_init()
{
  init_string_system();
}

void koala_symbol_table_test()
{
  string name = {"name"};
  symbol_table_init(&var_sym_tbl);

  symbol_table_begin_scope(&var_sym_tbl);
  symbol_table_add(&var_sym_tbl, name, TYPE_STRING);
  symbol_table_begin_scope(&var_sym_tbl);
  symbol_table_add(&var_sym_tbl, name, TYPE_STRING);
  symbol_table_end_scope(&var_sym_tbl);
  hash_table_fini(&var_sym_tbl.table);
}

int main(int argc, char *argv[])
{
  extern FILE *yyin;
  extern int yyparse(void);

  int i;
  outf("%d\n", argc);
  for (i = 0; i < argc; i++)
  {
    outf("%s\n", argv[i]);
  }

  koala_compiler_init();
  yyin = fopen(argv[1], "r");
  yyparse();
  // test
  koala_symbol_table_test();

  handle_statements();

  return 0;
}

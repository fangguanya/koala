#!/bin/bash

bison -d -o koala_yacc.c yacc/koala.y
flex -o koala_lex.c yacc/koala.l
gcc -g -o koala koala_yacc.c koala_lex.c \
  koala_compiler.c koala_hash_table.c koala_symbol_table.c \
  koala_stmt.c koala_var_decl_stmt.c

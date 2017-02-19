#!/bin/bash

bison -dv type.y
flex type.l
gcc -o koala type.tab.c lex.yy.c

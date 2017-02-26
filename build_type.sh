#!/bin/bash

bison -dv type.y
flex type.l
gcc -g -o koala type.tab.c lex.yy.c

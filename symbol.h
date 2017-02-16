
#ifndef __CALC_SYMBOL_H__
#define __CALC_SYMBOL_H__

struct symtab
{
  char *name;
  unsigned int value;
};

struct symtab *symbol_lookup(const char *name);

#endif

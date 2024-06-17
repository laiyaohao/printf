#include "printf.h"

void ft_put_hash(size_t *i, const char *str, t_specs *specs)
{
  while (str[*i] == '#')
  {
    specs->hash = 1;
    *i++;
  }
}
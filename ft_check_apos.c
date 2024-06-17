#include "printf.h"

void ft_put_apos(size_t *i, const char *str, t_specs *specs)
{
  while (str[*i] == '\'')
  {
    specs->apos = 1;
    *i++;
  }
}
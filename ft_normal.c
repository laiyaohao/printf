#include "ft_printf.h"

void  ft_normal(const char *str, int *ans, size_t *i)
{
  while (str[*i] != '%')
  {
    *ans += write(1, &str[*i], 1);
    *i++;
  } 
}
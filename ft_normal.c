#include "ft_printf.h"

void  ft_normal(const char *str, int *ans, size_t *i, char c)
{
  while (str[*i] != c)
  {
		write(1, &str[*i], 1);
    *ans += 1;
		*i += 1;
  }
}
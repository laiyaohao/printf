#include "printf.h"

void  ft_put_width(size_t *i, const char *str, t_specs *specs)
{
  while (!ft_check_prec(i, str))
  {
    if (ft_isdigit(str[*i]))
    {
      specs->width = ft_atoi(str[*i]);
    }
    else if (str[*i] == '*')
    {
      // need to va_list??
    }
    *i++;
  }
}
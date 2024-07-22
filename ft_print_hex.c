#include "ft_printf.h"

void	ft_print_hex(va_list args, int *ans, size_t *i, char c)
{
  char  hex[17];
  long long input;
  char	*to_print;
	size_t	index;

  input = va_arg(args, int);
  // if negative, just use UINT_MAX + 1L + input
  if (c == 'X')
    ft_strlcpy(hex, "0123456789ABCDEF", 17);
  else
    ft_strlcpy(hex, "0123456789abcdef", 17);
  if (input < 0)
  {
    input =  (long long)(UINT_MAX) + 1L + input;
  }
	index = 0;
	to_print = ft_itohex(input, hex);
	ft_putstr(to_print, ans, &index, '\0');
	free(to_print);
	to_print = NULL;
	*i += 2;
}
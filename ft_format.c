#include "ft_printf.h"

void	ft_format(const char *str, int *ans, size_t *i, va_list args)
{
	

	// printf("\nwhat is i in ft_format: %ld\n", *i);
	if (str[*i + 1] == '%')
	{
		ft_putchar(str[*i + 1], ans);
		*i += 2;
	}
	if (str[*i + 1] == 'i' || str[*i + 1] == 'd')
		ft_print_int(args, ans, i);
	if (str[*i + 1] == 'c')
		ft_print_char(args, ans, i);
	if (str[*i + 1] == 's')
		ft_print_str(args, ans, i);
	if (str[*i + 1] == 'u')
		ft_print_uint(args, ans, i);
	if (str[*i + 1] == 'x' || str[*i + 1] == 'X')
		ft_print_hex(args, ans, i, str[*i + 1]);
	if (str[*i + 1] == 'p')
		ft_print_add(args, ans, i);
}
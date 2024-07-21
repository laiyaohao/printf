#include "ft_printf.h"

void	ft_format(const char *str, int *ans, size_t *i, va_list args)
{
	char	*to_print;
	size_t	index;
	char	c;
	void	*add;

	// printf("\nwhat is i in ft_format: %ld\n", *i);
	if (str[*i + 1] == '%')
	{
		ft_putchar(str[*i + 1], ans);
		*i += 2;
	}
	else if (str[*i + 1] == 'i' || str[*i + 1] == 'd')
		ft_print_int(args, ans, i);
	else if (str[*i + 1] == 'c')
		ft_print_char(args, ans, i);
	else if (str[*i + 1] == 's')
		ft_print_str(args, ans, i);
	else if (str[*i + 1] == 'u')
		ft_print_uint(args, ans, i);
	else if (str[*i + 1] == 'p')
	{
		// put 0x in front
		add = va_arg(args, void *);
		printf("add: %p\n", add);
		printf("add: %p\n", add);
		write(1, add, 2);
		// index = 0;
		// ft_normal(add, ans, &index, '\0');
		*i += 2;
	}
}
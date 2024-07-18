#include "ft_printf.h"

void	ft_format(const char *str, int *ans, size_t *i, va_list args)
{
	char	*to_print;
	size_t	index;
	char	c;
	void	*add;

	if (str[*i] == '%')
	{
		write(1, &str[*i], 1);
		*ans += 1;
		*i += 1;
	}
	else if (str[*i] == 'd' || str[*i] == 'i')
	{
		to_print = ft_itoa(va_arg(args, int));
		// read the number out
		index = 0;
		// while (to_print[index])
		// {
		// 	*ans += write(1, &to_print[index], 1);
		// 	index++;
		// }
		ft_normal(to_print, ans, &index, '\0');
		free(to_print);
		*i += 1;
	}
	else if (str[*i] == 'c')
	{
		c = va_arg(args, int);
		*ans += write(1, &c, 1);
		*i += 1;
	}
	else if (str[*i] == 's')
	{
		to_print = va_arg(args, char *);
		index = 0;
		ft_normal(to_print, ans, &index, '\0');
		*i += 1;
	}
	else if (str[*i] == 'p')
	{
		add = va_arg(args, void *);
		printf("add: %p\n", add);
		printf("add: %p\n", (void*)&add);
		write(1, add, 2);
		// index = 0;
		// ft_normal(add, ans, &index, '\0');
		*i += 1;
	}
}
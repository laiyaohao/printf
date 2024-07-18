#include "ft_printf.h"

void	ft_format(const char *str, int *ans, size_t *i, va_list args)
{
	char	*to_print;
	if (str[*i] == '%')
	{
		*ans += write(1, &str[*i], 1);
		*i++;
	}
	else if (str[*i] == 'd' || str[*i] == 'i')
	{
		to_print = ft_itoa(va_arg(args, int));
		// read the number out
		while (*to_print)
		{
			*ans += write(1, &*to_print, 1);
			to_print++;
		}
		*i++;
	}
}
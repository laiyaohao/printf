#include "ft_printf.h"

void	ft_format(char *str, int *ans, int *i, va_list args)
{
	if (str[*i] == '%')
	{
		*ans += write(1, &str[*i], 1);
		*i++;
	}
	else if (str[*i] == 'd' || str[*i] == 'i')
	{
		char	*number = ft_itoa(va_arg(args, int));
		// read the number out
		*i++;
	}
}
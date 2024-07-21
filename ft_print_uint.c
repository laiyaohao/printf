#include "ft_printf.h"

void	ft_print_uint(va_list args, int *ans, size_t *i)
{
	char	*to_print;
	size_t	index;
	long long	input;
	
	index = 0;
	input = va_arg(args, int);
	if (input < 0)
	{
		// input =  (long long)(2LL * (long long)INT_MAX) - input;
		input =  (long long)(UINT_MAX) + 1L + input;
	}
	to_print = ft_ltoa(input);
	ft_putstr(to_print, ans, &index, '\0');
	free(to_print);
	to_print = NULL;
	*i += 2;
}
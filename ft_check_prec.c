#include "printf.h"

int ft_check_prec(size_t *i, const char *str)
{
	if (str[*i] == '.')
		return 1;
	return 0;
}
#include "printf.h"

int ft_check_width(size_t *i, const char *str)
{
	if (ft_isdigit(str[*i]) || str[*i] == '*')
		return 1;
	return 0;
}
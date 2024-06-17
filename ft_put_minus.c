#include "printf.h"

void	ft_put_minus(size_t *i, const char *str, t_specs *specs)
{
	while (str[*i] == '-')
	{
		specs->minus = 1;
		*i++;
	}
}
#include "printf.h"

void	ft_put_plus(size_t *i, const char *str, t_specs *specs)
{
	while (str[*i] == '+')
	{
		specs->plus = 1;
		*i++;
	}
}
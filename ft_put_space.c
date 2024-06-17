#include "printf.h"

void	ft_put_space(size_t *i, const char *str, t_specs *specs)
{
	while (str[*i] == ' ')
	{
		specs->space = 1;
		*i++;
	}
}
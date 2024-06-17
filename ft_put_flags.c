#include "printf.h"

// check flags ie '-', '+', ' ', '0', "'", '#'
void	ft_put_flags(size_t *i, const char *str, t_specs *specs)
{
	// check for next fields. if in next field, means flags field
	// passed, and no more flags
	while (
		!ft_check_width(i, str) ||
		!ft_check_prec(i, str) ||
		!ft_check_len(i, str)
	)
	{
		ft_put_minus(i, str, specs);
		ft_put_plus(i, str, specs);
		ft_put_space(i, str, specs);
		ft_put_apos(i, str, specs);
		ft_put_hash(i, str, specs);
	}
}
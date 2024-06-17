/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:00:39 by ylai              #+#    #+#             */
/*   Updated: 2024/06/17 15:00:42 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_put_flags(size_t *i, const char *str, t_specs *specs)
{
	// check for next fields. if in next field, means flags field
	// passed, and no more flags
	while (
		!ft_check_width(i, str)
		|| !ft_check_prec(i, str)
		|| !ft_check_len(i, str)
		|| !ft_check_type(i, str)
	)
	{
		ft_put_minus(i, str, specs);
		ft_put_plus(i, str, specs);
		ft_put_space(i, str, specs);
		ft_put_apos(i, str, specs);
		ft_put_hash(i, str, specs);
		ft_put_zero(i, str, specs);
	}
}
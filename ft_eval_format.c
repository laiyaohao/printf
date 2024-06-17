/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:05:59 by ylai              #+#    #+#             */
/*   Updated: 2024/06/17 14:07:33 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_eval_format(size_t *i, const char *str, t_specs *specs)
{
	// check flags ie '-', '+', ' ', '0', "'", '#'
	ft_put_flags(i, str, specs);
	// check width. will start with a number or a *
	ft_put_width(i, str, specs);
	// check precision. will start with a period (.)
	ft_put_prec(i, str, specs);
	ft_put_len(i, str, specs);
}
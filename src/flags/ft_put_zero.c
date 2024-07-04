/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:15:37 by ylai              #+#    #+#             */
/*   Updated: 2024/07/04 21:37:37 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

void	ft_put_zero(size_t *i, const char *str, t_specs *specs)
{
	if (str[*i] == '0')
	{
		specs->zero = 1;
		*i++;
	}
}
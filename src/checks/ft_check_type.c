/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:31:18 by ylai              #+#    #+#             */
/*   Updated: 2024/07/04 21:00:07 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	ft_check_type(size_t *i, const char *str)
{
	if (str[*i] == '%' || str[*i] == 'd' || str[*i] == 'i' || str[*i] == 'u'
	|| str[*i] == 'f' || str[*i] == 'F' || str[*i] == 'e' || str[*i] == 'E'
	|| str[*i] == 'g' || str[*i] == 'G' || str[*i] == 'x' || str[*i] == 'X'
	|| str[*i] == 'o' || str[*i] == 's' || str[*i] == 'c' || str[*i] == 'p'
	|| str[*i] == 'a' || str[*i] == 'A' || str[*i] == 'n')
		return (1);
	return (0);
}
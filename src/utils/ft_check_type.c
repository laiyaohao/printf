/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:49:24 by ylai              #+#    #+#             */
/*   Updated: 2024/07/25 13:54:53 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_check_type(char c)
{
	if (c == 'c' || c == 's' || c == 'x' || c == 'X' || c == 'p' || c == 'u' ||
	c == '%' || c == 'd' || c == 'i')
	{
		return (1);
	}
	return (0);
}
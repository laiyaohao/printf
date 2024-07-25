/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:37:34 by ylai              #+#    #+#             */
/*   Updated: 2024/07/25 19:59:03 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(const char *str, int *ans, size_t *i, va_list args)
{
	if (str[*i] == '%')
		ft_putchar(str[*i], ans);
	else if (str[*i] == 'i' || str[*i] == 'd')
		ft_print_int(args, ans);
	else if (str[*i] == 'c')
		ft_print_char(args, ans);
	else if (str[*i] == 's')
		ft_print_str(args, ans);
	else if (str[*i] == 'u')
		ft_print_uint(args, ans);
	else if (str[*i] == 'x' || str[*i] == 'X')
		ft_print_hex(args, ans, str[*i]);
	else if (str[*i] == 'p')
		ft_print_add(args, ans);
	
}

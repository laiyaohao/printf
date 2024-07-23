/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:46:50 by ylai              #+#    #+#             */
/*   Updated: 2024/07/23 23:54:21 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

void	ft_putchar(char c, int *ans)
{
	write(1, &c, 1);
	*ans += 1;
	/*
	va_list	ans_pter;
	int	*tmp;
	int		*ans;

	va_start(ans_pter, c);
	tmp = va_arg(ans_pter, void *);
	write(1, &c, 1);
	if (tmp != NULL)
		*tmp += 1;
	va_end(ans_pter);
	*/
}
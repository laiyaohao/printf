/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:42:24 by ylai              #+#    #+#             */
/*   Updated: 2024/07/23 23:31:45 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int	ans;
	va_list	args;
	
	va_start(args, str);
	i = 0;
	ans = 0;
	while (str[i])
	{
		ft_putstr(str, &ans, &i, '%');
		ft_format(str, &ans, &i, args);
	}
	// printf("\nend of fake printf\n");
	va_end(args);
	return (ans);
}

// int main(void)
// {
// 	ft_printf("%i\n", 90);
// 	return 0;
// }
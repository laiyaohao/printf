/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:42:24 by ylai              #+#    #+#             */
/*   Updated: 2024/07/04 22:37:56 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str)
{
	size_t	i;
	int	ans;
	va_list	args;
	
	va_start(args, str);
	i = 0;
	ans = 0;
	while (str[i])
	{
		ft_normal(str, &ans, &i);
		i++;
		write(1, "\n\n",2);
		write(1, &str[i],1);
		ft_format(str, &ans, &i, args);
		break;
	}
	return (ans);
}

int main(void)
{
	printf("%%\n");
	return 0;
}
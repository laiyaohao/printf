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

int	ft_printf(const char *str, ...)
{
	t_specs	*specs;
	size_t	i;
	int	ans;
	
	va_start(specs->args, str);
	i = 0;
	ans = 0;
	while (str[i])
	{
		// normal case
		while (str[i] != '%')
		{
			ans += write(1, &str[i], 1); // can use putchar
			i++;
		}
		specs = (t_specs *)malloc(sizeof(t_specs)); // can use calloc??
		if (!specs)
			return NULL;
		ft_initialise(specs);
		// move the index pass the '%'.
		i++;
		ft_eval_format(&i, str, specs);
		
		
	}
	return (ans);
}
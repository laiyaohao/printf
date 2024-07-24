/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:42:24 by ylai              #+#    #+#             */
/*   Updated: 2024/07/24 18:46:18 by ylai             ###   ########.fr       */
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
		while (str[i] && str[i] != '%')
		{
			ft_putchar(str[i], &ans);
			i++;
		}
		if (str[i] == '%' && str[i + 1] == '\0')
		{
			ans = -1;
			va_end(args);
			return (ans);
		}
		ft_format(str, &ans, &i, args);
	}
	// printf("\nend of fake printf\n");
	va_end(args);
	return (ans);
}

int main(void)
{
	char prompt[14] = " %%   %%   %% ";
	// char sample[10] = "sample";
	// int k = 10;
	// if (argc == 2) {
	int i = ft_printf(prompt);
	// printf("\n");
	printf("real printf:");
	// write(1, "end of main\n", 12);
	// }
	int j = printf(prompt);
	printf("\nans from fake printf: %i\n", i);
	printf("ans from true printf: %i\n", j);
	return 0;
}
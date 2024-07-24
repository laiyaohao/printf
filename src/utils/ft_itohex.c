/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:41:23 by ylai              #+#    #+#             */
/*   Updated: 2024/07/24 18:38:36 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char  *ft_itohex(unsigned long n, char *base)
{
	unsigned long long div;
	unsigned long long tmp;
	long long len;
	long long mod;
	char  *hex;

	// printf("n: %lu\n", n);
	len = 0;
	if (n < 0)
		div = -n;
	else
		div = n;
	tmp = div;
	if (n == 0)
		len = 1;
	while (div > 0L)
	{
		div /= 16L;
		len++;
	}
	hex = (char *) malloc(sizeof(char) * (len + 1));
	if (hex == NULL)
		return (NULL);
	hex[len] = '\0';
	while (len--)
	{
		mod = tmp % 16;
		tmp = tmp / 16;
		hex[len] = base[mod];
	}
	return (hex);
}
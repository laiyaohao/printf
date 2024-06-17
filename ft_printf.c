/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:42:24 by ylai              #+#    #+#             */
/*   Updated: 2024/06/08 15:22:06 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * print character by character
 * if encounter "%", take a look out for the flags
 * '-' means
 * '+' means
 * ' ' means
 * '#' means
 * '0' means
 * '.' means
 * 
 * if encounter %, find the where the % ends
 * i.e. % normally ends with 's', 'c', ... as per below
 * • %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
once find where the % ends, inside are all the parameters
pass this string to a function that creates a string with the necessary
requirements. print this string, jump the pointer to one after end of %.
use a struct to create the parameters?
*/

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_specs	*specs;
	size_t	i;
	
	va_start(args, str);
	specs = (t_specs *)malloc(sizeof(t_specs)); // can use calloc??
	if (!specs)
		return NULL;
	i = 0;
	while (str[i])
	{
		// normal case
		while (str[i] != '%')
		{
			write(1, str[i], 1); // can use putchar
			i++;
		}
		// when str[i] reached %, initialise the struct here
		ft_initialise(specs);
		// move the index pass the '%'.
		i++;
		// check flags ie '-', '+', ' ', '0', "'", '#'
		ft_put_flags(&i, str, specs);
		// check width. will start with a number or a *
		ft_put_width(&i, str, specs);
		// check precision. will start with a period (.)
		ft_put_prec(&i, str, specs);
		ft_put_len(&i, str, specs);
	}
}
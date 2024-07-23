/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:46:25 by ylai              #+#    #+#             */
/*   Updated: 2024/07/23 23:57:43 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

// Function that prints characters from str until it reaches character c
// or the end of the string. 
// Parameters:
// - str: The input string to print characters from.
// - ans: Pointer to an integer to store the number of characters printed.
// - i: Pointer to a size_t variable representing the current index in the 
// string.
// - c: The character to stop printing at.
void  ft_putstr(const char *str, int *ans, size_t *i, char c)
{
  while (str[*i] && str[*i] != c)
  {
		ft_putchar(str[*i], ans);
		*i += 1;
  }
  // printf("\nwhat is i in ft_normal: %ld\n", *i);
}
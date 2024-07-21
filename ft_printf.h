/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:58:43 by ylai              #+#    #+#             */
/*   Updated: 2024/07/21 18:42:17 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#endif
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *str, ...);
char  *ft_itoa(int n);
char	*ft_ltoa(long long n);
int ft_isnegative(int n);
long ft_abs(long i);
void	ft_putchar(char c, int *ans);
void  ft_putstr(const char *str, int *ans, size_t *i, char c);
void	ft_format(const char *str, int *ans, size_t *i, va_list args);
int	ft_find_len(int n);
void	ft_print_int(va_list args, int *ans, size_t *i);
void	ft_print_uint(va_list args, int *ans, size_t *i);
void	ft_print_char(va_list args, int *ans, size_t *i);
void	ft_print_str(va_list args, int *ans, size_t *i);
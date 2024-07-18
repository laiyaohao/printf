/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:58:43 by ylai              #+#    #+#             */
/*   Updated: 2024/07/04 22:12:44 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#endif
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *str, ...);
char  *ft_itoa(int n);
int ft_isnegative(int n);
int ft_abs(int i);
void  ft_normal(const char *str, int *ans, size_t *i);
void	ft_format(const char *str, int *ans, size_t *i, va_list args);
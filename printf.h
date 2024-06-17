/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:58:43 by ylai              #+#    #+#             */
/*   Updated: 2024/06/17 13:30:05 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

typedef struct	s_specs
{
	int	minus;
	int	plus;
	int	space;
	int zero;
	int	apos;
	int	hash;
	int	width;
	int	precision;
	va_list	args;
}					t_specs;

int	ft_printf(const char *str, ...);
void	ft_initialise(t_specs *specs);
void	ft_put_flags(size_t *i, const char *str, t_specs *specs);
void	ft_put_width(size_t *i, const char *str, t_specs *specs);
void	ft_put_minus(size_t *i, const char *str, t_specs *specs);
void	ft_put_plus(size_t *i, const char *str, t_specs *specs);
int	ft_check_width(size_t *i, const char *str);
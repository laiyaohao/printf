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
	int	len;
	va_list	args;
}					t_specs;

int	ft_printf(const char *str, ...);
void	ft_initialise(t_specs *specs);
void	ft_eval_format(size_t *i, const char *str, t_specs *specs);
void	ft_put_flags(size_t *i, const char *str, t_specs *specs);
void	ft_put_width(size_t *i, const char *str, t_specs *specs);
void	ft_put_minus(size_t *i, const char *str, t_specs *specs);
void	ft_put_plus(size_t *i, const char *str, t_specs *specs);
void	ft_put_zero(size_t *i, const char *str, t_specs *specs);
void	ft_put_space(size_t *i, const char *str, t_specs *specs);
void	ft_put_prec(size_t *i, const char *str, t_specs *specs);
void	ft_put_len(size_t *i, const char *str, t_specs *specs);
int	ft_check_width(size_t *i, const char *str);
int	ft_check_len(size_t *i, const char *str);
int	ft_check_prec(size_t *i, const char *str);
int	ft_check_type(size_t *i, const char *str);
int	ft_ispositive(char c);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:46:23 by ylai              #+#    #+#             */
/*   Updated: 2024/07/04 22:12:54 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_initialise(t_specs *specs)
{
	specs->apos = 0;
	specs->hash = 0;
	specs->minus = 0;
	specs->plus = 0;
	specs->precision = 0;
	specs->space = 0;
	specs->width = 0;
	specs->zero = 0;
	specs->len = 0;
}
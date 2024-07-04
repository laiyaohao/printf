/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:46:39 by ylai              #+#    #+#             */
/*   Updated: 2024/07/04 22:03:35 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void  ft_put_width(size_t *i, const char *str, t_specs *specs)
{
  while (!ft_check_prec(i, str) || !ft_check_len(i, str)
	|| !ft_check_type(i, str))
  {
    if (ft_ispositive(str[*i]))
    {
      specs->width = ft_atoi(str[*i]);
    }
    else if (str[*i] == '*')
    {
      // need to va_list??
    }
    *i++;
  }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_apos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:46:12 by ylai              #+#    #+#             */
/*   Updated: 2024/06/17 15:00:28 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void ft_put_apos(size_t *i, const char *str, t_specs *specs)
{
  while (str[*i] == '\'')
  {
    specs->apos = 1;
    *i++;
  }
}
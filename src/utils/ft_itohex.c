/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:41:23 by ylai              #+#    #+#             */
/*   Updated: 2024/07/23 23:00:52 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char  *ft_itohex(long long n, char *base)
{
  long long div;
  long long len;
  long long mod;
  char  *hex;

  len = 0;
  div = n;
  while (n > 0)
  {
    n /= 16;
    len++;
  }
  hex = (char *) malloc(sizeof(char) * (len + 1));
  if (hex == NULL)
    return (NULL);
  hex[len] = '\0';
  while (len--)
  {
    mod = div % 16;
    div = div / 16;
    hex[len] = base[mod];
  }
  return (hex);
}
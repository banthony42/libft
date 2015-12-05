/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:58:28 by banthony          #+#    #+#             */
/*   Updated: 2015/12/05 19:34:29 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t	lendst;
  size_t	lensrc;
  size_t	ind;
  size_t	ind2;
  size_t	nbchar;

  ind = 0;
  ind2 = 0;
  lendst = 0;
  nbchar = 0;
  while (dst[lendst] && lendst < size)
    lendst++;
  nbchar = size - lendst;
  lensrc = ft_strlen(src);
  while (dst[ind] != '\0')
    ind++;
  while (ind < size - 1 && src[ind2] != '\0' && ind2 < nbchar)
    {
      dst[ind] = src[ind2];
      ind++;
      ind2++;
    }
  dst[ind] = '\0';
  return (lensrc + lendst);
}

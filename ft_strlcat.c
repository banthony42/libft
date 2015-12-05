/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:58:28 by banthony          #+#    #+#             */
/*   Updated: 2015/12/05 17:17:07 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t i;
  size_t len;

  len = ft_strlen(dst);
  i = 0;
  if (size)
    {
      while (src[i] && (len + i) < size - 1)
    {
      dst[len + i] = src[i];
      i++;
    }
  dst[len + i] = '\0';
  return ((size_t)ft_strlen(src) + len);
    }
  return (0);
}

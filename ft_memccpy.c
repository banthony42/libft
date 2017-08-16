/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:58:15 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 22:48:56 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	c1;

	i = 0;
	c1 = (unsigned char)c;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)(unsigned long)src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == c1)
		{
			i++;
			dest = 1 + (char *)dest;
			return (dest);
		}
		i++;
		dest = 1 + (char *)dest;
	}
	return (NULL);
}

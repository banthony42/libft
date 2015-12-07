/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:58:28 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 17:27:47 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	i2;
	size_t	nbc;

	i = 0;
	i2 = 0;
	lendst = 0;
	nbc = 0;
	while (dst[lendst] && lendst < size)
		lendst++;
	nbc = size - lendst;
	lensrc = ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (i + i2 < size - 1 && src[i2] != '\0' && i2 < nbc)
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	dst[i + i2] = '\0';
	return (lensrc + lendst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:39:35 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 17:29:41 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}

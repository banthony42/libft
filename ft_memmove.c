/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:14:42 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 00:53:01 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp;
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				i;

	temp = NULL;
	i = 0;
	str1 = (unsigned char *)(unsigned long)src;
	str2 = (unsigned char *)dest;
	if (!(temp = (unsigned char *)ft_memalloc(n)))
		return (NULL);
	while (i < n)
	{
		temp[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str2[i] = temp[i];
		i++;
	}
	free(temp);
	return ((void*)dest);
}

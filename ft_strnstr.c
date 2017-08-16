/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:10:20 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 22:04:50 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t index;
	size_t index2;
	size_t check;

	check = ft_strlen(s2);
	index = 0;
	if (!s2[0])
		return ((char *)(unsigned long)s1);
	if (n < check)
		return (NULL);
	while (index < n && s1[index] != '\0')
	{
		index2 = 0;
		while (s2[index2] == s1[index + index2] && s2[index2])
		{
			if (index + index2 >= n)
				return (NULL);
			if (index2 == check - 1)
				return ((char*)(unsigned long)&s1[index]);
			index2++;
		}
		index++;
	}
	return (NULL);
}

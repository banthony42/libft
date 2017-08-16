/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:08:53 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 21:46:21 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cast en unsigned long avant de cast en char*
**	permet de contourner l'erreur de cast  const char* -> char*
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t index;
	size_t index2;
	size_t check;

	check = ft_strlen(s2);
	index = 0;
	if (!s2[0])
		return ((char*)(unsigned long)s1);
	while (s1[index])
	{
		index2 = 0;
		while (s2[index2] == s1[index + index2])
		{
			if (index2 == check - 1)
				return ((char*)(unsigned long)&s1[index]);
			index2++;
		}
		index++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:08:53 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 17:33:00 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int index;
	int index2;
	int check;

	check = ft_strlen(s2);
	index = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[index])
	{
		index2 = 0;
		while (s2[index2] == s1[index + index2])
		{
			if (index2 == check - 1)
				return ((char*)&s1[index]);
			index2++;
		}
		index++;
	}
	return (NULL);
}

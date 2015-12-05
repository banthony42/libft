/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:40:34 by banthony          #+#    #+#             */
/*   Updated: 2015/12/02 12:06:49 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	i2;

	i2 = 0;
	str = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	str = ft_memalloc(i + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	while (s2[i2])
	{
		str[i + i2] = s2[i2];
		i2++;
	}
	str[i + i2 + 1] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:55:13 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 17:28:30 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = (char *)ft_memalloc(ft_strlen(s));
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, s);
		while (str[i])
		{
			str[i] = f(i, str[i]);
			i++;
		}
	}
	return (str);
}

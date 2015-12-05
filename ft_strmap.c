/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:11:04 by banthony          #+#    #+#             */
/*   Updated: 2015/12/01 12:53:22 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = ft_memalloc(ft_strlen(s));
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, s);
		while (str[i])
		{
			str[i] = f(str[i]);
			i++;
		}
	}
	return (str);
}

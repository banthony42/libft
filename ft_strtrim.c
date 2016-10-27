/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:11:57 by banthony          #+#    #+#             */
/*   Updated: 2016/10/27 16:05:17 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*end_function(char *str, char *tmp, int *i2)
{
	while (str[*i2 - 1] == ' ' || str[*i2 - 1] == '\n' || str[*i2 - 1] == '\t')
		*i2 -= 1;
	str[*i2] = '\0';
	tmp = ft_strdup(str);
	ft_strdel(&str);
	return (tmp);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*tmp;
	int		i;
	int		i2;
	int		bool;

	i = 0;
	i2 = 0;
	bool = 0;
	tmp = NULL;
	if (s == NULL)
		return (NULL);
	str = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			bool = 1;
		if (bool)
			str[i2++] = s[i];
		i++;
	}
	return (end_function(str, tmp, &i2));
}

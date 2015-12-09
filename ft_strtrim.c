/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:11:57 by banthony          #+#    #+#             */
/*   Updated: 2015/12/09 13:20:48 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		bool;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	bool = 0;
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
	while (str[i2 - 1] == ' ' || str[i2 - 1] == '\n' || str[i2 - 1] == '\t')
		i2--;
	str[i2] = '\0';
	return (ft_strdup(str));
}

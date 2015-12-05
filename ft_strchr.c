/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:22:53 by banthony          #+#    #+#             */
/*   Updated: 2015/12/02 18:36:26 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}

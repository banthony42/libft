/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:48:09 by banthony          #+#    #+#             */
/*   Updated: 2015/12/02 18:52:17 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (ptr);
}

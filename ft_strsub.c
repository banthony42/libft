/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:21:23 by banthony          #+#    #+#             */
/*   Updated: 2015/12/05 15:09:15 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (s == NULL)
		return (NULL);
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i != len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

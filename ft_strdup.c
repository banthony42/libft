/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 00:12:53 by banthony          #+#    #+#             */
/*   Updated: 2017/08/09 16:26:03 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = NULL;
	if (s1)
	{
		if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
			return (NULL);
		ft_strcpy(ptr, s1);
	}
	return (ptr);
}

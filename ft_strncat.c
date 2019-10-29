/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:16:46 by banthony          #+#    #+#             */
/*   Updated: 2019/10/22 16:50:32 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

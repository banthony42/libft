/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:19:11 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 22:10:29 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		if (i == n - 1)
			break ;
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - *s2);
}

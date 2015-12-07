/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:14:00 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 17:31:06 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (s2[i] == '\0' && n == 0)
		return (1);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	if (s2[i] == '\0' && n == 0)
		return (1);
	while (s1[i] && s2[i] && n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		n--;
	}
	return (1);
}

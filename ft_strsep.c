/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abara <banthony@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:06:33 by abara             #+#    #+#             */
/*   Updated: 2019/12/13 15:46:16 by abara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	size_t	word_nbr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static	size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

/*
**	This function alloc an array with the numbers of elements delimited by 'c'
**	and then fill the array with pointer to the beginning of each element.
**	An element if ended by putting '\0' on the next 'c' occurence.
*/

char			**ft_strsep(char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	nbr;
	size_t	next;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	nbr = word_nbr(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (nbr + 1))))
		return (NULL);
	while (i < nbr && s[j])
	{
		while (s[j] == c && s[j])
			j++;
		next = word_len(&s[j], c);
		tab[i] = &s[j];
		s[j + next] = '\0';
		j = j + next + 1;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

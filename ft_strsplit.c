/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:27:48 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 15:51:35 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	word_nbr(const char *s, char c)
{
	int	i;

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

static	int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		nbr;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	nbr = word_nbr(s, c);
	tab = (char**)malloc(sizeof(char*) * nbr + 1);
	while (i < nbr && s[j])
	{
		while (s[j] == c && s[j])
			j++;
		tab[i] = ft_strsub(&s[j], 0, word_len(&s[j], c));
		j = j + word_len(&s[j], c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

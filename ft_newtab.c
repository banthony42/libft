/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:24:32 by banthony          #+#    #+#             */
/*   Updated: 2018/07/28 19:03:32 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	- Inserer un \n systematiquement est une erreur, ce n'est pas generique.
**	- memset a col + 2 n'a pas de sens alors que l'on malloc a col + 1
*/

char	**ft_newtab_deprecated(int line, int col, int c)
{
	int		i;
	char	**tab;

	i = -1;
	tab = NULL;
	if (line < 0 || col < 0 || c < 0)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (size_t)(line + 1))))
		return (NULL);
	while (++i < line)
	{
		if (!(tab[i] = (char *)malloc(sizeof(char) * (size_t)(col + 1))))
			return (NULL);
		ft_memset(tab[i], c, (size_t)(col + 2));
		tab[i][col] = '\n';
		tab[i][col + 1] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_newtab(int line, int col, int c)
{
	int		i;
	char	**tab;

	i = -1;
	tab = NULL;
	if (line < 0 || col < 0 || c < 0)
		return (NULL);
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * (size_t)(line + 1))))
		return (NULL);
	while (++i < line)
	{
		if (!(tab[i] = (char *)ft_memalloc(sizeof(char) * (size_t)(col + 1))))
			return (NULL);
		ft_memset(tab[i], c, (size_t)(col));
	}
	tab[i] = NULL;
	return (tab);
}

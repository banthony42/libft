/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:24:32 by banthony          #+#    #+#             */
/*   Updated: 2016/01/22 16:03:10 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_newtab(int line, int col, int c)
{
	int		i;
	char	**tab;

	i = -1;
	tab = NULL;
	if (line < 0 || col < 0 || c < 0)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * line + 1)))
		return (NULL);
	while (++i < line)
	{
		if (!(tab[i] = (char *)malloc(sizeof(char) * col + 1)))
			return (NULL);
		ft_memset(tab[i], c, col + 2);
		tab[i][col] = '\n';
		tab[i][col + 1] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}

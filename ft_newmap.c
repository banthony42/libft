/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:24:32 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 22:31:47 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	**ft_newmap(int line, int col)
{
	int		i;
	int		**tab;

	i = -1;
	tab = NULL;
	if (line < 0 || col < 0)
		return (NULL);
	if (!(tab = (int **)malloc(sizeof(int *) * (size_t)line)))
		return (NULL);
	while (++i < line)
	{
		if (!(tab[i] = (int *)malloc(sizeof(int) * (size_t)col)))
			return (NULL);
		ft_memset(tab[i], 0, (sizeof(int) * (size_t)col));
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 13:16:44 by banthony          #+#    #+#             */
/*   Updated: 2016/01/22 14:54:11 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	**ft_tabcpy(char **tab, int line)
{
	int		i;
	char	**tab2;

	i = 0;
	tab2 = NULL;
	if (line < 0)
		return (NULL);
	if (!(tab2 = (char **)malloc(sizeof(char *) * line + 1)))
		return (NULL);
	while (i < line)
	{
		if (!(tab2[i] = ft_strdup(tab[i])))
			return (NULL);
		i++;
	}
	tab2[line] = NULL;
	return (tab2);
}

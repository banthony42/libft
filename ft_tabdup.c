/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 20:31:02 by banthony          #+#    #+#             */
/*   Updated: 2016/09/08 16:42:27 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	**ft_tabdup(char **tab)
{
	int		i;
	int		len;
	char	**tab2;

	i = 0;
	tab2 = NULL;
	len = ft_tablen(tab);
	if (!(tab2 = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		if (!(tab2[i] = ft_strdup(tab[i])))
			return (NULL);
		i++;
	}
	tab2[len] = NULL;
	return (tab2);
}

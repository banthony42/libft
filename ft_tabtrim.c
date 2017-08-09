/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 18:24:48 by banthony          #+#    #+#             */
/*   Updated: 2017/08/09 00:22:16 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_tabtrim(char **tab)
{
	int		i;
	int		len;
	char	**tab2;

	i = 0;
	len = ft_tablen(tab) + 1;
	tab2 = NULL;
	if (!(tab2 = (char **)malloc(sizeof(char *) * (unsigned int)(len))))
		return (NULL);
	while (i < len)
	{
		if (!(tab2[i] = ft_strtrim(tab[i])))
			return (NULL);
		i++;
	}
	tab2[i] = NULL;
	ft_freetab(tab);
	return (tab2);
}

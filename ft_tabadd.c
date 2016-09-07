/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 20:38:52 by banthony          #+#    #+#             */
/*   Updated: 2016/09/07 23:32:06 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabadd(char **tab, char *elmt)
{
	int i;
	int len;
	char **tab2;

	tab2 = NULL;
	i = 0;
	len = ft_tablen(tab);
	ft_putnbrendl(len);
	if (!(tab2 = (char **)malloc(sizeof(char*) * len + 2)))
		return (NULL);
	while (i < len)
	{
		if (!(tab2[i] = ft_strdup(tab[i])))
			return (NULL);
		i++;
	}
	ft_freetab(tab);
	tab2[len] = ft_strdup(elmt);
	tab2[len + 1] = NULL;
	return (tab2);
}

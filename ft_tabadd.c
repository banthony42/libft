/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 20:38:52 by banthony          #+#    #+#             */
/*   Updated: 2016/09/08 16:41:48 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabadd(char **tab, char *elmt)
{
	int i;
	int len;
	char **tab2;

	i = 0;
	tab2 = NULL;
	len = ft_tablen(tab);
	if (!(tab2 = (char **)malloc(sizeof(char*) * (len + 2))))
		return (NULL);
	while (i < len)
	{
		if (!(tab2[i] = ft_strdup(tab[i])))
			return (NULL);
		i++;
	}
	if (!(tab2[i] = ft_strdup(elmt)))
		return (NULL);
	tab2[i + 1] = NULL;
	ft_freetab(tab);
	return (tab2);
}

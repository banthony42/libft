/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:54:22 by banthony          #+#    #+#             */
/*   Updated: 2016/01/22 16:13:45 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_freetab(char **tab, int line)
{
	int	i;

	i = -1;
	if (line <= 0)
		return ;
	while (tab[++i] != NULL)
		free(tab[i]);
	free(tab);
}

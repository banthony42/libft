/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:25:09 by banthony          #+#    #+#             */
/*   Updated: 2017/04/13 22:36:50 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La fonction concatene dest et src, et remplace le resultat a l'adresse.
** pointee par dest, tout en liberant proprement la memoire.
** Permet de contourner le probleme de leaks de cette utilisation de ft_strjoin:
** dest = ft_strjoin(dest, src)
*/

void	ft_strjoin_replace(char **dest, char *src)
{
	char *tmp;

	tmp = NULL;
	tmp = ft_strjoin(*dest, src);
	ft_strdel(dest);
	*dest = ft_strdup(tmp);
	ft_strdel(&tmp);
}

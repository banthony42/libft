/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 19:00:56 by banthony          #+#    #+#             */
/*   Updated: 2016/07/18 09:08:32 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** La fonction ft_close ferme le descripteur fd, de maniere a ce qu'il
** ne reference plus aucun fichier, et puisse etre reutilise. (man close)
**
** VALEUR RENVOYEE:
** Reussite return(0), Fail return(-1) dans ce cas le message d'erreur
** est affichee avec perror.
*/

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int		ft_close(int fd)
{
	int ret;

	ret = 0;
	if ((ret = close(fd)) < 0)
	{
		perror(ft_itoa(fd));
		return (ret);
	}
	return (ret);
}

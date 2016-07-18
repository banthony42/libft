/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closedir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 08:50:02 by banthony          #+#    #+#             */
/*   Updated: 2016/07/18 09:10:03 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** La fonction ft_closedir ferme le flux de repertoire associe a dir.
**
** VALEUR RENVOYEE:
** Reussite return(0), Fail return(-1) dans ce cas le message d'erreur
** est affichee avec perror.
*/

#include <sys/types.h>
#include <stdio.h>
#include "libft.h"

int	ft_closedir(DIR *dir)
{
	int ret;

	ret = 0;
	if ((ret = closedir(dir)) < 0)
	{
		perror("ft_closedir");
		return (ret);
	}
	dir = NULL;
	return (ret);
}

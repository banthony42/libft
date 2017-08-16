/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:03:17 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 00:47:57 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Fonction exit qui termine un processus et affiche le message
** passe en parametre avant de sortir.
*/

void	ft_exit(char *exit_msg, int status)
{
	if (exit_msg != NULL)
		ft_putendl(exit_msg);
	exit(status);
}

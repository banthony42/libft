/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:03:17 by banthony          #+#    #+#             */
/*   Updated: 2017/05/16 15:34:48 by banthony         ###   ########.fr       */
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
	ft_putendl_fd(exit_msg, 2);
	exit(status);
}

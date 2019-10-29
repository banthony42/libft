/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:03:17 by banthony          #+#    #+#             */
/*   Updated: 2019/10/29 14:07:16 by banthony         ###   ########.fr       */
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
		ft_putendl_fd(exit_msg, STDERR_FILENO);
	exit(status);
}

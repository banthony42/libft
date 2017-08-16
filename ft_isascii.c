/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:50:46 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 00:43:57 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifie si c est un unsigned char rentrant dans la table ASCII
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

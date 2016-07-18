/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:37:37 by banthony          #+#    #+#             */
/*   Updated: 2016/07/18 11:02:39 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifie si l'on a un caractere alphanumerique
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}

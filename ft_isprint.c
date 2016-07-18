/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:13:53 by banthony          #+#    #+#             */
/*   Updated: 2016/07/18 11:06:30 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifie si l'on a un caractere imprimable espace compris
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

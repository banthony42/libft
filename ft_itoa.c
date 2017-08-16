/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:59:19 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 01:02:30 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTIONS:
** Alloue (avec malloc(3)) et retourne une chaine de caractères
** “fraiche” terminée par un ’\0’ représentant l’entier n de type int passé
** en paramètre. Les nombres négatifs doivent être gérés. Si l’allocation
** échoue, la fonction renvoie NULL.
**
** VALEUR RENVOYEE:
** La chaine de caractères représentant l’entier passé en paramètre.
*/

static	char	*ft_writenbr(int nbr, char *temp, int *i)
{
	if (nbr < 0)
	{
		temp[*i] = '-';
		nbr = -nbr;
		*i = *i + 1;
	}
	if (nbr >= 10)
	{
		temp = ft_writenbr(nbr / 10, temp, i);
		*i = *i + 1;
		temp = ft_writenbr(nbr % 10, temp, i);
	}
	else
		temp[*i] = (char)(nbr + '0');
	return (temp);
}

char			*ft_itoa(int n)
{
	char		temp[255];
	int			i;
	int			*ptr;
	char		*ret;

	i = 0;
	ptr = &i;
	ret = NULL;
	if (n == -2147483648)
		ret = ft_strdup("-2147483648");
	else
	{
		ft_writenbr(n, temp, ptr);
		temp[i + 1] = '\0';
		if (!(ret = ft_strdup(temp)))
			return (NULL);
	}
	return (ret);
}

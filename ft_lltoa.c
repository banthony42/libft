/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 11:25:34 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 01:06:28 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTIONS:
** Alloue (avec malloc(3)) et retourne une chaine de caractères
** “fraiche” terminée par un ’\0’ représentant l’entier n de type long long
** passé en paramètre. Les nombres négatifs doivent être gérés.
**  Si l’allocation échoue, la fonction renvoie NULL.
**
** VALEUR RENVOYEE:
** La chaine de caractères représentant l’entier passé en paramètre.
*/

static	char	*ft_writenbr(long long nbr, char *temp, int *i)
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
		temp[*i] = nbr + '0';
	return (temp);
}

char			*ft_lltoa(long long n)
{
	char		temp[255];
	int			i;
	int			*ptr;
	char		*ret;

	i = 0;
	ret = NULL;
	ptr = &i;
	if (n == -9223372036854775808)
		ret = ft_strdup("-9223372036854775808");
	else
	{
		ft_writenbr(n, temp, ptr);
		temp[i + 1] = '\0';
		if (!(ret = ft_strdup(temp)))
			return (NULL);
	}
	return (ft_strdup(temp));
}

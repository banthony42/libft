/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 19:43:31 by banthony          #+#    #+#             */
/*   Updated: 2017/08/08 17:49:35 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Supprime les espaces blanc au debut et a la fin de la chaine.
**	Remplace les espaces blanc en milieu de chaine par un caractere unique,
**	(Le caractere est fournit en parametre)
**	Retourne une chaine malloc.
*/

#include "libft.h"

static void	skip_blank(char const *str, int *i)
{
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n')
		*i += 1;
}

char		*ft_strfill(char *str, char c)
{
	int		i;
	int		i2;
	char	*new;
	char	*final;

	i = 0;
	i2 = 0;
	new = ft_strtrim(str);
	final = ft_strnew(ft_strlen(new));
	while (new[i] != '\0')
	{
		if (new[i] == ' ' || new[i] == '\t' || new[i] == '\n')
		{
			final[i2] = c;
			i2++;
			skip_blank(new, &i);
		}
		else
		{
			final[i2] = new[i];
			i2++;
			i++;
		}
	}
	final[i2] = '\0';
	ft_strdel(&new);
	new = ft_strdup(final);
	ft_strdel(&final);
	return (new);
}

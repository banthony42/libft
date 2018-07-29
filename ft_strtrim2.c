/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 18:14:26 by banthony          #+#    #+#             */
/*   Updated: 2018/07/29 18:00:52 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une copie de la chaine
**	passée en paramètre sans les espaces blancs au debut à la fin
**  ou au milieu de cette chaine. On considère comme espaces blancs les
**	caractères ’ ’ et ’\t’, (les '\n' ne sont pas pris en compte ici).
**	Si s ne contient pas d’espaces blancs au début ou à la fin,
**	la fonction renvoie une copie de s.
**	Si l’allocation echoue, la fonction renvoie NULL.
*/

static void	ft_skip_blank(char const *s, int *i)
{
	while (s[*i] == ' ' || s[*i] == '\t')
		*i += 1;
}

char		*ft_strtrim2(char const *s)
{
	char	*str;
	char	*final;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char *)ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	ft_skip_blank(s, &i);
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
			ft_skip_blank(s, &i);
		else
			str[i2++] = s[i++];
	}
	str[i2] = '\0';
	final = ft_strsub(str, 0, ft_strlen(str));
	ft_strdel(&str);
	return (final);
}

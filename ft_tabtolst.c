/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:23:35 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 01:15:45 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tabtolst(char **tab, t_list **lst)
{
	int	i;

	i = 1;
	if ((*lst) != NULL)
		return (-1);
	if (((*lst) = ft_lstnew((void*)tab[0], ft_strlen(tab[0]))) == NULL)
		return (-1);
	while (tab[i] != NULL)
	{
		ft_lstaddback(lst, ft_lstnew((void*)tab[i], ft_strlen(tab[i])));
		i++;
	}
	return (0);
}

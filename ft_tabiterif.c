/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abara <banthony@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 14:58:22 by abara             #+#    #+#             */
/*   Updated: 2019/12/13 15:31:12 by abara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tabiterif(char **tab, int (*f)(char *line, void *data), void *data)
{
	int i;
	int ret;

	i = 0;
	if (!tab || !f)
		return (-1);
	while(tab[i])
	{
		if ((ret = f(tab[i++], data)) < 0)
			return (ret);
	}
	return (ret);
}

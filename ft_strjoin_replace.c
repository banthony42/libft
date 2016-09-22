/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:25:09 by banthony          #+#    #+#             */
/*   Updated: 2016/09/22 15:43:09 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strjoin_replace(char *dest, char *src)
{
	char *tmp;

	tmp = NULL;

	tmp = ft_strjoin(dest, src);
	ft_strdel(&dest);
	dest = ft_strdup(tmp);
	ft_strdel(&tmp);
}

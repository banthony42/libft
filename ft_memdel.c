/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:41:53 by banthony          #+#    #+#             */
/*   Updated: 2017/08/09 16:32:40 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		if (*ap == NULL)
			return ;
		free(*ap);
		*ap = NULL;
	}
}

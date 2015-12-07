/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:13:47 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 16:55:54 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*temp;

	temp = NULL;
	temp = (unsigned char *)malloc(size * sizeof(unsigned char));
	if (temp == NULL || size == 0)
		return (NULL);
	else
		return (ft_memset(temp, 0, size));
}

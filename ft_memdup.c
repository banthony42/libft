/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:38:49 by banthony          #+#    #+#             */
/*   Updated: 2016/02/15 12:44:08 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(const void *data, int size_data)
{
	void *ptr;

	ptr = NULL;
	if (data)
	{
		if (!(ptr = (void *)malloc(sizeof(char) * size_data)))
			return (NULL);
		ft_memcpy(ptr, data, size_data);
	}
	return (ptr);
}

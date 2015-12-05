/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:13:47 by banthony          #+#    #+#             */
/*   Updated: 2015/12/03 18:23:12 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*temp;

	temp = NULL;
	temp = malloc(size * sizeof(unsigned char));
	if (temp == NULL || size == 0)
		return (NULL);
	else
		return (ft_memset(temp, 0, size));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:36:32 by banthony          #+#    #+#             */
/*   Updated: 2019/10/18 15:36:52 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	This function join data:
**	Malloc with new size, copy byte from dest,
**	and copy byte from buf into new ptr.
*/

void		*ft_memjoin(void *dst, void *src, size_t dst_size,
							size_t src_size)
{
	unsigned char *tmp;

	if (!(tmp = ft_memalloc(dst_size + src_size)))
		return (NULL);
	ft_memcpy(tmp, dst, dst_size);
	ft_memcpy(&tmp[dst_size], src, src_size);
	return ((void*)tmp);
}

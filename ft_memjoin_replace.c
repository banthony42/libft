/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:39:36 by banthony          #+#    #+#             */
/*   Updated: 2019/10/18 15:39:57 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_memjoin_replace(void **dst, void *src, size_t *dst_size,
									size_t src_size)
{
	void *tmp;

	tmp = NULL;
	if (dst == NULL || src == NULL)
		return ;
	if (*dst == NULL)
	{
		if (!(*dst = ft_memalloc(src_size)))
			return ;
		ft_memcpy(*dst, src, src_size);
		*dst_size = src_size - 1;
		return ;
	}
	tmp = *dst;
	*dst = ft_memjoin(*dst, src, *dst_size, src_size);
	*dst_size = *dst_size + src_size - 1;
	ft_memdel(&tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 11:38:43 by banthony          #+#    #+#             */
/*   Updated: 2016/01/22 11:48:11 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *begin_list)
{
	size_t count;

	count = 1;
	if (!(begin_list))
		return (0);
	while ((begin_list)->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

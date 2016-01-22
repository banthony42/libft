/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:23:12 by banthony          #+#    #+#             */
/*   Updated: 2016/01/22 16:24:53 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **list, t_list *new)
{
	t_list	*memory;

	if (list && new)
	{
		memory = *list;
		while (memory)
			memory = memory->next;
		memory->next = new;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:23:12 by banthony          #+#    #+#             */
/*   Updated: 2016/07/13 20:56:16 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **list, t_list *new)
{
	t_list	*memory;

	memory = NULL;
	if (list && new)
	{
		memory = *list;
		while (memory->next != NULL)
			memory = memory->next;
		memory->next = new;
	}
}

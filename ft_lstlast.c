/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 11:54:07 by banthony          #+#    #+#             */
/*   Updated: 2016/01/22 12:13:48 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list **memory;

	if (!(begin_list))
		return (NULL);
	memory = &begin_list;
	while (((*memory)->next))
		*memory = (*memory)->next;
	return (*memory);
}

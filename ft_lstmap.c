/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 19:18:48 by banthony          #+#    #+#             */
/*   Updated: 2015/12/09 20:13:37 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *memory;

	new = NULL;
	new = ft_lstnew(lst->content, lst->content_size);
	memory = new;
		while (lst)
	{
		new = f(new);
		lst = lst->next;
		new->next = ft_lstnew(lst->content, lst->content_size);
		new = new->next;
	}
		new->next = NULL;
		new = memory;
		return (new);
}















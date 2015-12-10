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
	t_list *temp;

	new = NULL;
	new = ft_lstnew(lst->content, lst->content_size);
	if (new == NULL)
		return (NULL);
	new = f(new);
	temp = new;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			temp->next = f(lst);
			temp = temp->next;
		}
		return (new);
	}
	return (NULL);
}

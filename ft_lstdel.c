/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:35:51 by banthony          #+#    #+#             */
/*   Updated: 2015/12/09 19:17:14 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *memory;

	lst = *alst;
	while (lst != NULL)
	{
		memory = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = memory;
	}
	*alst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print_memory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:17:38 by banthony          #+#    #+#             */
/*   Updated: 2017/08/15 16:18:24 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	tab[10] = {0, 23, 48, 23, 42};
	char *str = "Salut les aminches c'est cool show mem on fait de truc terrible   \\";
	char *tmp = "coucou     .,><\n\t\n\t42 salut";

	ft_print_memory(tab, sizeof(tab));
	ft_putendl("---------------------NEXT TEST--------------------------");
	ft_print_memory(str, ft_strlen(str));
	ft_putendl("---------------------NEXT TEST--------------------------");
	ft_print_memory(tmp, ft_strlen(tmp));
	return (0);
}

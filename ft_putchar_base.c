/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:39:40 by banthony          #+#    #+#             */
/*   Updated: 2017/08/15 16:26:01 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_base(char c, unsigned int base, char *tab)
{
	if (!tab || !base)
		return ;
	ft_putchar(tab[c/base]);
	ft_putchar(tab[c%base]);
}

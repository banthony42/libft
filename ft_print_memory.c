/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:39:40 by banthony          #+#    #+#             */
/*   Updated: 2017/08/15 16:26:41 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_hex(unsigned char *adr, size_t i)
{
	size_t n;

	n = i;
	while (n < i + 16)
	{
		ft_putchar_base(adr[n], 16, "0123456789abcdef");
		if ((n % 2))
			ft_putchar(' ');
		n++;
	}
}

void	print_char(unsigned char *adr, size_t i)
{
	size_t n;

	n = i;
	while (n < i + 16)
	{
		if (adr[n] >= ' ' && adr[n] <= '~')
			ft_putchar(adr[n]);
		else
			ft_putchar('.');
		n++;
	}
}

void	ft_print_memory(void *addr, size_t size)
{
	unsigned char *adr;
	size_t i;

	adr = (unsigned char*)addr;
	i = 0;
	while (i < size)
	{
		print_hex(adr, i);
		print_char(adr, i);
		ft_putchar('\n');
		i += 16;
	}
}

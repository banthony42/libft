/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:39:40 by banthony          #+#    #+#             */
/*   Updated: 2017/08/15 15:43:05 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_base(char c)
{
	char *hex;

	hex = "0123456789ABCDEF";
	ft_putchar(hex[c/16]);
	ft_putchar(hex[c%16]);
}

void	print_hex(unsigned char *adr, size_t i)
{
	size_t n;

	n = i;
	while (n < i + 16)
	{
		ft_putchar_base(adr[n]);
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

int	main(void)
{
	int	tab[10] = {0, 23, 48, 23, 42};
	char *str = "Salut les aminches c'est cool show mem on fait de truc terrible   \\";

	ft_print_memory(tab, sizeof(tab));
	ft_putendl("---------------------NEXT TEST--------------------------");
	ft_print_memory(str, ft_strlen(str));
	return (0);
}

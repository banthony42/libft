/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftputchar_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:50:55 by banthony          #+#    #+#             */
/*   Updated: 2015/11/24 17:56:19 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int main (void)
{
	int fd;
	int nbr;
	char c;
	char *str;

	fd = 1;
	nbr = - 5673;
	c = 'T';
	str = "test";


	ft_putchar_fd(c, fd);
	ft_putchar('\n');
	ft_putstr_fd(str, fd);
	ft_putchar('\n');
	ft_putnbr_fd(nbr, fd);
}

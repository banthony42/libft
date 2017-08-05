/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:47:23 by banthony          #+#    #+#             */
/*   Updated: 2017/08/04 16:07:43 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstrcol_fd(char const *s, int fd, char *color)
{
	write(fd, color, ft_strlen(color));
	write(fd, s, ft_strlen(s));
	write(fd, WHITE, ft_strlen(WHITE));
}











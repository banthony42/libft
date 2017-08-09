/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putspace_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:55:04 by banthony          #+#    #+#             */
/*   Updated: 2017/08/09 16:55:05 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putspace_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(' ', fd);
}

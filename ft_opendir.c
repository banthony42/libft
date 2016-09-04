/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opendir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 09:06:04 by banthony          #+#    #+#             */
/*   Updated: 2016/09/04 22:00:52 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdio.h>
#include "libft.h"

void	ft_opendir(DIR **folder, const char *path)
{
	if (!(*folder = opendir(path)))
	{
		ft_putstr("ft_opendir: ");
		perror(path);
	}
}

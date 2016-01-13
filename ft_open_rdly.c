/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_rdly.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:18:58 by banthony          #+#    #+#             */
/*   Updated: 2016/01/13 17:42:59 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

int	ft_open_rdly(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error("error during open");
	return (fd);
}

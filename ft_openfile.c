/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:27:35 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 22:27:42 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

int	ft_openfile(const char *file, int oflag)
{
	int fd;

	fd = open(file, oflag);
	if (fd < 0)
		ft_exit("error during open", 0);
	return (fd);
}

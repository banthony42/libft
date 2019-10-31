/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:34:43 by banthony          #+#    #+#             */
/*   Updated: 2019/10/31 17:01:20 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

static void gnl(int fd)
{
	int ret = 1;
	char *line  = NULL;
	uint64_t i = 0;
	while (ret > 0)
	{
		if ((ret = get_next_line(fd, &line)) < 0)
			ft_putendl("GNL ERROR");
		printf("[%llu]:[%s]\n", i, line);
		i++;
		ft_strdel(&line);
	}
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	if (!ft_strncmp(av[1], "STDIN", ft_strlen(av[1])))
		gnl(0);
	else if (!ft_strncmp(av[1], "ERR", ft_strlen(av[1])))
	{
		char *put = NULL;
		ft_putendl("Error check:");
		if (get_next_line(-1, &put) < 0)
			ft_putendl("OK");
		if (get_next_line(42, &put) < 0)
			ft_putendl("OK");
		if (get_next_line(54541, &put) < 0)
			ft_putendl("OK");
		if (get_next_line(-15543, &put) < 0)
			ft_putendl("OK");
	}
	else
	{
		int fd = open(av[1], O_RDONLY);
		gnl(fd);
	}
	return (0);
}

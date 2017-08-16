/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 09:06:28 by banthony          #+#    #+#             */
/*   Updated: 2017/08/16 22:55:45 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_lstat(char *path, struct stat *s_stat)
{
	int	ret;

	ret = 0;
	if ((ret = lstat(path, s_stat)) < 0)
		ft_exit("Erreur lstat", 42);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:25:49 by banthony          #+#    #+#             */
/*   Updated: 2015/11/27 15:56:25 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = NULL;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		return (ft_memset(str, 0, size));
}

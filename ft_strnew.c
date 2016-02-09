/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:25:49 by banthony          #+#    #+#             */
/*   Updated: 2016/02/09 21:19:25 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = NULL;
	str = (char *)malloc(size + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		return (ft_memset(str, 0, size + 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:01:14 by banthony          #+#    #+#             */
/*   Updated: 2015/11/27 17:44:58 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char *str1 = ft_strnew(5);
	char *str2 = ft_memalloc(6);
	char *str3 = NULL;
	void **ptr = *str3;

	str3 = malloc(5 * sizeof(char));
	if (str3  == NULL)
	  return (0);

	printf("%s""%c", str1,'\n');
	printf("%s""%c", str2,'\n');

	ft_memset(str3, 49, 5);
	printf("%s""%c", str3,'\n');
	ft_memdel(ptr);
	printf("%s""%c", str3,'\n');
}

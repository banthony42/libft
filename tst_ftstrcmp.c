/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:13:07 by banthony          #+#    #+#             */
/*   Updated: 2015/11/27 12:09:05 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char poke1[ ] = "12";
	char poke2[ ] = "123";
  
	printf("%s",poke1);
	printf("%c",'\n');
	printf("%s",poke2);
	printf("%c",'\n');
	printf("%c",'\n');

	printf("%i",strcmp(poke1, poke2));
	printf("%c",'\n');

	printf("%i",ft_strcmp(poke1, poke2));
	printf("%c",'\n');
}

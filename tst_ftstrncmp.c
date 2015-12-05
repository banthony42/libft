/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:13:07 by banthony          #+#    #+#             */
/*   Updated: 2015/11/30 14:04:45 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char poke1[ ] = "qas";
	char poke2[ ] = "asd";
	int i = 0;
  
	printf("%s",poke1);
	printf("%c",'\n');
	printf("%s",poke2);
	printf("%c",'\n');
	printf("%c",'\n');

	printf("%i",strncmp(poke1, poke2, i));
	printf("%c",'\n');

	printf("%i",ft_strncmp(poke1, poke2, i));
	printf("%c",'\n');
}

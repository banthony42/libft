/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:17:58 by banthony          #+#    #+#             */
/*   Updated: 2015/12/04 14:33:28 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int  main(void)
{
  //char poke1[ ] = "un deux 96";
	char poke2[ ] = "deux";
	size_t i = 10;
	char    buf[10];

        bzero(buf, 10);
        strcpy(buf, "un deux 9");
	printf("%s\n",buf);
        buf[9] = '6';
	printf("%s\n",buf);
        buf[1] = 0;

	printf("%s",buf);
	printf("%c",'\n');
	printf("%s",poke2);
	printf("%c\n",'\n');

	printf("%s",strnstr(buf, poke2, i));
	printf("%c",'\n');

	printf("%s",ft_strnstr(buf, poke2, i));
	printf("%c",'\n');
}

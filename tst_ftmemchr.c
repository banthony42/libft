/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftmemchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:13:45 by banthony          #+#    #+#             */
/*   Updated: 2015/12/03 15:42:44 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int main (void)
{
     char ctab[11];
     int c;
     int itab[11];
     unsigned long ltab [11];
     int j;

     j = 0;
     while (j < 11)
       {
	 ctab[j] = (char)rand();
	 itab[j] = rand();
	 ltab[j] = (unsigned long)rand() * 100;
	 j++;
       }
    c = ;
    printf("%s\n", memchr(NULL, 0, 0));
    printf("%s\n\n", ft_memchr(NULL, 0, 0));

    printf("%s\n", memchr(ctab, c, sizeof(ctab)));
    printf("%s\n\n", ft_memchr(ctab, c, sizeof(ctab)));

    printf("%s\n", memchr(itab, c, sizeof(itab)));
    printf("%s\n\n", ft_memchr(itab, c, sizeof(itab)));

    printf("%s\n", memchr(ltab, c, sizeof(ltab)));
    printf("%s\n\n", ft_memchr(ltab, c, sizeof(ltab)));

}

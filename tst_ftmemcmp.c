/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftmemchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:13:45 by banthony          #+#    #+#             */
/*   Updated: 2015/12/03 16:41:09 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int main (void)
{
  char *ctab = "salut les coco";
  char *ctab1 = "salut";
     int i = 5;

     printf("%d\n", memcmp(ctab, ctab1, i));
    printf("%d\n\n", ft_memcmp(ctab, ctab1, i));

}

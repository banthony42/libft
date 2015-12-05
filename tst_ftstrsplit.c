/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 20:51:39 by banthony          #+#    #+#             */
/*   Updated: 2015/12/05 21:21:34 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
  char *str = "felicitations,vous,avez,attrape,un,salameche,attrape";
  char **res = ft_strsplit(str, ',');
  int i = 0;

  while (i < 8)
    {
      printf("%s\n", res[i]);
      i++;
    }
}

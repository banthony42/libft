/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftmemset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:36:54 by banthony          #+#    #+#             */
/*   Updated: 2015/11/30 12:10:17 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main() 
{
  char str1[6] = "smogo";
  char str2[6] = "smogo";
  int nbr1 = 3;
  int num1 = 0;
  int *num2 = &num1;
  int nbr2 = 1;
  int num3 = 0;
  int *num4 = &num3;
  char *temp;

  temp = NULL;
  temp = malloc(8 * sizeof(char));
  if (temp == NULL)
    return (0);
  temp = "pikachu";
  char **temp2 = &temp;
  //test int *
  printf("Buf avant 'memset': %d\n", *num2);
  memset(num2, 49, nbr2);
  printf("Buf apres 'memset': %d\n", *num2);

  printf("Buf avant 'ft_memset': %d\n", *num4);
  ft_memset(num4, 49, nbr2);
  printf("Buf apres 'ft_memset': %d\n\n", *num4);
  // test char *
  printf("Buf avant 'memset': %s\n", str1);
  memset(str1, 49, nbr1);
  printf("Buf apres 'memset': %s\n", str1);

  printf("Buf avant 'ft_memset': %s\n", str2);
  ft_memset(str2, 49, nbr1);
  printf("Buf apres 'ft_memset': %s\n\n", str2);

  // test memdel *
  printf("Buf avant 'ft_memdel': %s\n", temp);
  ft_memdel((void**)&temp2);
  printf("Buf apres ft_'memdel': %s\n", temp);
  return 0;
}

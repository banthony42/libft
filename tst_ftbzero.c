/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftmemset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:36:54 by banthony          #+#    #+#             */
/*   Updated: 2015/11/27 14:45:38 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() 
{
  char str1[6] = "smogo";
  char str2[6] = "smogo";
  int nbr1 = 3;
  int num1 = 1111;
  int *num2 = &num1;
  int nbr2 = 1;
  int num3 = 1111;
  int *num4 = &num3;

  //test int *
  printf("Buf avant 'bzero': %d\n", *num2);
  bzero(num2, nbr2);
  printf("Buf apres 'bzero': %d\n", *num2);

  printf("Buf avant 'ft_bzero': %d\n", *num4);
  ft_bzero(num4, nbr2);
  printf("Buf apres 'ft_bzero': %d\n", *num4);
  // test char *
  printf("Buf avant 'bzero': %s\n", str1);
  bzero(str1, nbr1);
  printf("Buf apres 'bzero': %s\n", str1);

  printf("Buf avant 'ft_bzero': %s\n", str2);
  ft_bzero(str2, nbr1);
  printf("Buf apres 'ft_bzero': %s\n", str2);
  return 0;
}

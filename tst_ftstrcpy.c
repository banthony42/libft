/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:10:27 by banthony          #+#    #+#             */
/*   Updated: 2015/11/24 13:04:21 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int  main(void)
{
  char poke1[ ] = "Dracaufeu";
  char poke2[ ] = "Pikachu";
  size_t i = 4;
  
  printf("%s",poke1);
  printf("%c",'\n');
  printf("%s",poke2);
   printf("%c",'\n');

  ft_strncpy(poke1, poke2, i);
  printf("%s",poke1);
  printf("%c",'\n');
  printf("%s",poke2);
}

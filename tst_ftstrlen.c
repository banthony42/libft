/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:10:27 by banthony          #+#    #+#             */
/*   Updated: 2015/11/24 13:10:11 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int  main(void)
{
  char poke1[ ] = "Dracaufeu";
  
  printf("%s",poke1);
  printf("%c",'\n');
  printf("%lu",ft_strlen(poke1));
}

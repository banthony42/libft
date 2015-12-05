/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:56:14 by banthony          #+#    #+#             */
/*   Updated: 2015/12/02 19:14:54 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
  char *str;
  char *str2;

  str = "Hello je tesx";
  str2 = "Hello";
  printf("%s\n", strcat(str, str2));
  printf("%s", ft_strcat(str, str2));
}

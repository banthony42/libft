/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftisalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:36:56 by banthony          #+#    #+#             */
/*   Updated: 2015/11/30 17:24:58 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
  char c;
  char asc;
  char print;
  int i;

  c = 'E';
  i = -300;
  asc = '\n';
  print = 7;

  printf("%i", isalpha(c));
  printf("%i""%c""%c", ft_isalpha(c), '\n', '\n');

  printf("%i", isdigit(i));
  printf("%i""%c""%c", ft_isdigit(i), '\n', '\n');

  printf("%i", isalnum(i));
  printf("%i""%c""%c", ft_isalnum(i), '\n', '\n');

  printf("%i", isascii(asc));
  printf("%i""%c""%c", ft_isascii(asc), '\n', '\n');

  printf("%i", isprint(print));
  printf("%i""%c""%c", ft_isprint(print), '\n', '\n');
}

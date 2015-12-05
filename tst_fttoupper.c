/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_fttoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:55:12 by banthony          #+#    #+#             */
/*   Updated: 2015/11/26 16:06:04 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
  char min;
  char maj;

  min = 'o';
  maj = 'K';
  printf("%c""%c", toupper(min),'\n');
  printf("%c""%c""%c", ft_toupper(min), '\n', '\n');

  printf("%c""%c", tolower(maj),'\n');
  printf("%c""%c""%c", ft_tolower(maj), '\n', '\n');
}

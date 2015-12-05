/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftmemmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:32:18 by banthony          #+#    #+#             */
/*   Updated: 2015/12/03 11:36:05 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
  char            str[] = "memmove can be very useful......";
  char            str2[] = "memmove can be very useful......";
  char            str3[] = "memmove can be very useful......";
  char            str4[] = "memmove can be very useful......";

  printf("%s\n", memmove(str + 10, str + 5, 10));
  printf("%s\n\n", ft_memmove(str2 + 10, str2 + 5, 10));

  printf("%s\n", memmove(str3 + 5, str3 + 10, 10));
  printf("%s\n\n", ft_memmove(str4 + 5, str4 + 10, 10));
}

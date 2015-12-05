/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:14:03 by banthony          #+#    #+#             */
/*   Updated: 2015/12/02 15:48:07 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
  char *str;
  char                    str1[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
  char                    str2[] = "Bonjour";
  char                    str3[] = "  \t\t\t   ";
  str = "     salut     ";
  printf("%s", ft_strtrim(str));
  printf("%s", ft_strtrim(str1));
  printf("%s", ft_strtrim(str2));
  printf("%s", ft_strtrim(str3));
  printf("%s", ft_strtrim(NULL));
}

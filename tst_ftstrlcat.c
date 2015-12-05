/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrlcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:30:25 by banthony          #+#    #+#             */
/*   Updated: 2015/12/05 17:16:35 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
  char    buf[10];

  bzero(buf, 10);
  strcpy(buf, "abc");
  printf("%zu\n", ft_strlcat(buf, "abcdefghijklmnop", 10));
  printf("%s\n", buf);
  printf("%zu\n", ft_strlcat(buf, "abcd", 2));
  printf("%s\n\n", buf);

  bzero(buf, 10);
  strcpy(buf, "abc");
  printf("%zu\n", strlcat(buf, "abcdefghijklmnop", 10));
  printf("%s\n", buf);
  printf("%zu\n", strlcat(buf, "abcd", 2));
  printf("%s\n", buf);
  return (0);
}

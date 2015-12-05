/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:38:07 by banthony          #+#    #+#             */
/*   Updated: 2015/12/02 17:54:28 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
  char *str;

  str = "Hello je tesx";

  printf("%s\n", strchr(str, 0));
  printf("%s", ft_strchr(str, 0));
}

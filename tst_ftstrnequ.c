/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftstrnequ.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 11:59:57 by banthony          #+#    #+#             */
/*   Updated: 2015/12/04 12:11:45 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
  char *str = NULL;
  int i = 0;
  int res = ft_strnequ(str, "", i);

  str = "ededeqdf";
  printf("%d\n", res);
}

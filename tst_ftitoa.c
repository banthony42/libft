/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:20:02 by banthony          #+#    #+#             */
/*   Updated: 2015/12/04 19:53:28 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *result2;
	int entry;

	entry = -2147483648;
	result2 = ft_itoa(entry);
	printf("%s",result2);
}

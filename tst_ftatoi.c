/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ftatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:20:02 by banthony          #+#    #+#             */
/*   Updated: 2015/12/03 13:00:47 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int result;
	int result2;
	char *entry;

	entry = "  \t\n  \r\r\v\f-899";
	result = atoi(entry);
	printf("%d\n",result);
	result2 = ft_atoi(entry);
	printf("%d",result2);
}

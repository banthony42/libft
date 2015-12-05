/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:10:27 by banthony          #+#    #+#             */
/*   Updated: 2015/11/26 18:40:33 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char poke1[ ] = "Salameche evolue en Dracaufeu";
	char poke2[ ] = "evok";
  
	printf("%s",poke1);
	printf("%c",'\n');
	printf("%s",poke2);
	printf("%c",'\n');

	printf("%s",strstr(poke1, poke2));
	printf("%c",'\n');

	printf("%s",ft_strstr(poke1, poke2));
	printf("%c",'\n');
}

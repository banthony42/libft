/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 16:50:40 by banthony          #+#    #+#             */
/*   Updated: 2016/05/02 20:00:24 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	inst(char *tab, char *code, int *i)
{
	int hook;
	int bool;

	bool = 0;
	hook = 0;
	if (code[*i] == '>')
		tab++;
	if (code[*i] == '<')
		tab--;
	if (code[*i] == '+')
		(*tab)++;
	if (code[*i] == '-')
		(*tab)--;
	if (code[*i] == '.')
		write(1, tab, 1);
	if (code[*i] == '[' && (*tab) == 0)
	{
		hook = 1;
		while (hook != 0)
		{
			if (code[*i] == '[')
				hook++;
			if (code[*i] == ']')
				hook--;
			*i = *i + 1;
		}
		*i = *i - 1;
		bool++;
	}
	if (code[*i] == ']' && (*tab) != 0)
	{
		hook = 1;
		while (hook != 0)
		{
			if (code[*i] == ']')
				hook++;
			if (code[*i] == '[')
				hook--;
			*i = *i - 1;
		}
		*i = *i + 2;
		bool++;
	}
	if (bool == 0)
		*i = *i + 1;
}

#include <stdio.h>

void	brainfuck(char *code)
{
	char *tab;
	int i;

	i = -1;
	tab = NULL;
	if (!(tab = (char*)malloc((sizeof(char) * 2048 + 1))))
		return ;
	while (tab[++i])
		tab[i] = 0;
	i = -1;
	tab[2048] = '\0';
	i = 0;
	while (code[i])
	{
		inst(tab, code, &i);
	}
	printf("tab:%s\n", tab);
	free(tab);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	brainfuck(av[1]);
	return (0);
}

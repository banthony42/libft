/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:20:12 by banthony          #+#    #+#             */
/*   Updated: 2015/12/07 16:22:57 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_test_sign(const char *str, int i)
{
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	return (i);
}

int			ft_atoi(const char *str)
{
	int i;
	int result;
	int correc;

	i = 0;
	result = 0;
	correc = 1;
	while (str[i] == '\v' || str[i] == '\r' || str[i] == '\f'
	|| str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		correc = -1;
	i = ft_test_sign(str, i);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			result = (result * 10) + (str[i] - 48);
		if (str[i] > '9' || str[i] < '0')
			return (result * correc);
		i++;
	}
	return (result * correc);
}

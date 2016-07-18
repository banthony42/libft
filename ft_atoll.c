/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 08:23:55 by banthony          #+#    #+#             */
/*   Updated: 2016/07/18 08:25:20 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** La fonction ft_atoll convertit la chaine pointee par str
** en entier de type, long long.
**
** VALEUR RENVOYEE:
** Le resultat de la conversion.
**
** NOTES:
** Dans la lib, atoi et atol convertissent la chaine pointee
** par str, respectivement en entier de type int et long.
*/

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

long long	ft_atoll(const char *str)
{
	int			i;
	long long	result;
	long long	correc;

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

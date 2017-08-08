/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:35:40 by banthony          #+#    #+#             */
/*   Updated: 2017/08/08 17:48:19 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		numb_len(int *value, int base, int *sign, unsigned int *val)
{
	int				len;
	unsigned int	tmp;

	len = 0;
	if (*value >= 0)
		*val = *value;
	else
	{
		*val = *value * -1;
		if (base == 10)
			*sign = 1;
	}
	tmp = *val;
	if (tmp == 0)
		return (0);
	while (tmp > 0)
	{
		len++;
		tmp = tmp / base;
	}
	return (len + *sign);
}

char	*ft_itoa_base(int value, int base)
{
	unsigned int	val;
	int				sign;
	int				len;
	char			*numb;

	sign = 0;
	len = numb_len(&value, base, &sign, &val);
	if (!(numb = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	numb[len] = '\0';
	if (val == 0)
		numb[len - 1] = '0';
	while (len >= 0)
	{
		if (val <= 9 || base != 16)
			numb[len] = (val % base) + '0';
		else
			numb[len] = (val % base) + 'A' - 10;
		val = val / base;
		len--;
	}
	if (sign && base == 10)
		numb[0] = '-';
	return (numb);
}

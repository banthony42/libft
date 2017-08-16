/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgbtohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 01:31:14 by banthony          #+#    #+#             */
/*   Updated: 2017/08/17 01:31:18 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_rgbtohexa(const int red, const int green, const int blue)
{
	int r;
	int g;
	int b;

	r = red;
	g = green;
	b = blue;
	(r > 255) ? (r = 255) : (r += 0);
	(g > 255) ? (g = 255) : (g += 0);
	(b > 255) ? (b = 255) : (b += 0);
	(r < 0) ? (r = 0) : (r += 0);
	(g < 0) ? (g = 0) : (g += 0);
	(b < 0) ? (b = 0) : (b += 0);
	r = r << 16;
	g = g << 8;
	r = r | g | b;
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_rgb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 10:29:48 by banthony          #+#    #+#             */
/*   Updated: 2016/04/26 10:32:28 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		hexa_rgb(int red, int green, int blue)
{
	int color;
	int mask;

	color = 0;
	mask = 0xFF0000;
	red = (color & mask) >> 16;
	mask = 0x00FF00;
	green = (color & mask) >> 8;
	mask = 0x0000FF;
	blue = color & mask;
	return (color);
}

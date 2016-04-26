/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 10:30:10 by banthony          #+#    #+#             */
/*   Updated: 2016/04/26 10:30:21 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rgb_hexa(int red, int green, int blue)
{
	(red > 255) ? (red = 255) : (red += 0);
	(green > 255) ? (green = 255) : (green += 0);
	(blue > 255) ? (blue = 255) : (blue += 0);
	(red < 0) ? (red = 0) : (red += 0);
	(green < 0) ? (green = 0) : (green += 0);
	(blue < 0) ? (blue = 0) : (blue += 0);
	red = red << 16;
	green = green << 8;
	red = red | green | blue;
	return (red);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:13:12 by gwells            #+#    #+#             */
/*   Updated: 2015/02/04 11:13:15 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

t_uint	ftx_rgb(short r, short g, short b)
{
	t_uint		color;

	color = 0;
	if (r < 0)
		r = 0;
	if (g < 0)
		g = 0;
	if (b < 0)
		b = 0;
	color = (color + r) << 8;
	color = (color + g) << 8;
	color = (color + b);
	return (color);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_vertical.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 14:55:58 by gwells            #+#    #+#             */
/*   Updated: 2016/04/22 14:56:05 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

void		ft_draw_vertical(t_img *img, t_points *p1,\
			t_points *p2, t_ulong color)
{
	int			x;
	int			y;
	double		err;

	x = p1->x;
	y = p1->y;
	err = 0;
	while (y < p2->y)
	{
		ft_pixel_put(img, x, y, color);
		if (err > 0.5)
		{
			x += (p1->x < p2->x) ? 1 : -1;
			err -= 1.0;
		}
		y++;
	}
}

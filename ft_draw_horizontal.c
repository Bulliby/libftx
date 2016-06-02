/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_horizontal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 14:54:25 by gwells            #+#    #+#             */
/*   Updated: 2016/04/22 14:55:39 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

void		ft_draw_horizontal(t_img *img, t_points *p1,\
			t_points *p2, t_ulong color)
{
	int			x;
	int			y;
	double		err;

	x = p1->x;
	y = p1->y;
	err = 0;
	while (x < p2->x)
	{
		ft_pixel_put(img, x, y, color);
		if (err > 0.5)
		{
			y += (p1->y < p2->y) ? 1 : -1;
			err -= 1.0;
		}
		x++;
	}
}

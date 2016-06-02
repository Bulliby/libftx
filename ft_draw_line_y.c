/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line_y.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:11:01 by gwells            #+#    #+#             */
/*   Updated: 2015/02/06 17:43:00 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

void		ft_draw_line_y(double derr, t_img *img, t_points *p1, t_points *p2)
{
	int			x;
	int			y;
	double		err;

	x = p1->x;
	y = p1->y;
	err = 0;
	while (y < p2->y)
	{
		ft_pixel_put(img, x, y, 0x00FF00);
		err += derr;
		if (err > 0.5)
		{
			x += (p1->x < p2->x) ? 1 : -1;
			err -= 1.0;
		}
		y++;
	}
}

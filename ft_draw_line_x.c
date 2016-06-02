/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:10:36 by gwells            #+#    #+#             */
/*   Updated: 2015/02/06 17:42:48 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

void		ft_draw_line_x(double derr, t_img *img, t_points *p1, t_points *p2)
{
	int			x;
	int			y;
	double		err;

	x = p1->x;
	y = p1->y;
	err = 0;
	while (x < p2->x)
	{
		ft_pixel_put(img, x, y, 0x00FF00);
		err += derr;
		if (err > 0.5)
		{
			y += (p1->y < p2->y) ? 1 : -1;
			err -= 1.0;
		}
		x++;
	}
}

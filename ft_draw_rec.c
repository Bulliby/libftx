/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_rec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 19:10:17 by gwells            #+#    #+#             */
/*   Updated: 2015/02/06 19:16:52 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"
#include <math.h>

void			ft_draw_rec(t_img *img, int x, int y, t_recsize *size)
{
	int			i;
	t_points	p1;
	t_points	p2;

	i = 0;
	p1.x = x;
	p2.x = x + size->w;
	while (i <= size->h)
	{
		p2.y = y + i;
		p1.y = y + i;
		ft_draw_line_x((p2.y - p1.y) / (p2.x - p1.x), img, &p1, &p2);
		i++;
	}
}

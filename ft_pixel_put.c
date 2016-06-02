/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 13:38:41 by gwells            #+#    #+#             */
/*   Updated: 2016/03/23 15:44:58 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

void		ft_pixel_put(t_img *img, int x, int y, t_ulong color)
{
	int			i;
	char		c;

	if (img->data && x < img->width && x >= 0 && y < img->height && y >= 0)
	{
		i = x * img->bpp / 8 + img->sizeline * y;
		if (img->endian == 0)
		{
			c = (color & 0xFF) >> 0;
			img->data[i] = c;
			c = (color & 0xFF00) >> 8;
			img->data[i + 1] = c;
			c = (color & 0xFF0000) >> 16;
			img->data[i + 2] = c;
		}
		else
		{
			c = (color & 0xFF0000) >> 16;
			img->data[i] = c;
			c = (color & 0xFF00) >> 8;
			img->data[i + 1] = c;
			c = (color & 0xFF) >> 0;
			img->data[i + 2] = c;
		}
	}
}

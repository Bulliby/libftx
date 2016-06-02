/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 14:56:57 by gwells            #+#    #+#             */
/*   Updated: 2016/04/22 15:32:18 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTX_H
# define LIBFTX_H

# include "typedef.h"

void	ft_pixel_put(t_img *img, int x, int y, t_ulong color);
t_uint	ftx_rgb(short r, short g, short b);
void	ft_draw_line_x(double d, t_img *img, t_points *p1, t_points *p2);
void	ft_draw_line_y(double d, t_img *img, t_points *p1, t_points *p2);
void	ft_draw_vertical(t_img *img, t_points *p1, t_points *p2, t_ulong color);
void	ft_draw_rec(t_img *img, int x, int y, t_recsize *size);
#endif

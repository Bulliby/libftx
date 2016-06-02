/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwells <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:14:51 by gwells            #+#    #+#             */
/*   Updated: 2015/02/06 19:19:53 by gwells           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDEF_H
# define TYPEDEF_H

typedef unsigned long	t_ulong;
typedef unsigned int	t_uint;

typedef struct			s_img
{
	void				*pic;
	int					bpp;
	int					sizeline;
	int					endian;
	char				*data;
	int					width;
	int					height;
}						t_img;

typedef struct			s_points
{
	double				x;
	double				y;
	double				z;
	double				p;
}						t_points;

typedef struct			s_recsize
{
	int					w;
	int					h;
}						t_recsize;
#endif

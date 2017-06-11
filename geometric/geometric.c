/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:36:17 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/18 21:14:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						circle(t_coord *coord, int r, int color, t_fdf *mlw)
{
	t_coord		cpy_coord;
	long double	del;
	t_coord		len;
	long double	del_a;

	len.x = 0;
	del_a = 0;
	len.y = round(PI * r * 2);
	del = 1.0 / (long double)(r);
	while (len.x < len.y)
	{
		cpy_coord.x = coord->x + r * cos(del_a);
		cpy_coord.y = coord->y + r * sin(del_a);
		del_a += del;
		mlx_pixel_put(mlw->mlx, mlw->win, cpy_coord.x, cpy_coord.y, color);
		len.x++;
	}
}

void						line_calcul(t_coord_init_fin *coord, t_coord *color,
	t_fdf *mlw, int *v)
{
	while (1)
	{
		mlx_pixel_put(mlw->mlx, mlw->win, coord->init.x, coord->init.y,
			color->x);
		color->x += color->y;
		v[5] = v[4];
		if ((coord->init.x == coord->final.x) &&
			(coord->init.y == coord->final.y))
			break ;
		if (v[5] > -v[0])
		{
			v[4] -= v[2];
			coord->init.x += v[1];
		}
		if (v[5] < v[2])
		{
			v[4] += v[0];
			coord->init.y += v[3];
		}
	}
}

void						line(t_coord *init, t_coord *final, t_coord *color,
	t_fdf *mlw)
{
	int						v[6];
	t_coord_init_fin		coord;
	t_coord					color_l;

	ft_memcpy(&coord.init.x, &init->x, 2 * sizeof(int));
	ft_memcpy(&coord.final.x, &final->x, 2 * sizeof(int));
	ft_memcpy(&color_l.x, &color->x, 2 * sizeof(int));
	calcul_pas_pixel_line(&coord.init, &coord.final, v);
	line_calcul(&coord, &color_l, mlw, v);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:44:02 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 18:44:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					button_unu(t_fdf *mlw, t_coord *coord)
{
	if (coord->y > mlw->frame.y - 100)
	{
		frame_comand(mlw);
		return ;
	}
	else if (coord->y < mlw->frame.y - 100)
		frame_no_fdf_corp(mlw);
	if ((mlw->move.flag & 1))
	{
		coord->x = mlw->corp[mlw->move.scale.y][mlw->move.scale.x].x;
		coord->y = mlw->corp[mlw->move.scale.y][mlw->move.scale.x].y;
		reinit_move_for_one_coord(mlw, &mlw->move.mv, &mlw->move.scale);
		reinit_t_td_coord_corp(mlw, coord);
		return ;
	}
}

void					button_doi(t_fdf *mlw, t_coord *coord)
{
	if (coord->x)
		reinit_frame(mlw);
	return ;
}

void					button_trei(t_fdf *mlw, t_coord *coord)
{
	if (coord->x)
		reinit_frame(mlw);
	return ;
}

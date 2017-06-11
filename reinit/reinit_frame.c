/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_frame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:56:42 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/04 11:03:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				patru_circle(t_fdf *mlw, t_coord *aria)
{
	int				color;

	color = mlw->corp[mlw->move.scale.y][mlw->move.scale.x].color;
	circle(aria, 4, color, mlw);
	circle(aria, 5, color, mlw);
	circle(aria, 6, color, mlw);
	circle(aria, 7, color, mlw);
}

void				reinit_frame(t_fdf *mlw)
{
	t_coord			aria;

	mlx_clear_window(mlw->mlx, mlw->win);
	mlx_clear_window(mlw->mlx, mlw->win);
	frame_comand_line(mlw);
	cre_line(mlw);
	if (mlw->move.flag & 1)
	{
		reinit_move_mv(mlw, &aria, &mlw->move.scale);
		patru_circle(mlw, &aria);
	}
}

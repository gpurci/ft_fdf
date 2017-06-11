/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_move_for_one_coord.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 03:49:33 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 03:49:35 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					reinit_move_for_one_coord(t_fdf *mlw, t_coord *aria,
	t_coord *scale)
{
	t_unghi				angle;
	t_td_coord			td;

	td.x = mlw->corp[scale->y][scale->x].x * mlw->move.zoom;
	td.y = mlw->corp[scale->y][scale->x].y * mlw->move.zoom;
	td.z = 0;
	radian_angle(&angle, &mlw->angle);
	alfa_calcul(&td, angle.alfa);
	beta_calcul(&td, angle.beta);
	gamma_calcul(&td, angle.gamma);
	aria->x = td.x + mlw->move.mv.x;
	aria->y = td.y + mlw->move.mv.y;
}

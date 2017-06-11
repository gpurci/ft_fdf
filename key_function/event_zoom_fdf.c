/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_zoom_fdf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:20:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 19:20:32 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					event_zoom_fdf(t_fdf *mlw, char zoom)
{
	if (zoom == '-')
		mlw->move.zoom -= mlw->move.sc_zoom;
	else
		mlw->move.zoom += mlw->move.sc_zoom;
	if (mlw->move.zoom < 1)
		mlw->move.zoom = 1;
	if (mlw->angle.alfa != 0.0 || mlw->angle.beta != 0.0 ||
		mlw->angle.gamma != 0.0)
		rotire_matrici(mlw, 0.0, 0);
	else
		reinit_td_t_td_coord(mlw);
	reinit_frame(mlw);
}

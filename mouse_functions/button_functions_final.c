/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button_functions_final.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:14:22 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 19:14:26 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					button_patru(t_fdf *mlw, t_coord *coord)
{
	t_button_func		scale_f[4];

	init_t_button_func(scale_f);
	coord->y = -1;
	coord->x = 1;
	scale_f[(mlw->move.flag >> 1)].f(mlw, coord);
	reinit_frame(mlw);
}

void					button_cinci(t_fdf *mlw, t_coord *coord)
{
	t_button_func		scale_f[4];

	init_t_button_func(scale_f);
	coord->y = 1;
	coord->x = 1;
	scale_f[(mlw->move.flag >> 1)].f(mlw, coord);
	reinit_frame(mlw);
}

void					button_sase(t_fdf *mlw, t_coord *coord)
{
	t_button_func		scale_f;

	scale_f.f = &move_scale;
	if ((mlw->move.flag >> 1))
		return ;
	coord->y = -1;
	coord->x = 0;
	scale_f.f(mlw, coord);
	reinit_frame(mlw);
}

void					button_sapte(t_fdf *mlw, t_coord *coord)
{
	t_button_func		scale_f;

	scale_f.f = &move_scale;
	if ((mlw->move.flag >> 1))
		return ;
	coord->y = 1;
	coord->x = 0;
	scale_f.f(mlw, coord);
	reinit_frame(mlw);
}

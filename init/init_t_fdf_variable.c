/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_fdf_variable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 18:18:10 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 18:18:15 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					init_var(t_fdf *mlw)
{
	mlw->button = 0;
	mlw->key = 0;
	mlw->flag = 0;
	mlw->shift = 0;
	mlw->scara = 0;
}

void					init_var_move(t_move *move)
{
	move->pas.x = 10;
	move->pas.y = 10;
	move->mv.x = 100;
	move->mv.y = 100;
	move->scale.x = 0;
	move->scale.y = 0;
	move->sc_angle = 9.0;
	move->flag = 0;
	move->zoom = 10;
	move->sc_z = 10;
	move->sc_color = 1000;
	move->sc_move = 10;
	move->sc_zoom = 10;
}

void					init_t_fdf_variable(t_fdf *mlw)
{
	init_var(mlw);
	init_var_move(&mlw->move);
	mlw->string.i = 0;
	mlw->string.init.x = 100;
	mlw->string.init.y = mlw->frame.y - 80;
	ft_strcpy(mlw->string.dir, "test_maps/");
	mlw->angle.alfa = 0;
	mlw->angle.beta = 0;
	mlw->angle.gamma = 0;
}

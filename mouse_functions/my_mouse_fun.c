/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mouse_fun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 16:55:47 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/07 21:17:16 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int						my_mouse_fun(int button, int x, int y, void *param)
{
	t_coord				aria;
	t_fdf				*mlw;
	t_button_func		button_f[7];

	mlw = (t_fdf*)param;
	init_function_my_mouse_fun(button_f);
	if ((mlw->corp && mlw->flag != 2) || button == 1)
	{
		conv_int_t_coord(&aria, x, y);
		conv_int_t_coord(&mlw->move.scale, x, y);
		if ((mlw->corp && mlw->flag != 2))
			calcul_verificare_point_matrix_aria(mlw);
		button_f[button - 1].f(mlw, &aria);
	}
	return (0);
}

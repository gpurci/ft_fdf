/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 00:46:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 00:46:33 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int					main(void)
{
	t_fdf mlw;

	mlw.mlx = mlx_init();
	mlw.frame.x = 1000;
	mlw.frame.y = 1000;
	mlw.win = mlx_new_window(mlw.mlx, mlw.frame.x, mlw.frame.y, "gpurci");
	init_t_fdf_variable(&mlw);
	frame_comand_line(&mlw);
	mlw.corp = 0;
	mlx_hook(mlw.win, KEY_PRESS, KEY_PRESS_MASK, &mouse_pres, &mlw);
	mlx_hook(mlw.win, MOTION_NOTIFY, PTR_MOTION, &mouse_motion, &mlw);
	mlx_key_hook(mlw.win, &my_key_fun, &mlw);
	mlx_mouse_hook(mlw.win, &my_mouse_fun, &mlw);
	mlx_loop(mlw.mlx);
	return (0);
}

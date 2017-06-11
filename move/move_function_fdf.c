/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_function_fdf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 23:16:10 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 23:16:12 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char						standart_move_function_fdf(t_fdf *mlw, int i)
{
	if (standart_number(&mlw->string.c[i], "x "))
	{
		ft_atoi_limit(&mlw->string.c[i + 2], &mlw->move.mv.x);
		move_frame_rotire_reinit(mlw);
		return (1);
	}
	else if (standart_number(&mlw->string.c[i], "y "))
	{
		ft_atoi_limit(&mlw->string.c[i + 2], &mlw->move.mv.y);
		move_frame_rotire_reinit(mlw);
		return (1);
	}
	return (0);
}

void						move_function_fdf(t_fdf *mlw)
{
	t_coord					coord;
	int						i;
	char					c[12];

	ft_strcpy(c, "No comand");
	if (!ft_strlen(&mlw->string.c[(i = ft_strlen(mlw->string.c) + 1)]))
	{
		mlw->move.flag = (mlw->move.flag & 1);
		return ;
	}
	if (standart_move_function_fdf(mlw, i))
		return ;
	if (standart_dublu_nbr(&mlw->string.c[i], &coord))
	{
		ft_memcpy(&mlw->move.mv.x, &coord.x, 2 * sizeof(int));
		move_frame_rotire_reinit(mlw);
		return ;
	}
	frame_delete_comand(mlw);
	mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x, mlw->string.init.y,
		0xFFFFFF, c);
}

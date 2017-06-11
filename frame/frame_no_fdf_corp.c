/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_no_fdf_corp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 13:25:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/15 13:25:15 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void			frame_no_fdf_corp(t_fdf *mlw)
{
	mlw->flag = 0;
	if (mlw->corp)
		move_frame_rotire_reinit(mlw);
	else
	{
		mlx_clear_window(mlw->mlx, mlw->win);
		frame_comand_line(mlw);
	}
}

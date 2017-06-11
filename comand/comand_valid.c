/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comand_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 22:54:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 22:54:07 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						no_line(t_fdf *mlw)
{
	*(mlw->string.c + mlw->string.i) = 0;
	mlw->string.i = 0;
}

void						comand_valid(t_fdf *mlw)
{
	t_comand_func			comand_fun[8];
	int						i;
	char					c[12];

	init_function_comand_valid(comand_fun);
	ft_strcpy(c, "Error alloc");
	no_line(mlw);
	frame_delete_comand(mlw);
	if ((i = comand_verificare_fdf(mlw)) == -1)
		return ;
	if (mlw->corp || !i)
		comand_fun[i].f(mlw);
	if (mlw->flag == 1)
		mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x,
			mlw->string.init.y, 0xFFFFFF, c);
	else
	{
		mlw->flag = 2;
		frame_dreptunghi(mlw);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle_function_fdf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 23:20:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 23:20:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						angle_function_fdf(t_fdf *mlw)
{
	double					*angle[3];
	int						i;
	int						j;
	char					c[4][10];

	angle[0] = &mlw->angle.alfa;
	angle[1] = &mlw->angle.beta;
	angle[2] = &mlw->angle.gamma;
	i = ft_strlen(mlw->string.c) + 1;
	init_comand_angle_function_fdf(c);
	j = 0;
	while (!standart_number(&mlw->string.c[i], c[j]) && j < 3)
		j++;
	if (j > 2)
	{
		frame_delete_comand(mlw);
		mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x,
			mlw->string.init.y, 0xFFFFFF, c[j]);
		return ;
	}
	*angle[j] = ft_atoi_limit(&mlw->string.c[i +
		ft_memlen(&mlw->string.c[i], ' ') + 1], angle[j]);
	move_frame_rotire_reinit(mlw);
}

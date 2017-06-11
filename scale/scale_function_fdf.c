/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_function_fdf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 23:22:10 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 23:22:12 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						scale_function_fdf(t_fdf *mlw)
{
	t_comand_func			scale[5];
	char					comand[6][10];
	int						i;
	int						j;

	init_comand_scale_function_fdf(comand);
	init_function_scale_function_fdf(scale);
	i = ft_strlen(mlw->string.c) + 1;
	j = 0;
	while (!standart_number(&mlw->string.c[i], comand[j]) && j < 5)
		j++;
	if (j > 4)
	{
		frame_delete_comand(mlw);
		mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x,
			mlw->string.init.y, 0xFFFFFF, comand[j]);
		return ;
	}
	scale[j].f(mlw);
}

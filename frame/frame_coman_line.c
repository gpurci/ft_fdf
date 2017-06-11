/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_coman_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:54:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:54:05 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				frame_comand_line(t_fdf *mlw)
{
	t_coord			init;
	t_coord			final;
	char			c[25];

	ft_strcpy(c, "tasta 'a' este ajutorul");
	init.x = 0;
	init.y = mlw->frame.y - 100;
	final.x = mlw->frame.x;
	final.y = mlw->frame.y - 95;
	new_frame(mlw, &init, &final, 0xFFFFFF);
	mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x,
		mlw->string.init.y, 0xFFFFFF, c);
}

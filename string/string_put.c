/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:38:37 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 09:37:37 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void			string_put(t_fdf *mlw, char key)
{
	*(mlw->string.c + mlw->string.i) = key;
	*(mlw->string.c + mlw->string.i + 1) = 0;
	frame_line(mlw);
	mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x, mlw->string.init.y,
			0xFFFFFF, mlw->string.c);
}

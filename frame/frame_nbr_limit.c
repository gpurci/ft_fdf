/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_nbr_limit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 19:05:22 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 09:39:14 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					frame_nbr_limit(t_fdf *mlw)
{
	char				c[15];

	ft_strcpy(c, "Numar interzis");
	frame_delete_comand(mlw);
	mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x, mlw->string.init.y,
		0xFFFFFF, c);
}

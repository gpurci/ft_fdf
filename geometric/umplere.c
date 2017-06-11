/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   umplere.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:42:11 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 17:42:13 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					umplere(t_fdf *mlw, t_coord *xoxu, int y, int color)
{
	xoxu->y++;
	while (xoxu->x < xoxu->y)
	{
		mlx_pixel_put(mlw->mlx, mlw->win, xoxu->x, y, color);
		xoxu->x++;
	}
}

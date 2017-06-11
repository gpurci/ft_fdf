/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 16:01:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/22 16:46:09 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				zoom_td_coord(t_td_coord *td, int zoom, int scara)
{
	if (scara > 0)
	{
		td->x *= zoom;
		td->y *= zoom;
		td->z *= zoom;
	}
	else
	{
		td->x /= zoom;
		td->y /= zoom;
		td->z /= zoom;
	}
}

int					rastru_zoom_t_fdf(int pas, int *scara)
{
	if (pas > 0)
		return (pas);
	*scara = -1;
	return (-pas);
}

void				reinit_zoom_fdf(t_fdf *mlw)
{
	t_coord			coord;
	t_coord			zoom;
	t_td_coord		**td;

	td = mlw->corp;
	zoom.y = 1;
	zoom.x = rastru_zoom_t_fdf(mlw->move.pas.x, &zoom.y);
	coord.x = 0;
	if (zoom.x != 0)
	{
		while (coord.x < mlw->len.y)
		{
			coord.y = 0;
			while (coord.y < mlw->len.x)
			{
				zoom_td_coord(&td[coord.x][coord.y], zoom.x, zoom.y);
				printf("%d ", coord.y);
				coord.y++;
			}
			coord.x++;
		}
	}
}

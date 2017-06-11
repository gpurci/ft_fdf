/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_td_coord.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 16:39:38 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/07 18:30:05 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					copy_t_td_coord(t_td_coord *dest, t_td_coord *src,
	int zoom)
{
	dest->x = src->x * zoom;
	dest->y = src->y * zoom;
	dest->z = src->z * zoom;
	dest->color = src->color;
}

void					reinit_td_t_td_coord(t_fdf *mlw)
{
	int					i;
	int					j;

	i = 0;
	while (i < mlw->len.y)
	{
		j = 0;
		while (j < mlw->len.x)
		{
			copy_t_td_coord(&mlw->td[i][j], &mlw->corp[i][j], mlw->move.zoom);
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_mlw_corp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 17:01:33 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/28 17:01:36 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					reinit_t_td_coord_corp(t_fdf *mlw, t_coord *point)
{
	int					i;
	int					j;

	i = 0;
	while (i < mlw->len.y)
	{
		j = 0;
		while (j < mlw->len.x)
		{
			mlw->corp[i][j].x -= point->x;
			mlw->corp[i][j].y -= point->y;
			j++;
		}
		i++;
	}
}

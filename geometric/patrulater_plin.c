/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patrulater_plin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:48:01 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/04 10:51:56 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					constr_patrul(t_fdf *mlw, t_patr *patrul)
{
	t_coord				color;
	char				f[2];

	color.x = patrul->color;
	color.y = 0;
	line(&patrul->unu, &patrul->patru, &color, mlw);
	while (1)
	{
		if ((f[0] = coord_patrulater(&patrul->unu, &patrul->doi, patrul->prime))
				== 2)
			return ;
		if ((f[1] = coord_patrulater(&patrul->patru, &patrul->trei,
			patrul->sec)) == 2)
			return ;
		color.x += patrul->scara;
		line(&patrul->unu, &patrul->patru, &color, mlw);
		if (f[0] || f[1])
			return ;
	}
}

void					umplere_vertical_orizontal(t_fdf *mlw, t_coord *coord,
	char f)
{
	if (mlw->td[coord->y + 1 - f][coord->x + f].z !=
		mlw->td[coord->x][coord->y].z)
	{
		if (mlw->td[coord->y + 1 - f][coord->x + f].x !=
			mlw->td[coord->y + 1][coord->x + 1].x)
		{
			if (f == 1)
			{
				initializare_patrulater_vertical(&mlw->td[coord->y],
					&mlw->patrul, coord->x, mlw->scara);
			}
			else
				initializare_patrulater_orizontal(&mlw->td[coord->y],
					&mlw->patrul, coord->x, mlw->scara);
			constr_patrul(mlw, &mlw->patrul);
		}
	}
}

void					umplere_patru(t_fdf *mlw, t_coord *coord)
{
	initializare_patrulater_nou(&mlw->td[coord->y], &mlw->patrul, &mlw->move,
		coord->x);
	constr_patrul(mlw, &mlw->patrul);
}

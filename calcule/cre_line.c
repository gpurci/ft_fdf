/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cre_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 00:50:06 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 00:50:08 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					line_line(t_fdf *mlw, t_coord *coord, char y, char x)
{
	t_patr				*patrul;
	t_coord				color;

	patrul = &mlw->patrul;
	initializare_patrulater_nou(&mlw->td[coord->y], patrul, &mlw->move,
		coord->x);
	color.x = patrul->color;
	color.y = 0;
	line(&patrul->unu, &patrul->patru, &color, mlw);
	line(&patrul->patru, &patrul->trei, &color, mlw);
	if (y == 0)
		line(&patrul->doi, &patrul->trei, &color, mlw);
	if (x == 0)
		line(&patrul->unu, &patrul->doi, &color, mlw);
}

void					cre_line_point(t_fdf *mlw, t_coord *init,
	t_coord *final)
{
	int					i;

	i = init->x;
	while (init->y < final->y)
	{
		init->x = i;
		while (init->x < final->x)
		{
			line_line(mlw, init, 0, 0);
			init->x++;
		}
		init->y++;
	}
}

void					cre_line(t_fdf *mlw)
{
	t_coord				len;

	len.x = 0;
	len.y = 0;
	while (len.y < mlw->len.y - 1)
	{
		len.x = 0;
		while (len.x < mlw->len.x - 1)
		{
			line_line(mlw, &len, len.y, len.x);
			len.x++;
		}
		len.y++;
	}
}

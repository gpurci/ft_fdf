/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_matrix_aria.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 16:32:47 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/08 16:32:50 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void			adaptare_coordonate_matrice(t_move *move, t_coord *aria)
{
	aria->x -= move->mv.x;
	aria->y -= move->mv.y;
}

char			point_matrix_aria(t_fdf *mlw, t_coord *aria)
{
	adaptare_coordonate_matrice(&mlw->move, aria);
	calcul_point_minus_angle(aria, &mlw->angle, 0.0);
	aria->x /= mlw->move.zoom;
	aria->y /= mlw->move.zoom;
	if (click_aria_matrice_td(mlw, aria))
		return (1);
	return (0);
}

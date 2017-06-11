/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 21:02:37 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 21:02:38 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					zoom_scale(t_fdf *mlw, t_coord *coord)
{
	mlw->move.zoom += coord->y * mlw->move.sc_zoom;
	if (mlw->move.zoom < 1)
		mlw->move.zoom = 1;
	rotire_matrici(mlw, 0.0, 0);
}

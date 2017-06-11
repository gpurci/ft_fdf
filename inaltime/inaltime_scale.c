/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inaltime_scale.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 21:04:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 21:04:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					inaltime_scale(t_fdf *mlw, t_coord *coord)
{
	if ((mlw->move.flag & 1))
		mlw->corp[mlw->move.scale.y][mlw->move.scale.x].z +=
	coord->y * mlw->move.sc_z;
	rotire_matrici(mlw, 0.0, 0);
}

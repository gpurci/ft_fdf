/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 21:57:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 21:57:29 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					move_scale(t_fdf *mlw, t_coord *coord)
{
	coord->y = -coord->y;
	if (coord->x == 0)
		mlw->move.mv.x += coord->y * mlw->move.sc_move;
	else
		mlw->move.mv.y += coord->y * mlw->move.sc_move;
}

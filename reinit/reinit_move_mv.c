/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_move_mv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 16:28:45 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/08 16:28:49 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					reinit_move_mv(t_fdf *mlw, t_coord *aria,
	t_coord *scale)
{
	aria->x = mlw->td[scale->y][scale->x].x + mlw->move.mv.x;
	aria->y = mlw->td[scale->y][scale->x].y + mlw->move.mv.y;
}

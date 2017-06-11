/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:21:35 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 19:21:38 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					move_fdf(t_fdf *mlw, char move)
{
	if (move == 1)
		mlw->move.mv.y -= mlw->move.sc_move;
	else if (move == 2)
		mlw->move.mv.x += mlw->move.sc_move;
	else if (move == 3)
		mlw->move.mv.y += mlw->move.sc_move;
	else
		mlw->move.mv.x -= mlw->move.sc_move;
	reinit_frame(mlw);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_scale.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 21:01:02 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 21:01:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					color_scale(t_fdf *mlw, t_coord *coord)
{
	if ((mlw->move.flag & 1))
	{
		mlw->td[mlw->move.scale.y][mlw->move.scale.x].color +=
		coord->y * mlw->move.sc_color;
		mlw->corp[mlw->move.scale.y][mlw->move.scale.x].color +=
		coord->y * mlw->move.sc_color;
	}
}

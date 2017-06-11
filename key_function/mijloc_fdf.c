/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mijloc_fdf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:22:16 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 19:22:18 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					mijloc_fdf(t_fdf *mlw)
{
	mlw->move.mv.x = mlw->frame.x / 2;
	mlw->move.mv.y = mlw->frame.y / 2;
	reinit_frame(mlw);
}

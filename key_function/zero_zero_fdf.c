/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_zero_fdf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:21:57 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 19:21:59 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					zero_zero_fdf(t_fdf *mlw)
{
	mlw->move.mv.x = 0;
	mlw->move.mv.y = 0;
	reinit_frame(mlw);
}

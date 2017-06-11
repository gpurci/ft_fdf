/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reprezentare_fdf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:19:50 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 19:19:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					reprezentare_fdf(t_fdf *mlw, char f)
{
	double				unghi;

	unghi = mlw->move.sc_angle;
	if (f > 2)
	{
		f -= 3;
		unghi = -unghi;
	}
	rotire_matrici(mlw, unghi, f);
	reinit_frame(mlw);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_verificare_point_matrix_aria.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 04:51:45 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 04:51:48 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char					calcul_verificare_point_matrix_aria(t_fdf *mlw)
{
	if (point_matrix_aria(mlw, &mlw->move.scale))
	{
		mlw->move.flag |= 1;
		return (1);
	}
	else if (mlw->move.flag != 0)
	{
		mlw->move.flag &= 0xFE;
		reinit_frame(mlw);
	}
	return (0);
}

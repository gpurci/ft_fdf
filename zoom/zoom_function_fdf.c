/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_function_fdf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 23:12:49 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 23:12:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					zoom_function_fdf(t_fdf *mlw)
{
	int					i;

	if (!ft_strlen(&mlw->string.c[(i = ft_strlen(mlw->string.c) + 1)]))
		mlw->move.flag = (mlw->move.flag & 1) | 6;
	else if (standart_number(&mlw->string.c[i], ""))
	{
		if (ft_atoi_limit(&mlw->string.c[i], &mlw->move.zoom) < 1)
			mlw->move.zoom = 1;
		rotire_matrici(mlw, 0.0, 0);
		reinit_frame(mlw);
	}
}

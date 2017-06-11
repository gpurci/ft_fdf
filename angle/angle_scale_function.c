/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle_scale_function.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:28:18 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:28:20 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					angle_scale_function(t_fdf *mlw)
{
	int					angle;

	angle = ft_atoi_limit(&mlw->string.c[ft_memlen(mlw->string.c, ' ') + 1],
		(int*)&mlw->move.sc_angle);
	if (angle > 359)
		angle %= 360;
	mlw->move.sc_angle = angle;
}

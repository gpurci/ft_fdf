/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_scale_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 12:34:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 12:34:46 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					zoom_scale_function(t_fdf *mlw)
{
	if (ft_atoi_limit(&mlw->string.c[ft_memlen(mlw->string.c, ' ') + 1],
		&mlw->move.sc_zoom) < 1)
		mlw->move.zoom = 1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inaltime_scale_function.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:24:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:24:47 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					inaltime_scale_function(t_fdf *mlw)
{
	ft_atoi_limit(&mlw->string.c[ft_memlen(mlw->string.c, ' ') + 1],
		&mlw->move.sc_z);
}

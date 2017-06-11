/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_scale_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:26:15 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:26:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					move_scale_function(t_fdf *mlw)
{
	ft_atoi_limit(&mlw->string.c[ft_memlen(mlw->string.c, ' ') + 1],
		&mlw->move.sc_move);
}

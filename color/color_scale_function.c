/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_scale_function.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:22:50 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:22:52 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					color_scale_function(t_fdf *mlw)
{
	ft_atoi_limit(&mlw->string.c[ft_memlen(mlw->string.c, ' ') + 1],
		&mlw->move.sc_color);
}

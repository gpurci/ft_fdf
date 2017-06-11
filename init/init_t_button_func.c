/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_button_func.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:37:08 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 18:37:11 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					init_t_button_func(t_button_func *scale)
{
	scale[0].f = &move_scale;
	scale[1].f = &inaltime_scale;
	scale[2].f = &color_scale;
	scale[3].f = &zoom_scale;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_function_scale_function_fdf.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:57:13 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:57:15 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					init_function_scale_function_fdf(t_comand_func *scale)
{
	scale[0].f = &zoom_scale_function;
	scale[1].f = &color_scale_function;
	scale[2].f = &inaltime_scale_function;
	scale[3].f = &move_scale_function;
	scale[4].f = &angle_scale_function;
}

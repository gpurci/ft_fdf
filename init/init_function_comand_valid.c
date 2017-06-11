/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_function_comand_valid.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 22:46:35 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/15 22:46:38 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						init_function_comand_valid(t_comand_func *scale)
{
	scale[0].f = &open_function_fdf;
	scale[1].f = &init_function_fdf;
	scale[2].f = &angle_function_fdf;
	scale[3].f = &scale_function_fdf;
	scale[4].f = &zoom_function_fdf;
	scale[5].f = &move_function_fdf;
	scale[6].f = &color_function_fdf;
	scale[7].f = &inaltime_function_fdf;
}

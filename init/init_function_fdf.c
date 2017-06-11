/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_function_fdf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 20:20:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 20:20:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						init_function_fdf(t_fdf *mlw)
{
	init_t_fdf_variable(mlw);
	move_frame_rotire_reinit(mlw);
}

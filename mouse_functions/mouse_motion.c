/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_motion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 12:07:30 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/05 15:40:32 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int						mouse_motion(int x, int y, void *q)
{
	t_fdf				*mlw;

	mlw = (t_fdf*)q;
	if (mlw->corp && mlw->flag != 2)
	{
		conv_int_t_coord(&mlw->move.scale, x, y);
		if (calcul_verificare_point_matrix_aria(mlw))
			reinit_frame(mlw);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_frame.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:55:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/10 19:55:06 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				new_frame(t_fdf *mlw, t_coord *init,
	t_coord *final, int color)
{
	t_coord			coord;
	int				y;

	y = init->y;
	while (y < final->y)
	{
		coord.x = init->x;
		coord.y = final->x;
		umplere(mlw, &coord, y, color);
		y++;
	}
}

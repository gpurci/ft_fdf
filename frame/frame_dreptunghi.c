/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_dreptunghi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:56:55 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 09:40:45 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					frame_dreptunghi(t_fdf *mlw)
{
	t_coord				init;
	t_coord				final;

	init.x = 0;
	init.y = mlw->frame.y - 100;
	final.x = mlw->frame.x;
	final.y = mlw->frame.y - 90;
	new_frame(mlw, &init, &final, 0xFFFFFF);
	init.y = mlw->frame.y - 10;
	final.x = mlw->frame.x;
	final.y = mlw->frame.y;
	new_frame(mlw, &init, &final, 0xFFFFFF);
	init.y = mlw->frame.y - 90;
	final.x = 10;
	final.y = mlw->frame.y;
	new_frame(mlw, &init, &final, 0xFFFFFF);
	init.x = mlw->frame.x - 10;
	init.y = mlw->frame.y - 90;
	final.x = mlw->frame.x;
	final.y = mlw->frame.y;
	new_frame(mlw, &init, &final, 0xFFFFFF);
}

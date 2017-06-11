/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_delete_comand.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 22:43:10 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 09:39:53 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					frame_delete_comand(t_fdf *mlw)
{
	t_coord				init;
	t_coord				final;

	init.x = mlw->string.init.x;
	init.y = mlw->string.init.y;
	final.x = mlw->frame.x - 11;
	final.y = mlw->string.init.y + 22;
	new_frame(mlw, &init, &final, 0);
}

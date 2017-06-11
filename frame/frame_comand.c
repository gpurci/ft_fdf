/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_comand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:58:16 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/10 19:58:19 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void			frame_comand(t_fdf *mlw)
{
	frame_dreptunghi(mlw);
	mlw->string.i = 0;
	mlw->flag = 2;
	mlw->string.init.x = 100;
	mlw->string.init.y = mlw->frame.y - 80;
	frame_delete_comand(mlw);
	string_put(mlw, 0);
}

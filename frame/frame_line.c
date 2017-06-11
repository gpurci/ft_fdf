/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:33:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/13 14:33:27 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void			frame_line(t_fdf *mlw)
{
	t_coord		init;
	t_coord		final;
	int			i;

	init.x = mlw->string.init.x;
	init.y = mlw->string.init.y;
	final.x = mlw->string.i * 10 + mlw->string.init.x + 24;
	final.y = mlw->string.init.y + 22;
	i = ft_strlen(mlw->string.c);
	mlw->string.c[i] = '|';
	mlw->string.c[i + 1] = 0;
	new_frame(mlw, &init, &final, 0);
}

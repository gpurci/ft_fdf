/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_program_fdf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 01:24:25 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 01:24:26 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					help_program_fdf(t_fdf *mlw)
{
	int					fd;
	int					y;
	char				*line;

	y = 10;
	fd = open("help/help_fdf.txt", O_RDONLY);
	mlw->flag = 2;
	mlx_clear_window(mlw->mlx, mlw->win);
	while (get_next_line(fd, &line) == 1)
	{
		mlx_string_put(mlw->mlx, mlw->win, 10, y, 0xFFFFFF, line);
		y += 16;
		ft_strclr(line);
		free(line);
	}
	close(fd);
}

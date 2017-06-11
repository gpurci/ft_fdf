/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializare_coordonate_td.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 13:40:59 by sdemciuc          #+#    #+#             */
/*   Updated: 2017/03/03 21:00:43 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					ft_fill_td(t_td_coord **td, char *line, t_coord *coord,
	int max)
{
	td[coord->y][coord->x].x = coord->x;
	td[coord->y][coord->x].y = coord->y;
	td[coord->y][coord->x].z = ft_atoi(line);
	if (td[coord->y][coord->x].z == 0)
		td[coord->y][coord->x].color = VERDE;
	else if (td[coord->y][coord->x].z > 0)
		td[coord->y][coord->x].color = (td[coord->y][coord->x].z *
			ft_scara_color(max, ALB, VERDE) + VERDE);
	else if (td[coord->y][coord->x].z < 0)
		td[coord->y][coord->x].color = (VERDE - (td[coord->y][coord->x].z *
			ft_scara_color(max, VERDE, ALBASTRU)));
}

void					adauga_t_td_coord(t_td_coord **des, t_td_coord **src,
	int x, int y)
{
	int					i;

	i = 0;
	while (i < x)
	{
		copy_t_td_coord(&des[0][i], &src[0][i], 1);
		des[0][i].y = y;
		i++;
	}
}

void					ft_initializare_coordonate_td_line(t_td_coord **td,
	char *line, t_coord *coord, int max)
{
	coord->x = 0;
	while (*line)
	{
		while (*line == ' ')
			line++;
		ft_fill_td(td, line, coord, max);
		line += (ft_size(td[coord->y][coord->x].z));
		if (*line == ',')
			line += ft_hex_converse(line, &td[coord->y][coord->x].color);
		coord->x++;
	}
}

t_td_coord				**ft_initializare_coordonate_td(t_td_coord **td,
	char *nume, int linii, int max)
{
	char				*line;
	t_coord				coord;
	int					fd;

	coord.y = -1;
	fd = open(nume, O_RDONLY);
	while (++coord.y < linii - 1)
	{
		get_next_line(fd, &line);
		coord.x = 0;
		ft_initializare_coordonate_td_line(td, line, &coord, max);
		copy_t_td_coord(&td[coord.y][coord.x], &td[coord.y][coord.x - 1], 1);
		td[coord.y][coord.x].x = coord.x;
	}
	close(fd);
	adauga_t_td_coord(&td[coord.y], &td[coord.y - 1], coord.x + 1, coord.y);
	return (td);
}

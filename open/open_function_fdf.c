/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_function_fdf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 23:21:02 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/12 23:21:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					yes_fdf(t_fdf *mlw, t_coord *coord)
{
	if (mlw->td)
	{
		delete_memory_td(mlw->td, &mlw->len);
		delete_memory_td(mlw->corp, &mlw->len);
		frame_dreptunghi(mlw);
		init_t_fdf_variable(mlw);
	}
	mlw->len.x = coord->x;
	mlw->len.y = coord->y;
}

char					aloc_memori_t_td_coord_for_open(t_fdf *mlw)
{
	if (!(mlw->td = ft_memory_aloc_td(&mlw->len)))
		return (0);
	if (!(mlw->corp = ft_memory_aloc_td(&mlw->len)))
	{
		delete_memory_td(mlw->td, &mlw->len);
		return (0);
	}
	return (1);
}

void					open_function_fdf_prev(t_fdf *mlw, char **nume)
{
	reinit_td_t_td_coord(mlw);
	reinit_frame(mlw);
	ft_strclr(*nume);
	ft_strdel(nume);
	mlw->flag = 0;
}

void					open_function_fdf(t_fdf *mlw)
{
	int					max_el;
	t_coord				coord;
	char				*nume;
	char				c[10];

	nume = ft_strjoin(mlw->string.dir,
		&mlw->string.c[ft_strlen(mlw->string.c) + 1]);
	ft_strcpy(c, "No fisier");
	mlw->flag = 1;
	if (!ft_count_lines_columns(nume, &coord.y, &coord.x, &max_el))
	{
		mlw->flag = 0;
		frame_delete_comand(mlw);
		mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x,
			mlw->string.init.y, 0xFFFFFF, c);
		return ;
	}
	yes_fdf(mlw, &coord);
	if (!aloc_memori_t_td_coord_for_open(mlw))
		return ;
	mlw->corp = ft_initializare_coordonate_td(mlw->corp, nume,
		mlw->len.y, max_el);
	open_function_fdf_prev(mlw, &nume);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comand_verificare_fdf.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 20:03:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 20:04:00 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char					comand_verificare_fdf(t_fdf *mlw)
{
	int					i;
	char				comand[9][10];

	init_comand_verificare_fdf(comand);
	i = 0;
	while ((mlw->string.c[i] != ' ') && i < 10)
		i++;
	mlw->string.c[i] = 0;
	i = 0;
	while (ft_strcmp(mlw->string.c, comand[i]) != 0 && i < 9)
		i++;
	if (i > 8)
	{
		mlx_string_put(mlw->mlx, mlw->win, mlw->string.init.x,
			mlw->string.init.y, 0xFFFFFF, comand[8]);
		return (-1);
	}
	return (i);
}

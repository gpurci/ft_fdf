/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 18:51:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 09:38:29 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void			string_comand(t_fdf *mlw, char key)
{
	key = ascii(mlw, key);
	if (key == 10 || mlw->string.i < 0 || mlw->string.i > 49)
	{
		comand_valid(mlw);
		return ;
	}
	if (key == 8)
		frame_backspace(mlw, &key);
	string_put(mlw, key);
	if (key != 0)
		mlw->string.i++;
}

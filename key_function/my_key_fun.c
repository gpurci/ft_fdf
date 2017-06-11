/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_key_fun.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:49:57 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:49:59 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				key_function_tast_shift(t_fdf *mlw, int keycode)
{
	if (keycode == kVK_ANSI_X)
		reprezentare_fdf(mlw, 3);
	else if (keycode == kVK_ANSI_Y)
		reprezentare_fdf(mlw, 4);
	else if (keycode == kVK_ANSI_Z)
		reprezentare_fdf(mlw, 5);
	else if (keycode == kVK_ANSI_Equal)
		event_zoom_fdf(mlw, '+');
}

void				key_function_tast_no_alfa(t_fdf *mlw, int keycode)
{
	if (keycode == kVK_LeftArrow)
		move_fdf(mlw, 4);
	else if (keycode == kVK_RightArrow)
		move_fdf(mlw, 2);
	else if (keycode == kVK_DownArrow)
		move_fdf(mlw, 3);
	else if (keycode == kVK_UpArrow)
		move_fdf(mlw, 1);
}

void				key_function_tast_yes_alfa(t_fdf *mlw, int keycode)
{
	if (keycode == kVK_ANSI_X)
		reprezentare_fdf(mlw, 0);
	else if (keycode == kVK_ANSI_Y)
		reprezentare_fdf(mlw, 1);
	else if (keycode == kVK_ANSI_Z)
		reprezentare_fdf(mlw, 2);
	else if (keycode == kVK_ANSI_Minus)
		event_zoom_fdf(mlw, '-');
	else if (keycode == kVK_ANSI_I)
		zero_zero_fdf(mlw);
	else if (keycode == kVK_ANSI_M)
		mijloc_fdf(mlw);
}

int					my_key_fun(int keycode, void *param)
{
	t_fdf			*mlw;

	mlw = (t_fdf*)param;
	mlw->move.flag &= 0xFE;
	if (keycode == kVK_Escape)
		exit_fdf(mlw);
	if ((keycode == kVK_Shift || keycode == kVK_CapsLock))
	{
		mlw->shift = 0;
		return (0);
	}
	if (mlw->flag == 2)
		string_comand(mlw, keycode);
	else if (keycode == kVK_ANSI_A)
		help_program_fdf(mlw);
	else if (mlw->corp && mlw->flag != 2)
	{
		if (mlw->shift)
			key_function_tast_shift(mlw, keycode);
		else if (keycode < 0x7A)
			key_function_tast_yes_alfa(mlw, keycode);
		else
			key_function_tast_no_alfa(mlw, keycode);
	}
	return (0);
}

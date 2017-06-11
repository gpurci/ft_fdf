/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   click_aria_matrice_td.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 06:28:39 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 06:28:42 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_coord					*click_aria_matrice_td(t_fdf *mlw, t_coord *aria)
{
	aria->x = (aria->x - mlw->corp[0][0].x);
	aria->y = (aria->y - mlw->corp[0][0].y);
	if (aria->x < mlw->len.x && aria->x > -1 && aria->y < mlw->len.y &&
		aria->y > -1)
		return (aria);
	return (0);
}

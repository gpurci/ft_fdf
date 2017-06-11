/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   patrulater.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 14:18:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/20 19:06:22 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char					reinit_patrulater(t_coord *init, t_coord *final,
	int *v)
{
	v[5] = v[4];
	if ((init->x == final->x) && (init->y == final->y))
		return (1);
	if (v[5] > -v[0])
	{
		v[4] -= v[2];
		init->x += v[1];
	}
	if (v[5] < v[2])
	{
		v[4] += v[0];
		init->y += v[3];
	}
	return (0);
}

char					coord_patrulater(t_coord *init, t_coord *final,
	int *par)
{
	if (reinit_patrulater(init, final, par))
		return (2);
	return (0);
}

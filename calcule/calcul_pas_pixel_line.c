/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_pas_pixel_line.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:40:01 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 17:40:03 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int						*calcul_pas_pixel_line(t_coord *init, t_coord *final,
	int *v)
{
	v[0] = abs(final->x - init->x);
	v[1] = final->x > init->x ? 1 : -1;
	v[2] = abs(final->y - init->y);
	v[3] = final->y > init->y ? 1 : -1;
	v[4] = (v[0] > v[2] ? v[0] : -v[2]) / 2;
	return (v);
}

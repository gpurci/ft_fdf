/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radiani.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:39:35 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/03 12:39:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

double						radian_transform(double unghi)
{
	return ((PI * unghi) / 180);
}

void						radian_angle(t_unghi *angle, t_unghi *mlw_angle)
{
	angle->alfa = (PI * (mlw_angle->alfa)) / 180;
	angle->beta = (PI * (mlw_angle->beta)) / 180;
	angle->gamma = (PI * (mlw_angle->gamma)) / 180;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici_arie.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:48:11 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/07 21:24:07 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						alfa_calcul_arie(t_unghi *aria, double alfa)
{
	aria->beta = (aria->beta) / cos(alfa);
	aria->beta = (int)aria->beta;
}

void						beta_calcul_arie(t_unghi *aria, double beta)
{
	aria->alfa = (aria->alfa - aria->beta * tan(aria->gamma) * sin(beta))
	/ cos(beta);
	aria->alfa = (int)aria->alfa;
}

void						gamma_calcul_arie(t_unghi *aria, double gamma)
{
	double					alfa;

	alfa = aria->alfa;
	aria->alfa = alfa * cos(gamma) - aria->beta * sin(gamma);
	aria->beta = alfa * sin(gamma) + aria->beta * cos(gamma);
}

void						calcul_point_minus_angle(t_coord *aria,
	t_unghi *angle, double arc)
{
	t_unghi					coord;

	coord.alfa = aria->x;
	coord.beta = aria->y;
	coord.gamma = radian_transform(arc - angle->alfa);
	gamma_calcul_arie(&coord, radian_transform(arc - angle->gamma));
	beta_calcul_arie(&coord, radian_transform(arc - angle->beta));
	alfa_calcul_arie(&coord, radian_transform(arc - angle->alfa));
	aria->x = (int)(coord.alfa);
	aria->y = (int)(coord.beta);
}

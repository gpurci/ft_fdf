/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:51:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/20 20:38:41 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						alfa_calcul(t_td_coord *td, double alfa)
{
	int						y;

	y = td->y;
	td->y = y * cos(alfa) - td->z * sin(alfa);
	td->z = y * sin(alfa) + td->z * cos(alfa);
}

void						beta_calcul(t_td_coord *td, double beta)
{
	int						x;

	x = td->x;
	td->x = x * cos(beta) + td->z * sin(beta);
	td->z = td->z * cos(beta) - x * sin(beta);
}

void						gamma_calcul(t_td_coord *td, double gamma)
{
	int						x;

	x = td->x;
	td->x = x * cos(gamma) - td->y * sin(gamma);
	td->y = x * sin(gamma) + td->y * cos(gamma);
}

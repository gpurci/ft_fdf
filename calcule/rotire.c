/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotire.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:43:47 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/07 15:44:44 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						unghiuri_matriciale(t_func *func, t_fdf *mlw,
	t_unghi *angle)
{
	int						i;
	int						j;

	i = 0;
	while (i < mlw->len.y)
	{
		j = 0;
		while (j < mlw->len.x)
		{
			copy_t_td_coord(&mlw->td[i][j], &mlw->corp[i][j], mlw->move.zoom);
			func[0].f(&mlw->td[i][j], angle->alfa);
			func[1].f(&mlw->td[i][j], angle->beta);
			func[2].f(&mlw->td[i][j], angle->gamma);
			j++;
		}
		i++;
	}
}

void						increment_unghi(double *angle, double *unghi)
{
	*angle += *unghi;
	if (*angle > 359.0)
		*angle -= 360.0;
	else if (*angle < -359.0)
		*angle += 360.0;
}

void						rotire_matrici(t_fdf *mlw, double unghi, char f)
{
	t_func				func[3];
	t_unghi				angle;

	func[0].f = &alfa_calcul;
	func[1].f = &beta_calcul;
	func[2].f = &gamma_calcul;
	if (f == 0)
		increment_unghi(&mlw->angle.alfa, &unghi);
	else if (f == 1)
		increment_unghi(&mlw->angle.beta, &unghi);
	else
		increment_unghi(&mlw->angle.gamma, &unghi);
	radian_angle(&angle, &mlw->angle);
	unghiuri_matriciale(func, mlw, &angle);
}

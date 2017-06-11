/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_prime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 13:51:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/03 20:54:24 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					swap_mas_int(int *src, int *dest, unsigned char len)
{
	char				i;

	i = 0;
	while (i < len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
}

int						initializare_td_nou(int td, int mv)
{
	return ((td + mv));
}

void					initializare_patrulater_nou(t_td_coord **td,
	t_patr *patrul, t_move *move, int j)
{
	patrul->doi.x = initializare_td_nou(td[0][j].x, move->mv.x);
	patrul->doi.y = initializare_td_nou(td[0][j].y, move->mv.y);
	patrul->trei.x = initializare_td_nou(td[0][j + 1].x, move->mv.x);
	patrul->trei.y = initializare_td_nou(td[0][j + 1].y, move->mv.y);
	patrul->unu.x = initializare_td_nou(td[1][j].x, move->mv.x);
	patrul->unu.y = initializare_td_nou(td[1][j].y, move->mv.y);
	patrul->patru.x = initializare_td_nou(td[1][j + 1].x, move->mv.x);
	patrul->patru.y = initializare_td_nou(td[1][j + 1].y, move->mv.y);
	patrul->color = td[0][j].color;
	patrul->scara = 0;
	calcul_pas_pixel_line(&patrul->patru, &patrul->trei, patrul->sec);
	calcul_pas_pixel_line(&patrul->unu, &patrul->doi, patrul->prime);
}

void					initializare_patrulater_orizontal(t_td_coord **td,
	t_patr *patrul, int j, int scara)
{
	patrul->doi.x = td[1][j].x + td[0][j].z;
	patrul->doi.y = td[1][j].y + td[0][j].z;
	patrul->trei.x = td[1][j + 1].x + td[0][j].z;
	patrul->trei.y = td[1][j + 1].y + td[0][j].z;
	patrul->unu.x = td[1][j].x;
	patrul->unu.y = td[1][j].y;
	patrul->patru.x = td[1][j + 1].x;
	patrul->patru.y = td[1][j + 1].y;
	patrul->color = td[0][j].color;
	if (td[0][j].z > td[1][j].z)
		scara = -scara;
	patrul->scara = scara;
	calcul_pas_pixel_line(&patrul->patru, &patrul->trei, patrul->sec);
	calcul_pas_pixel_line(&patrul->unu, &patrul->doi, patrul->prime);
}

void					initializare_patrulater_vertical(t_td_coord **td,
	t_patr *patrul, int j, int scara)
{
	patrul->doi.x = td[0][j].x;
	patrul->doi.y = td[0][j].y;
	patrul->trei.x = td[0][j + 1].x;
	patrul->trei.y = td[0][j + 1].y;
	patrul->unu.x = td[1][j].x;
	patrul->unu.y = td[1][j].y;
	patrul->patru.x = td[1][j + 1].x;
	patrul->patru.y = td[1][j + 1].y;
	patrul->color = td[0][j].color;
	patrul->scara = scara;
	calcul_pas_pixel_line(&patrul->patru, &patrul->trei, patrul->sec);
	calcul_pas_pixel_line(&patrul->unu, &patrul->doi, patrul->prime);
}

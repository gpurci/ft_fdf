/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standart_dublu_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:37:12 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/13 20:37:13 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char					standart_dublu_nbr(char *c, t_coord *coord)
{
	int					i;
	t_coord				nbr;

	i = 1;
	ft_memset(&nbr.x, -1, 2 * sizeof(int));
	if (c[0] != '(')
		return (0);
	ft_atoi_limit(&c[i], &nbr.x);
	if (nbr.x < 0)
		return (0);
	while (ft_isdigit(c[i]))
		i++;
	if (c[i] != ',')
		return (0);
	i++;
	ft_atoi_limit(&c[i], &nbr.y);
	if (nbr.y < 0)
		return (0);
	ft_memcpy(&coord->x, &nbr.x, 2 * sizeof(int));
	while (ft_isdigit(c[i]))
		i++;
	if (c[i] != ')' || c[i + 1] != 0)
		return (0);
	return (1);
}

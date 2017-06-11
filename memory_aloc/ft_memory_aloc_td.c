/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_aloc_td.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 13:00:50 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/21 13:01:16 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

t_td_coord			**ft_memory_aloc_td(t_coord *len)
{
	t_td_coord		**td;
	t_coord			intern;
	int				i;

	i = 0;
	if (!(td = (t_td_coord**)malloc(sizeof(t_td_coord*) * len->y)))
		return (0);
	intern.x = len->x;
	while (i < len->y)
	{
		if (!(td[i] = (t_td_coord*)malloc(sizeof(t_td_coord) * len->x)))
		{
			intern.y = i;
			delete_memory_td(td, &intern);
			return (0);
		}
		i++;
	}
	return (td);
}

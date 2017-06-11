/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_memory_td.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 13:20:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/21 13:22:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				delete_parametre_td(t_td_coord *td)
{
	td->x = 0;
	td->y = 0;
	td->z = 0;
	td->color = 0;
}

void				delete_columns_td(t_td_coord **td, int col)
{
	int				i;

	i = 0;
	while (i < col)
	{
		delete_parametre_td(&td[0][i]);
		i++;
	}
}

void				delete_memory_td(t_td_coord **td, t_coord *len)
{
	int				i;

	i = 0;
	while (i < len->y)
	{
		delete_columns_td(&td[i], len->x);
		free(td[i]);
		td[i] = 0;
		i++;
	}
	free(*td);
	td = 0;
}

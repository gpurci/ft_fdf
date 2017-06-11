/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:21:06 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 19:21:10 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					exit_fdf(t_fdf *mlw)
{
	if (mlw->corp)
	{
		delete_memory_td(mlw->td, &mlw->len);
		delete_memory_td(mlw->corp, &mlw->len);
	}
	exit(0);
}

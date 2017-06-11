/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distanta_doua_puncte.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 16:30:23 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/08 16:30:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int				distanta_doua_puncte(int xo, int yo, int xu, int yu)
{
	return ((int)((double)(pow(pow(abs(xu - xo), 2) +
		pow(abs(yu - yo), 2), 0.5)) + 0.5));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_comand_scale_function_fdf.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:57:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 16:57:53 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						init_comand_scale_function_fdf(char comand[6][10])
{
	ft_strcpy(comand[0], "zoom ");
	ft_strcpy(comand[1], "color ");
	ft_strcpy(comand[2], "inaltime ");
	ft_strcpy(comand[3], "move ");
	ft_strcpy(comand[4], "angle ");
	ft_strcpy(comand[5], "No comand");
}

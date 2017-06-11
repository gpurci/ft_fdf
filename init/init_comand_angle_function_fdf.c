/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_comand_angle_function_fdf.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:00:49 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 17:00:50 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						init_comand_angle_function_fdf(char comand[4][10])
{
	ft_strcpy(comand[0], "alfa ");
	ft_strcpy(comand[1], "beta ");
	ft_strcpy(comand[2], "gamma ");
	ft_strcpy(comand[3], "No comand");
}

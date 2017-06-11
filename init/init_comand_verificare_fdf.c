/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_comand_verificare_fdf.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:21:45 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/14 17:21:46 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void						init_comand_verificare_fdf(char comand[9][10])
{
	ft_strcpy(comand[0], "open");
	ft_strcpy(comand[1], "init");
	ft_strcpy(comand[2], "angle");
	ft_strcpy(comand[3], "scale");
	ft_strcpy(comand[4], "zoom");
	ft_strcpy(comand[5], "move");
	ft_strcpy(comand[6], "color");
	ft_strcpy(comand[7], "inaltime");
	ft_strcpy(comand[8], "No comand");
}

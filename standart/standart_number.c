/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standart_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:33:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/13 20:33:09 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char					standart_number(char *c, char *comand)
{
	int					i;

	if (ft_strncmp(c, comand, (i = ft_strlen(comand))) == 0)
	{
		while (ft_isdigit(c[i]))
			i++;
		if (c[i] != 0)
			return (0);
		return (1);
	}
	return (0);
}

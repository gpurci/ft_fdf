/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 18:07:47 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/18 16:54:50 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int							conv_hex_int(char *c, char len)
{
	char					nbr[8];
	char					i;
	char					j;

	i = len - 1;
	j = 0;
	while (i > -1)
	{
		if (*(c + i) > 57)
			*(nbr + j) = *(c + i) - 55;
		else
			*(nbr + j) = *(c + i) - 48;
		i--;
		j++;
	}
	ft_bzero(nbr, 8);
	while (++i < 4)
		*(nbr + i) = *(nbr + (i << 1)) | (*(nbr + (i << 1) + 1) << 4);
	return (*(int*)nbr);
}

int							ft_hex_converse(char *c, int *color)
{
	char					i;

	i = 0;
	c += 3;
	while (*(c + i) != ' ' && *(c + i))
		i++;
	if (color)
		*color = conv_hex_int(c, i);
	return (3 + i);
}

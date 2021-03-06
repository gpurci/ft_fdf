/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 00:47:47 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 00:47:50 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

int	ft_size(long long int n)
{
	long int s;

	s = 0;
	if (n < 0)
	{
		s++;
		n = -n;
	}
	while (n >= 10)
	{
		s++;
		n = n / 10;
	}
	s++;
	return (s);
}

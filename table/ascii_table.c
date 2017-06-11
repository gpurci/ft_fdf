/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 18:52:57 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/07 16:10:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

char				ascii(t_fdf *mlw, int c)
{
	char			as[60];

	if (c == kVK_Backspace)
		return (8);
	if (c == kVK_ANSI_KeypadEnter)
		return (10);
	if (mlw->shift == kVK_Shift || mlw->shift == kVK_CapsLock)
	{
		ft_strcpy(as, "ASDFHGZXCV.BQWERYT!@#$^%+(&_*){OU}IP.LJ.K.|<?NM.. ");
		return (*(as + c));
	}
	ft_strcpy(as, "asdfhgzxcv.bqweryt123465=97-80[ou]ip.lj.k..,/nm.. ");
	return (*(as + c));
}

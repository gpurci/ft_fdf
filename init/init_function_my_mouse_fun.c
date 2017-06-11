/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_function_my_mouse_fun.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:24:16 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/16 18:24:19 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void					init_function_my_mouse_fun(t_button_func *scale)
{
	scale[0].f = &button_unu;
	scale[1].f = &button_doi;
	scale[2].f = &button_trei;
	scale[3].f = &button_patru;
	scale[4].f = &button_cinci;
	scale[5].f = &button_sase;
	scale[6].f = &button_sapte;
}

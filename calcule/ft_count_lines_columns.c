/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_lines_columns.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemciuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 13:03:18 by sdemciuc          #+#    #+#             */
/*   Updated: 2017/02/16 13:08:33 by sdemciuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void				ft_count_columns(char *line, int *coloane, int *max_el)
{
	*coloane = 0;
	while (*line)
	{
		if (*line == ' ')
			line++;
		else if (*line == ',')
			line += ft_hex_converse(line, 0);
		else
		{
			if (*max_el < abs(ft_atoi(line)))
				*max_el = abs(ft_atoi(line));
			line += (ft_size(ft_atoi(line)));
			(*coloane)++;
		}
	}
}

char				ft_count_lines_columns(char *name, int *linii,
	int *coloane, int *max_el)
{
	char			*line;
	int				fd;

	*linii = 0;
	*max_el = 0;
	*coloane = 0;
	if ((fd = open(name, O_RDONLY)) == -1)
		return (0);
	while ((get_next_line(fd, &line)) == 1)
	{
		ft_count_columns(line, coloane, max_el);
		printf("\n");
		(*linii)++;
	}
	(*linii)++;
	(*coloane)++;
	close(fd);
	return (1);
}

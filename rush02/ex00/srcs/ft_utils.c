/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelievr <llelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:27:31 by llelievr          #+#    #+#             */
/*   Updated: 2018/07/22 15:30:56 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int		ft_linelen(char *str)
{
	int count;

	count = 0;
	while (str[count] && str[count] != '\n')
		count++;
	return (count);
}

void	get_size(char *str, t_size *size)
{
	int		i;

	size->height = 1;
	size->width = ft_linelen(str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i + 1])
		{
			size->height++;
			i++;
			if (size->width != ft_linelen(&str[i]))
				size->width = -1;
		}
		else
			i++;
	}
}

char	get_cell(int x, int y, t_size *size, char *str)
{
	return (str[(size->width + 1) * y + x]);
}

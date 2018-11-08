/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 19:32:07 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 16:14:58 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	check_first_line(char *str)
{
	char	*cpy;
	int		i;

	i = -1;
	if (!(cpy = (char*)malloc(sizeof(*cpy) * (ft_linelen(str) + 1))))
		return (0);
	ft_strncpy(cpy, str, ft_linelen(str) - 3);
	while (cpy[++i] != '\0')
		if (cpy[i] > '9' || cpy[i] < '0' || ft_atoi(cpy) <= 0)
		{
			free(cpy);
			return (0);
		}
	free(cpy);
	str += ft_linelen(str) - 3;
	if ((ft_linelen(str) != 3) || (!(*(str) != *(str + 1) && *(str + 1)
		!= *(str + 2) && *(str + 2) != *(str))))
		return (0);
	while (*str != '\n')
	{
		if (*str > '~' || *str < ' ')
			return (0);
		str++;
	}
	return (1);
}

int	check_grid(char *str, t_board *board)
{
	int	len;
	int	height;

	str += ft_linelen(str) + 1;
	len = ft_linelen(str);
	if (len == 0)
		return (0);
	height = 1;
	str += len + 1;
	while (*str)
	{
		height++;
		if (ft_linelen(str) != len)
			return (0);
		while (*str != '\n')
		{
			if (!(*str == board->empty || *str == board->obstacle))
				return (0);
			str++;
		}
		str++;
	}
	if (height != board->height)
		return (0);
	return (1);
}

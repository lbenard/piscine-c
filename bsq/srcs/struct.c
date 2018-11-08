/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 21:10:42 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/24 21:15:44 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	set_position(t_pos *position, int x, int y)
{
	position->x = x;
	position->y = y;
}

char	*get_char_at(char *str, int width, t_pos *pos)
{
	return (&str[pos->x + (width + 1) * pos->y]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:41:13 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 12:09:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	put_flags(t_pos *pos, char *str, t_board *board, int radius)
{
	int		i;
	t_pos	cursor;
	char	*actchar;

	i = -1;
	while (++i < radius)
	{
		cursor.x = pos->x;
		cursor.y = pos->y - i;
		while (cursor.x >= pos->x - i && cursor.x >= 0 && cursor.y >= 0)
		{
			actchar = get_char_at(str, board->width, &cursor);
			*actchar = (*actchar == board->empty) ? board->flag : *actchar;
			cursor.x--;
		}
		cursor.x++;
		cursor.y = pos->y;
		while (cursor.y > pos->y - i && cursor.y >= 0 && cursor.x >= 0)
		{
			actchar = get_char_at(str, board->width, &cursor);
			*actchar = (*actchar == board->empty) ? board->flag : *actchar;
			cursor.y--;
		}
	}
}

void	scan_flags(char **str, t_square *square, t_board *board, int last_line)
{
	t_pos	position;
	int		radius;
	char	actual_char;

	position.x = 0;
	position.y = last_line;
	radius = square->size;
	while (position.y < board->height)
	{
		while (position.x < board->width)
		{
			actual_char = *get_char_at(*str, board->width, &position);
			if (actual_char == board->obstacle)
				put_flags(&position, *str, board, radius);
			position.x++;
		}
		position.x = 0;
		position.y++;
	}
}

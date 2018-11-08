/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:39:39 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 15:57:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

void	set_board(char *str, t_board *board)
{
	int		i;
	char	flag;
	char	*cpy;

	i = 0;
	if (!(cpy = (char*)malloc(sizeof(*cpy) * (ft_linelen(str) + 1))))
		return ;
	ft_strncpy(cpy, str, ft_linelen(str) - 3);
	str += ft_linelen(str) - 3;
	board->height = ft_atoi(cpy);
	free(cpy);
	board->empty = str[i++];
	board->obstacle = str[i++];
	board->square = str[i++];
	flag = 'A';
	while (flag == board->empty || flag == board->obstacle
			|| flag == board->square)
		flag++;
	board->flag = flag;
	board->width = ft_linelen(&str[++i]);
}

void	iterate_board(char *str, t_square *square, t_board *board)
{
	t_pos		position;
	int			new_size;
	int			flag_last_line;

	set_position(&square->pos, 0, 0);
	square->size = 0;
	set_position(&position, 0, 0);
	flag_last_line = 0;
	while (position.y < board->height - square->size)
	{
		while (position.x < board->width - square->size)
		{
			if (*get_char_at(str, board->width, &position) == board->empty)
				if ((new_size = find_square(str, &position, board))
						> square->size)
				{
					set_position(&square->pos, position.x, position.y);
					square->size = new_size;
					flag_last_line = position.y;
					scan_flags(&str, square, board, flag_last_line);
				}
			position.x++;
		}
		set_position(&position, 0, position.y + 1);
	}
}

int		find_square(char *str, t_pos *pos, t_board *board)
{
	int		i;
	t_pos	cursor;
	int		obs;

	i = 1;
	obs = 0;
	while (i < board->width - pos->x && i < board->height - pos->y && !obs)
	{
		cursor.x = pos->x;
		cursor.y = pos->y + i;
		while (cursor.x <= pos->x + i && !obs)
		{
			obs = *get_char_at(str, board->width, &cursor) == board->obstacle;
			cursor.x++;
		}
		cursor.x--;
		cursor.y = pos->y;
		while (cursor.y < pos->y + i && !obs)
		{
			obs = *get_char_at(str, board->width, &cursor) == board->obstacle;
			cursor.y++;
		}
		i++;
	}
	return (i - obs);
}

void	print_square(char *str, t_square *square, t_board *board)
{
	int		i;
	int		j;
	t_pos	position;

	i = -1;
	while (++i < square->size)
	{
		j = -1;
		while (++j < square->size)
		{
			set_position(&position, square->pos.x + j, square->pos.y + i);
			*get_char_at(str, board->width, &position) = board->square;
		}
	}
	remove_flags(str, board);
	ft_putstr(str);
}

void	remove_flags(char *str, t_board *board)
{
	t_pos	position;
	char	*to_change;

	position.y = -1;
	while (++position.y < board->height)
	{
		position.x = -1;
		while (++position.x < board->width)
		{
			to_change = get_char_at(str, board->width, &position);
			if (*to_change == board->flag)
				*to_change = board->empty;
		}
	}
}

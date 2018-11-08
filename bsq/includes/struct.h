/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:41:35 by mguerrea          #+#    #+#             */
/*   Updated: 2018/07/24 16:00:48 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_board
{
	int		width;
	int		height;
	char	empty;
	char	obstacle;
	char	square;
	char	flag;
}				t_board;

typedef struct	s_pos
{
	int	x;
	int	y;
}				t_pos;

typedef struct	s_square
{
	t_pos	pos;
	int		size;
}				t_square;

#endif

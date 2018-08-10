/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:52:28 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/22 23:02:19 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_check.h"
#include "libft.h"

void			get_chars(char *str, t_colle *colle, t_size *size)
{
	colle->c_t_right = 0;
	colle->c_b_left = 0;
	colle->c_b_right = 0;
	colle->h_side = 0;
	colle->v_side = 0;
	colle->mid = 0;
	colle->c_t_left = get_cell(0, 0, size, str);
	if (size->width > 1)
		colle->c_t_right = get_cell(size->width - 1, 0, size, str);
	if (size->height > 1)
		colle->c_b_left = get_cell(0, size->height - 1, size, str);
	if (size->height > 1 && size->width > 1)
		colle->c_b_right = get_cell(size->width - 1,
			size->height - 1, size, str);
	if (size->width > 2)
		colle->h_side = get_cell(1, 0, size, str);
	if (size->height > 2)
		colle->v_side = get_cell(0, 1, size, str);
	if (size->width > 2 && size->height > 2)
		colle->mid = get_cell(1, 1, size, str);
}

int				is_colle(t_colle *colle, t_colle *pattern, int type)
{
	if ((pattern->c_t_left && colle->c_t_left && colle->c_t_left
		!= pattern->c_t_left) || (!pattern->c_t_left && colle->c_t_left == ' '))
		return (0);
	if ((pattern->c_t_right && colle->c_t_right && colle->c_t_right
		!= pattern->c_t_right)
		|| (!pattern->c_t_right && colle->c_t_right == ' '))
		return (0);
	if ((pattern->c_b_left && colle->c_b_left && colle->c_b_left
		!= pattern->c_b_left) || (!pattern->c_b_left && colle->c_b_left == ' '))
		return (0);
	if ((pattern->c_b_right && colle->c_b_right && colle->c_b_right
		!= pattern->c_b_right)
		|| (!pattern->c_b_right && colle->c_b_right == ' '))
		return (0);
	if (pattern->h_side && colle->h_side && colle->h_side != pattern->h_side)
		return (0);
	if (pattern->v_side && colle->v_side && colle->v_side != pattern->v_side)
		return (0);
	if ((pattern->mid == 0 && colle->mid == ' ' && type == 6)
		|| (pattern->mid && colle->mid && colle->mid != pattern->mid))
		return (0);
	return (1);
}

int				is_h_side(int i, char *str, t_size *size, t_colle *pattern)
{
	return (pattern->h_side && get_cell(i, 0, size, str) == pattern->h_side
		&& get_cell(i, size->height - 1, size, str) == pattern->h_side);
}

int				is_v_side(int i, char *str, t_size *size, t_colle *pattern)
{
	return (pattern->v_side && get_cell(0, i, size, str) == pattern->v_side
		&& get_cell(size->width - 1, i, size, str) == pattern->v_side);
}

int				are_char_correct(char *str, t_size *size, t_colle *pattern)
{
	int	i;
	int	j;

	if (size->width > 2 && !(i = 0))
		while (++i < size->width - 1)
			if (!is_h_side(i, str, size, pattern))
				return (0);
	if (size->height > 2)
	{
		i = 0;
		while (++i < size->height - 1)
		{
			j = 0;
			while (++j < size->width - 1)
				if (pattern->mid && get_cell(j, i, size, str) != pattern->mid)
					return (0);
			if (!is_v_side(i, str, size, pattern))
				return (0);
		}
	}
	return (1);
}

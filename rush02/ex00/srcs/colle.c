/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:36:52 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/22 22:59:28 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_check.h"

t_colle g_colle_types[COLLE_NUMBER] =
{
	{'o', 'o', 'o', 'o', '-', '|', ' '},
	{'/', '\\', '\\', '/', '*', '*', ' '},
	{'A', 'A', 'C', 'C', 'B', 'B', ' '},
	{'A', 'C', 'A', 'C', 'B', 'B', ' '},
	{'A', 'C', 'C', 'A', 'B', 'B', ' '},
	{0, 0, 0, 0, 0, 0, 0},
	{' ', ' ', ' ', ' ', ' ', ' ', 0}
};

t_colle_flags	get_colle_type(char *str, t_size *size)
{
	t_colle			colle;
	t_colle_flags	ret;

	ret = none;
	get_size(str, size);
	if (size->height == -1 || size->width == -1)
		return (none);
	get_chars(str, &colle, size);
	if (!(are_char_correct(str, size, &colle)))
		return (none);
	if (is_colle(&colle, &g_colle_types[0], 0))
		ret |= colle00;
	if (is_colle(&colle, &g_colle_types[1], 1))
		ret |= colle01;
	if (is_colle(&colle, &g_colle_types[2], 2))
		ret |= colle02;
	if (is_colle(&colle, &g_colle_types[3], 3))
		ret |= colle03;
	if (is_colle(&colle, &g_colle_types[4], 4))
		ret |= colle04;
	if (is_colle(&colle, &g_colle_types[5], 5))
		ret |= rect;
	if (is_colle(&colle, &g_colle_types[6], 6))
		ret |= inv_rect;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:15:54 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 20:05:12 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

int		bsq(char *path)
{
	char		*str;
	t_board		board;
	t_square	square;

	str = "";
	if (read_map(&str, get_file_descriptor(path)))
	{
		set_board(str, &board);
		if (!check_grid(str, &board))
			return (0);
		str += ft_linelen(str) + 1;
		iterate_board(str, &square, &board);
		print_square(str, &square, &board);
	}
	else
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int			i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			if (!bsq(argv[i]))
				ft_putstr_fd(2, "map error\n");
			if (argc > 2 && i != argc - 1)
				ft_putchar('\n');
		}
	}
	else if (!bsq(NULL))
		ft_putstr_fd(2, "map error\n");
	return (0);
}

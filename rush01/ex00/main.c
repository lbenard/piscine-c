/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:58:10 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/15 19:59:26 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "sudoku_solver.h"
#include "ft_strutils.h"
#include "check.h"

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int	result;

	init_grid(argc, argv);
	if (!is_input_valid(argc, argv))
		ft_putstr("Error\n");	
	else
	{
		result = solve(0, 0);
		if (result)
		{
			i = -1;
			while (++i < 9)
			{
				j = -1;
				while (++j < 9)
				{
					ft_putchar(g_grid[i][j]);
					if (j != 8)
						ft_putchar(' ');
				}
				ft_putchar('\n');
			}
		}
		else
			ft_putstr("Error\n");
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:47:19 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/15 19:59:46 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "check.h"
#include <stdlib.h>

int		init_grid(int argc, char **argv)
{
	int		i;
	int		j;

	if (!is_input_valid(argc, argv))
		return (0);
	i = -1;
	g_grid = (char**)malloc(sizeof(char**) * 9);
	while (++i < 9)
		g_grid[i] = (char*)malloc(sizeof(char*) * 9);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			g_grid[i][j] = argv[i + 1][j];
	}
	return (1);
}

void	free_grid(void)
{
	int	i;

	i = -1;
	while (++i)
		free(g_grid[i]);
	free(g_grid);
}

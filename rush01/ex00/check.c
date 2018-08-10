/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeskin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:46:02 by ekeskin           #+#    #+#             */
/*   Updated: 2018/07/15 16:37:35 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strutils.h"
#include "grid.h"
#include <stdlib.h>
#include "check.h"

int		is_line_valid(char *str)
{
	if (ft_strlen(str) != 9)
		return (0);
	while (*str)
	{
		if (('1' <= *str && *str <= '9') || *str == '.')
			str++;
		else
			return (0);
	}
	return (1);
}

int		is_input_valid(int argc, char **argv)
{
	int i;
	int	j;
	int	guesses;

	guesses = 0;
	if (argc != 10)
		return (0);
	i = 1;
	while (i < 10)
	{
		j = -1;
		while (++j < 9)
			guesses += ft_isdigit(argv[i][j]);
		if (!(is_line_valid(argv[i])))
			return (0);
		i++;
	}
	if (guesses < 17)
		return (0);
	return (1);
}

char	*possible_digits_at_pos(int x, int y)
{
	char	digits[11];
	char	*retval;

	filter_digits(digits, x, y);
	fill_digits_list(&retval, digits);
	return (retval);
}

void	filter_digits(char *digits, int x, int y)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 10)
		digits[i] = '0' + i;
	i = -1;
	while (++i < 9)
	{
		if (ft_isdigit(g_grid[y][i]))
			digits[g_grid[y][i] - '0'] = 'x';
		if (ft_isdigit(g_grid[i][x]))
			digits[g_grid[i][x] - '0'] = 'x';
	}
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
			if (ft_isdigit(g_grid[(y / 3) * 3 + i][(x / 3) * 3 + j]))
				digits[g_grid[(y / 3) * 3 + i][(x / 3) * 3 + j] - '0'] = 'x';
	}
}

void	fill_digits_list(char **digits, char *remaining_digits)
{
	int	i;
	int	j;
	int	number_of_remaining_digits;

	i = -1;
	number_of_remaining_digits = 0;
	while (++i < 10)
		if (ft_isdigit(remaining_digits[i]) && remaining_digits[i] != '0')
			number_of_remaining_digits++;
	i = -1;
	j = -1;
	*digits = (char*)malloc(sizeof(**digits) *
		(number_of_remaining_digits + 1));
	while (++i < 10)
		if (ft_isdigit(remaining_digits[i]) && remaining_digits[i] != '0')
			(*digits)[++j] = remaining_digits[i];
	(*digits)[number_of_remaining_digits] = '\0';
}

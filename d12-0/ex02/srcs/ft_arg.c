/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:09:22 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/19 14:35:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arg.h"
#include "ft_str.h"
#include "ft_rw.h"
#include "ft_math.h"
#include <stdlib.h>

void	print_arg_error(void)
{
	ft_arg_error("option requires an argument", "c");
	ft_putstr_fd("usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] ", 2);
	ft_putstr_fd("[file ...]\n", 2);
}

int		parse_bytes_loc(char **argv, int *last_parsed, int *error)
{
	int	number;
	int	i;

	if (ft_strcmp(argv[1], "-c") == 0)
	{
		*last_parsed = 2;
		number = parse_number(argv[2], error);
		return (number);
	}
	else if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		if (argv[1][2] == '\0')
		{
			print_arg_error();
			*error = 1;
			return (0);
		}
		i = 2;
		while (ft_isspace(argv[1][i]) && i < ft_strlen(argv[1]))
			i++;
		*last_parsed = 1;
		return (parse_number(&argv[1][i], error));
	}
	return (0);
}

int		parse_number(char *address, int *err)
{
	int	i;
	int	sign;
	int	str_len;

	i = 0;
	sign = -1;
	str_len = ft_strlen(address);
	while (ft_isspace(address[i]))
		i++;
	if (address[i] == '+' || address[i] == '-')
		sign = (address[i++] == '+') ? 1 : -1;
	while (i < str_len)
	{
		if (!ft_isdigit(address[i]))
		{
			ft_arg_error("illegal offset", address);
			*err = 1;
			return (0);
		}
		i++;
	}
	return (sign * ft_abs(ft_atoi(address)));
}

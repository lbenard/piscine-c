/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:28:32 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/19 14:40:16 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rw.h"
#include "ft_str.h"
#include "ft_arg.h"

void	print_filename(char *str)
{
	ft_putstr_fd("==> ", 1);
	ft_putstr_fd(str, 1);
	ft_putstr_fd(" <==\n", 1);
}

void	print_file(int arg, char *filename, int multiple_files)
{
	int	fd;

	fd = ft_open_read_only_file(filename, (arg < 0));
	if (multiple_files)
		print_filename(filename);
	if (fd != -1)
	{
		ft_putfile_fd(fd, arg);
		ft_close_file(fd);
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	arg;
	int	error;
	int	multiple_files;

	if ((argc == 2 && argv[1][1]) || argc < 2)
	{
		if (argc == 2)
			print_arg_error();
		return (-1);
	}
	arg = parse_bytes_loc(argv, &i, &error);
	if (error)
		return (-1);
	multiple_files = (argc - i - 1 != 1);
	while (++i < argc)
	{
		print_file(arg, argv[i], multiple_files);
		if (multiple_files && i != argc - 1)
			ft_putstr_fd("\n", 1);
	}
}

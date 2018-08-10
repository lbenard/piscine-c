/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:28:32 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/19 14:58:47 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rw.h"
#include "ft_str.h"
#include <string.h>

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		error;

	error = 0;
	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			if (ft_strcmp(argv[i], "-") == 0)
			{
				ft_putfile_fd(0);
				continue ;
			}
			fd = ft_open_read_only_file(argv[i]);
			if (fd != -1)
			{
				ft_putfile_fd(fd);
				ft_close_file(fd);
			}
		}
	}
	else
		ft_putfile_fd(0);
}

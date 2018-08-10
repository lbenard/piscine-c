/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 21:19:26 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/19 14:31:03 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rw.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int		ft_open_read_only_file(char *str, int append)
{
	int	fd;

	fd = open(str, O_RDONLY | (append) ? O_APPEND : 0);
	if (fd == -1)
	{
		ft_file_error(str, "No such file or directory");
		return (-1);
	}
	errno = 0;
	read(fd, NULL, 0);
	if (errno == EISDIR)
		return (-1);
	return (fd);
}

void	ft_close_file(int fd)
{
	close(fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 21:44:22 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/19 12:34:53 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rw.h"
#include "ft_str.h"
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 20000

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

void	ft_putstr_err(char *str)
{
	ft_putstr_fd(str, 2);
}

void	ft_putfile_fd(int fd, int seek)
{
	char	buffer[BUFFER_SIZE];
	int		read_len;

	errno = 0;
	if (seek < 0)
		lseek(fd, seek, SEEK_END);
	else
		lseek(fd, seek - 1, SEEK_CUR);
	while ((read_len = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[read_len] = '\0';
		ft_putstr_fd(buffer, 1);
	}
}

void	ft_arg_error(char *err, char *arg)
{
	ft_putstr_err("tail: ");
	ft_putstr_err(err);
	ft_putstr_err(" -- ");
	ft_putstr_err(arg);
	ft_putstr_err("\n");
}

void	ft_file_error(char *file, char *err)
{
	ft_putstr_err("tail: ");
	ft_putstr_err(file);
	ft_putstr_err(": ");
	ft_putstr_err(err);
	ft_putstr_err("\n");
}

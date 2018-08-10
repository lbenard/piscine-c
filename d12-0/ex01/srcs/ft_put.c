/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 21:44:22 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/18 22:28:06 by lbenard          ###   ########.fr       */
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

void	ft_putfile_fd(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		read_len;

	errno = 0;
	while ((read_len = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[read_len] = '\0';
		ft_putstr_fd(buffer, 1);
	}
}

void	ft_error(char *file, char *err)
{
	ft_putstr_err("cat: ");
	ft_putstr_err(file);
	ft_putstr_err(": ");
	ft_putstr_err(err);
	ft_putstr_err("\n");
}

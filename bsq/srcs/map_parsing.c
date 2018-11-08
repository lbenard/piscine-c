/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:46:11 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 14:38:08 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "functions.h"

#define BUFFER_SIZE 32768

int	get_file_descriptor(char *path)
{
	if (!path)
		return (0);
	return (open(path, O_RDONLY));
}

int	read_map(char **str, int fd)
{
	char	*buf;
	int		r_out;
	int		first_line_len;

	if (fd == -1 || !(buf = (char*)malloc(sizeof(*buf) * (BUFFER_SIZE + 1))))
		return (0);
	r_out = read(fd, buf, BUFFER_SIZE);
	buf[r_out] = '\0';
	if (!check_first_line(buf))
	{
		free(buf);
		return (0);
	}
	first_line_len = ft_linelen(buf + ft_linelen(buf) + 1);
	if (!(*str = (char*)malloc(sizeof(*str) *
		((first_line_len + 1) * (ft_atoi(buf) + 1)))))
		return (0);
	ft_strcpy(*str, buf);
	while ((r_out = read(fd, buf, BUFFER_SIZE)))
	{
		buf[r_out] = 0;
		ft_strcat(*str, buf);
	}
	free(buf);
	return (1);
}

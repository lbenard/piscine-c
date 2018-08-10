/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 21:07:31 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/18 22:39:16 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

int		ft_putstr_fd(int fd, char *str)
{
	return (write(fd, str, ft_strlen(str)));
}

int		main(int argc, char **argv)
{
	int		fd;
	int		read_len;
	char	buffer[BUFFER_SIZE + 1];

	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr_fd(1, "File name missing.\n");
		else if (argc > 2)
			ft_putstr_fd(1, "Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while ((read_len = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[read_len] = '\0';
		ft_putstr_fd(1, buffer);
	}
	close(fd);
}

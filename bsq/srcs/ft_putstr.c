/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:40:53 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 14:41:12 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	ft_putstr_fd(1, str);
}

void	ft_putstr_fd(int fd, char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(fd, str, len);
}

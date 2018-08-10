/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:38:55 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/15 11:28:49 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strutils.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	copy = (char*)malloc(sizeof(*copy) * (src_len + 1));
	i = -1;
	while (++i <= src_len)
		copy[i] = src[i];
	return (copy);
}

int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

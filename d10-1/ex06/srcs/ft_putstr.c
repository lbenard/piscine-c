/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:19:08 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 00:20:16 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"
#include "ft_putchar.h"

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while ((c = str[i++]))
		ft_putchar(c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:51:30 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 00:52:22 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include "ft_putchar.h"

void	ft_putnbr(int nb)
{
	long nb2;

	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = -nb2;
	}
	if (nb2 >= 10)
	{
		ft_putnbr((int)(nb2 / 10));
		ft_putchar('0' + nb2 % 10);
	}
	else
		ft_putchar('0' + nb2);
}

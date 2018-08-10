/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:12:46 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 01:26:46 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while ((c = str[i++]))
		ft_putchar(c);
}

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

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par->str)
	{
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while (par->tab[i])
		{
			ft_putstr(par->tab[i]);
			ft_putchar('\n');
			i++;
		}
		par++;
	}
}

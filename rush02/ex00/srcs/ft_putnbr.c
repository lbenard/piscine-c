/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelievr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:42:58 by llelievr          #+#    #+#             */
/*   Updated: 2018/07/20 12:16:05 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	char	i[10];
	int		index;
	int		signe;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	index = 0;
	signe = nb < 0 ? -1 : 1;
	if (nb < 0)
		ft_putchar('-');
	while (nb != 0)
	{
		i[index++] = nb % 10;
		nb /= 10;
	}
	while (index-- > 0)
		ft_putchar('0' + (i[index] * signe));
}

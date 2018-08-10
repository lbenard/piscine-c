/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:26:16 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/14 21:01:27 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operators.h"
#include "ft_putstr.h"

int		ft_add(int nb1, int nb2, int *result)
{
	*result = nb1 + nb2;
	return (0);
}

int		ft_sub(int nb1, int nb2, int *result)
{
	*result = nb1 - nb2;
	return (0);
}

int		ft_div(int nb1, int nb2, int *result)
{
	if (nb2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (-1);
	}
	*result = nb1 / nb2;
	return (0);
}

int		ft_mul(int nb1, int nb2, int *result)
{
	*result = nb1 * nb2;
	return (0);
}

int		ft_mod(int nb1, int nb2, int *result)
{
	if (nb2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (-1);
	}
	*result = nb1 % nb2;
	return (0);
}

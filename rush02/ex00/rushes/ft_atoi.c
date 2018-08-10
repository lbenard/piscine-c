/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:42:27 by llelievr          #+#    #+#             */
/*   Updated: 2018/07/22 23:41:29 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int		ft_atoi(char *str)
{
	int		nbr;
	int		signe;

	nbr = 0;
	signe = -1;
	while (*str == ' ' || (*str > 7 && *str < 14))
		str++;
	if ((*str != '-' && *str != '+') && (*str < '0' || *str > '9'))
		return (0);
	if (*str == '-' || *str == '+')
		signe = *str++ == '+' ? -1 : 1;
	while (*str >= '0' && *str <= '9')
	{
		nbr -= (*str++) - '0';
		nbr *= (*str >= '0' && *str <= '9') ? 10 : 1;
	}
	return (nbr * signe);
}

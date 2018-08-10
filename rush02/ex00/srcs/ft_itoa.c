/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 14:37:18 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/22 16:34:56 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int nb)
{
	int		nb_cpy;
	int		len;
	char	*str;
	int		i;

	nb_cpy = nb;
	len = 0;
	if (nb == 0)
		return ("0");
	while (nb_cpy != 0)
	{
		nb_cpy /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	while (nb != 0)
	{
		str[len - 1 - i++] = (nb % 10) + '0';
		nb /= 10;
	}
	str[len] = '\0';
	return (str);
}

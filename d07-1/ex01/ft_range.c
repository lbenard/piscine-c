/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:41:55 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/10 16:13:37 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return ((void*)0);
	range = (int*)malloc(sizeof(int) * (max - min));
	i = -1;
	while (++i < max - min)
		range[i] = min + i;
	return (range);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:40:16 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/12 19:19:14 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*retval;
	int	i;

	retval = (int*)malloc(sizeof(*retval) * length);
	i = -1;
	while (++i < length)
		retval[i] = f(tab[i]);
	return (retval);
}

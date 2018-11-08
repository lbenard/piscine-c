/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:53:44 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/25 18:42:25 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

void	ft_strncpy(char *dest, char *src, int nb)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (n < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		n++;
	}
	dest[j] = '\0';
}

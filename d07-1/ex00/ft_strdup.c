/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:42:45 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/09 16:28:32 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (src_len + 1));
	i = -1;
	while (++i < src_len + 1)
		str[i] = src[i];
	return (str);
}

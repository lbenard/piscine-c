/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelievr <llelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:08:19 by llelievr          #+#    #+#             */
/*   Updated: 2018/07/22 16:11:18 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_realloc.h"
#include "libft.h"
#include <stdlib.h>

char	*ft_realloc(char *in, char *to_add)
{
	char	*str;
	int		in_len;
	int		i;
	int		j;

	in_len = ft_strlen(in);
	str = (char*)malloc(sizeof(char) * (in_len + ft_strlen(to_add) + 1));
	i = 0;
	while (in[i])
	{
		str[i] = in[i];
		i++;
	}
	j = 0;
	while (to_add[j])
	{
		str[i + j] = to_add[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

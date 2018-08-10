/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 09:50:36 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/12 10:59:22 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
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

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*params;
	int					i;

	params = malloc(sizeof(*params) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		params[i].size_param = ft_strlen(av[i]);
		params[i].str = av[i];
		params[i].copy = ft_strdup(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	params[i].str = (char*)0;
	return (params);
}

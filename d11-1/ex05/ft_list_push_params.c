/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 15:52:21 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 12:24:46 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front;

	front = ft_create_elem(data);
	front->next = *begin_list;
	*begin_list = front;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tab;
	int		i;

	i = 0;
	if (ac == 0)
		return (NULL);
	tab = ft_create_elem(av[i]);
	while (++i < ac)
		ft_list_push_front(&tab, av[i]);
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:19:18 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 11:36:54 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*elem;
	unsigned int	i;

	elem = begin_list;
	i = 0;
	if (begin_list == NULL)
		return (NULL);
	while (i < nbr)
	{
		if (elem->next == NULL)
			return (NULL);
		elem = elem->next;
		i++;
	}
	return (elem);
}

int		ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	if (begin_list == NULL)
		return (0);
	while (begin_list->next != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size + 1);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	int		i;
	int		is_sorted;
	int		list_size;
	void	*buffer;

	is_sorted = 0;
	buffer = *begin_list;
	*begin_list = ft_create_elem(data);
	(*begin_list)->next = buffer;
	list_size = ft_list_size(*begin_list);
	while (!is_sorted)
	{
		i = 0;
		is_sorted = 1;
		while (++i < list_size)
			if (cmp(ft_list_at(*begin_list, i - 1)->data,
				ft_list_at(*begin_list, i)->data) > 0)
			{
				buffer = ft_list_at(*begin_list, i - 1)->data;
				ft_list_at(*begin_list, i - 1)->data =
					ft_list_at(*begin_list, i)->data;
				ft_list_at(*begin_list, i)->data = buffer;
				is_sorted = 0;
			}
	}
}

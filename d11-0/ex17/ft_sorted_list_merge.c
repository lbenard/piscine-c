/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:38:52 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 14:01:08 by lbenard          ###   ########.fr       */
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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*head;

	head = *begin_list1;
	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = begin_list2;
}

void	ft_sorted_list_merge(t_list **begin_list1,
	t_list *begin_list2,
	int (*cmp)())
{
	int		i;
	int		is_sorted;
	void	*buffer;

	is_sorted = 0;
	if (begin_list1 == NULL || *begin_list1 == NULL)
		return ;
	ft_list_merge(begin_list1, begin_list2);
	while (!is_sorted)
	{
		i = 0;
		is_sorted = 1;
		while (++i < ft_list_size(*begin_list1))
			if (cmp(ft_list_at(*begin_list1, i - 1)->data,
				ft_list_at(*begin_list1, i)->data) > 0)
			{
				buffer = ft_list_at(*begin_list1, i - 1)->data;
				ft_list_at(*begin_list1, i - 1)->data =
					ft_list_at(*begin_list1, i)->data;
				ft_list_at(*begin_list1, i)->data = buffer;
				is_sorted = 0;
			}
	}
}

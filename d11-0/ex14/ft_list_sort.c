/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 02:08:23 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 13:58:52 by lbenard          ###   ########.fr       */
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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	int		is_sorted;
	void	*buffer;

	is_sorted = 0;
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while (!is_sorted)
	{
		i = 0;
		is_sorted = 1;
		while (++i < ft_list_size(*begin_list))
			if (cmp(ft_list_at(*begin_list, i - 1)->data,
				ft_list_at(*begin_list, i)->data) > 0)
			{
				buffer =
					ft_list_at(*begin_list, i - 1)->data;
				ft_list_at(*begin_list, i - 1)->data =
					ft_list_at(*begin_list, i)->data;
				ft_list_at(*begin_list, i)->data =
					buffer;
				is_sorted = 0;
			}
	}
}

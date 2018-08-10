/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:10:55 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 12:37:39 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

void	ft_list_reverse(t_list **begin_list)
{
	int		length;
	int		i;
	void	*to_swap;

	if (*begin_list == NULL || begin_list == NULL)
		return ;
	length = ft_list_size(*begin_list);
	i = -1;
	while (++i < length / 2)
	{
		to_swap = ft_list_at(*begin_list, i)->data;
		ft_list_at(*begin_list, i)->data =
			ft_list_at(*begin_list, length - 1 - i)->data;
		ft_list_at(*begin_list, length - 1 - i)->data = to_swap;
	}
}

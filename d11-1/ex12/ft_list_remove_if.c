/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 22:02:00 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/18 12:20:54 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*head;
	t_list	*tmp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	head = *begin_list;
	while (head->next != NULL)
	{
		if (cmp(head->next->data, data_ref) == 0)
		{
			tmp = head->next->next;
			free(head->next);
			head->next = tmp;
		}
		else
			head = head->next;
	}
	head = *begin_list;
	if (cmp(head->data, data_ref) == 0)
	{
		tmp = head->next;
		free(*begin_list);
		*begin_list = tmp;
	}
}

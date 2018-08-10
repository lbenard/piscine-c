/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:22:06 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 13:49:09 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*head;

	head = begin_list;
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (cmp(head->data, data_ref) == 0)
			return (head);
		head = head->next;
	}
	return (NULL);
}

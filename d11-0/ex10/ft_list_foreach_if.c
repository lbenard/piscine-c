/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:47:56 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 12:46:15 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
	void *data_ref,
	int (*cmp)())
{
	t_list	*head;

	head = begin_list;
	if (begin_list == NULL)
		return ;
	while (head != NULL)
	{
		if (cmp(head->data, data_ref) == 0)
			f(head->data);
		head = head->next;
	}
}

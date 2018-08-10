/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:59:43 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/20 14:31:35 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"
#include <stdlib.h>

void	enqueue(t_queue **queue, t_btree *to_add)
{
	t_queue	*buffer;

	if (!queue || !*queue)
	{
		if (queue)
		{
			buffer = (t_queue*)malloc(sizeof(*buffer));
			(*queue) = buffer;
			(*queue)->data = to_add;
		}
		return ;
	}
	buffer = *queue;
	(*queue) = (t_queue*)malloc(sizeof(*queue));
	(*queue)->next = buffer;
	(*queue)->data = to_add;
}

t_btree	*dequeue(t_queue **queue)
{
	t_queue	*head;
	t_queue	*previous;
	t_btree	*retval;

	if (!queue || !*queue)
		return (NULL);
	head = *queue;
	previous = NULL;
	retval = NULL;
	while (head)
	{
		if (!head->next)
		{
			retval = head->data;
			free(head);
			if (previous)
				previous->next = NULL;
			else
				*queue = NULL;
			return (retval);
		}
		previous = head;
		head = head->next;
	}
	return (retval);
}

int		size(t_queue *queue)
{
	int	size;
	int	is_null;

	size = 0;
	if (queue == NULL)
		return (0);
	is_null = 1;
	while (queue != NULL)
	{
		if (queue->data)
			is_null = 0;
		if (queue->data)
			size++;
		queue = queue->next;
	}
	if (is_null)
		return (0);
	return (size);
}

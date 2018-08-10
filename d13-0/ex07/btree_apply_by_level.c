/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 03:19:34 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/20 14:35:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft_queue.h"
#include <stdlib.h>

void	ft_update_bounds(long long guess, int nb, int *lower, int *higher)
{
	if (guess * guess > nb)
		*higher = guess;
	else if (guess * guess < nb)
		*lower = guess;
}

int		ft_sqrt(int nb)
{
	int			lower;
	int			higher;
	long long	guess;

	if (nb <= 1)
		return (0);
	lower = 0;
	higher = nb / 2;
	guess = (lower + higher) / 2;
	while (guess * guess != nb)
	{
		guess = (lower + higher) / 2;
		ft_update_bounds(guess, nb, &lower, &higher);
		if (higher - lower == 1)
		{
			guess = higher;
			break ;
		}
		guess = (lower + higher) / 2;
	}
	return (guess);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
	int current_level, int is_first_elem))
{
	int		node_count;
	int		i;
	int		should_break;
	t_queue	*fifo;
	t_btree	*deq;

	node_count = 1;
	should_break = 0;
	fifo = NULL;
	enqueue(&fifo, root);
	while (!should_break)
	{
		i = 0;
		while (i < node_count)
		{
			deq = dequeue(&fifo);
			if (deq)
				applyf(deq->item, ft_sqrt(node_count), i++ == 0);
			enqueue(&fifo, (deq) ? deq->left : NULL);
			enqueue(&fifo, (deq) ? deq->right : NULL);
			if ((should_break = (size(fifo) == 0)))
				break ;
		}
		node_count *= 2;
	}
}

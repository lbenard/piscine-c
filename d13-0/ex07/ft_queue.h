/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:44:24 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/20 12:59:45 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include "ft_btree.h"

typedef struct	s_queue
{
	struct s_queue	*next;
	t_btree			*data;
}				t_queue;

t_queue			*create_elem(void *data);
void			enqueue(t_queue **queue, t_btree *to_add);
t_btree			*dequeue(t_queue **queue);
int				size(t_queue *queue);

#endif

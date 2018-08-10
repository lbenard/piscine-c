/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 22:51:05 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/20 14:38:43 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void*, void*))
{
	if (!root || !*root)
	{
		if (root)
			*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
	{
		if (!(*root)->left)
			(*root)->left = btree_create_node(item);
		else
			btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		if (!(*root)->right)
			(*root)->right = btree_create_node(item);
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
}

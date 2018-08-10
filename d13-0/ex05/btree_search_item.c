/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 00:00:14 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/20 02:40:36 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void*, void*))
{
	void	*retval;

	if (!root | !cmpf)
		return (NULL);
	if (root->left && cmpf(data_ref, root->item) <= 0)
		if ((retval = btree_search_item(root->left, data_ref, cmpf)))
			return (retval);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->right && cmpf(data_ref, root->item) >= 0)
		if ((retval = btree_search_item(root->right, data_ref, cmpf)))
			return (retval);
	return (NULL);
}

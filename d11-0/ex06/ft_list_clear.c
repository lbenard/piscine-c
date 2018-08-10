/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:03:35 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 12:33:02 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*buffer;

	if (*begin_list == NULL || begin_list == NULL)
		return ;
	while ((*begin_list)->next != NULL)
	{
		buffer = (*begin_list)->next;
		free(*begin_list);
		*begin_list = buffer;
	}
	free(*begin_list);
	*begin_list = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:57:39 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/17 12:22:58 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*last_element;

	last_element = begin_list;
	if (last_element == NULL)
		return (last_element);
	while (last_element->next != NULL)
		last_element = last_element->next;
	return (last_element);
}

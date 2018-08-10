/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:21:04 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 00:21:33 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
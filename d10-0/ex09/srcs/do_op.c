/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:39:53 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/14 21:13:12 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_atoi.h"
#include "ft_strlen.h"
#include "operators.h"
#include "ft_opp.h"

#include <stdio.h>

int		do_op(char *nb1, char *operator, char *nb2, int *err)
{
	int	nb1_toi;
	int	nb2_toi;
	int	result;
	int (*op)(int, int, int*);

	nb1_toi = ft_atoi(nb1);
	nb2_toi = ft_atoi(nb2);
	result = 0;
	if (ft_strlen(operator) != 1)
		return (0);
	//op = g_opptab[operator];
	
	printf("%s\n", g_opptab["+"]);

	*err = op(nb1_toi, nb2_toi, &result);
	return (result);
}

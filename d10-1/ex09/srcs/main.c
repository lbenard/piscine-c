/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:11:54 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 01:10:48 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_putnbr.h"
#include "ft_putchar.h"

int	main(int argc, char **argv)
{
	int	result;
	int	err;

	if (argc == 4)
	{
		result = do_op(argv[1], argv[2], argv[3], &err);
		if (err == 0)
		{
			ft_putnbr(result);
			ft_putchar('\n');
		}
	}
	return (0);
}

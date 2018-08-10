/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:26:55 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/05 18:49:50 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_update_bounds(int guess, int nb, int *lower, int *higher)
{
	if (guess * guess > nb)
		*higher = guess;
	else if (guess * guess < nb)
		*lower = guess;
}

int		ft_sqrt(int nb)
{
	int lower;
	int higher;
	int guess;

	if (nb <= 2)
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
			if ((guess = higher) * higher == nb)
				break ;
			else if ((guess = lower) * lower == nb)
				break ;
			else if (!(guess = 0))
				break ;
		}
		guess = (lower + higher) / 2;
	}
	return (guess);
}

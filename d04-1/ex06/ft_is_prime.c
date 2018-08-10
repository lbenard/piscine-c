/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:55:32 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/08 12:05:19 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_update_bounds(long long guess, int nb, int *lower, int *higher)
{
	if (guess * guess > nb)
		*higher = guess;
	else if (guess * guess < nb)
		*lower = guess;
}

int		ft_sqrt_ceil(int nb)
{
	int			lower;
	int			higher;
	long long	guess;

	if (nb <= 1)
		return ((nb == 1) ? 1 : 0);
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
	return (guess + 1);
}

int		ft_is_prime(int nb)
{
	int i;
	int sqrt_ceil;
	int	is_prime;

	i = 1;
	sqrt_ceil = ft_sqrt_ceil(nb);
	is_prime = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i++ < sqrt_ceil)
	{
		if (nb % i == 0)
		{
			is_prime = 0;
			break ;
		}
	}
	return (is_prime);
}

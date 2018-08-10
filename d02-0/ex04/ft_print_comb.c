/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:47:19 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/04 11:29:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_digit_by_position(int number, int position)
{
	while (position--)
		number /= 10;
	number = number % 10;
	return (number);
}

char	ft_digit_to_char(int digit)
{
	if (digit >= 0 && digit <= 9)
		return ('0' + digit);
	else
		return (-1);
}

void	ft_print_delimiter(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int number;
	int d0;
	int d1;
	int d2;

	number = -1;
	while (++number <= 789)
	{
		d0 = ft_digit_by_position(number, 0);
		d1 = ft_digit_by_position(number, 1);
		d2 = ft_digit_by_position(number, 2);
		if (d0 != d1 && d1 != d2 && d2 != d0)
			if (d0 > d1 && d1 > d2)
			{
				ft_putchar(ft_digit_to_char(d2));
				ft_putchar(ft_digit_to_char(d1));
				ft_putchar(ft_digit_to_char(d0));
				if (number != 789)
					ft_print_delimiter();
			}
	}
}

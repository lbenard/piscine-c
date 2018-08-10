/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 10:29:51 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/04 17:22:11 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_digit_by_position(int number, int position)
{
	while (position--)
		number /= 10;
	return (number % 10);
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

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = -1;
	n2 = 0;
	while (++n1 <= 99)
	{
		while (++n2 <= 99)
		{
			ft_putchar(ft_digit_to_char(ft_digit_by_position(n1, 1)));
			ft_putchar(ft_digit_to_char(ft_digit_by_position(n1, 0)));
			ft_putchar(' ');
			ft_putchar(ft_digit_to_char(ft_digit_by_position(n2, 1)));
			ft_putchar(ft_digit_to_char(ft_digit_by_position(n2, 0)));
			if (!(n1 == 98 && n2 == 99))
				ft_print_delimiter();
		}
		n2 = n1 + 1;
	}
}

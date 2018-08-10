/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 11:38:00 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/05 11:50:45 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_digit_by_position(int number, int position)
{
	while (position--)
		number /= 10;
	return (number % 10);
}

int		ft_number_len(int number)
{
	int len;

	len = 1;
	while (number /= 10)
		len++;
	return (len);
}

char	ft_digit_to_char(int digit)
{
	if (digit >= 0 && digit <= 9)
		return ('0' + digit);
	else
		return (-1);
}

void	ft_putnbr(int nb)
{
	int len;
	int i;

	len = ft_number_len(nb);
	i = len;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (i--)
		ft_putchar(ft_digit_to_char(ft_digit_by_position(nb, i)));
}

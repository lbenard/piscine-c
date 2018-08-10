/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 15:43:37 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/08 15:44:14 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up_square(int x, char up_left, char up_right)
{
	char	c;
	int		i;

	c = 'B';
	i = 0;
	ft_putchar(up_left);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(c);
			i++;
		}
		ft_putchar(up_right);
	}
	ft_putchar('\n');
}

void	middle_square(int x)
{
	char	c;
	int		i;

	c = 'B';
	i = 0;
	ft_putchar(c);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	down_square(int x, char down_left, char down_right)
{
	char	c;
	int		i;

	c = 'B';
	i = 0;
	ft_putchar(down_left);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(c);
			i++;
		}
		ft_putchar(down_right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;
	char	up_left;
	char	up_right;
	char	down_left;
	char	down_right;

	up_left = 'A';
	up_right = 'C';
	down_left = 'A';
	down_right = 'C';
	i = 0;
	if (x > 0 && y > 0)
	{
		up_square(x, up_left, up_right);
		if (y > 1)
		{
			while (i < y - 2)
			{
				middle_square(x);
				i++;
			}
			down_square(x, down_left, down_right);
		}
	}
}

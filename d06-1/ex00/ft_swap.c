/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 23:25:30 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/09 11:54:34 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ');
}

int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_char_to_digit(char c)
{
	if (ft_isdigit(c))
		return (c - '0');
	else
		return (-1);
}

int		ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		result = result * 10 + ft_char_to_digit(str[i++]);
	return (result * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 00:15:12 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/05 12:06:26 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}

char	ft_char_to_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else
		return (-1);
}

int		ft_power_of_ten(int radix)
{
	int result;

	result = 1;
	if (radix < 0)
		return (0);
	while (radix--)
		result *= 10;
	return (result);
}

int		ft_char_to_sign(char sign)
{
	if (sign == '+')
		return (1);
	else if (sign == '-')
		return (-1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int length;
	int	sign;
	int result;
	int i;
	int digit;

	result = 0;
	sign = ft_char_to_sign(str[0]);
	length = ft_strlen(str);
	i = (sign == -1) ? 0 : -1;
	while (ft_char_to_digit(str[++i]) == -1)
	{
	}
	while (++i < length)
	{
		if ((digit = ft_char_to_digit(str[i])) != -1)
			result += ft_power_of_ten(length - i - 1) * digit;
		else
		{
			result = 0;
			break ;
		}
	}
	return (result * sign);
}

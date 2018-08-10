/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:39:32 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/11 17:53:36 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_pow(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power > 0)
		result *= nb;
	return (result);
}

int		ft_base_to_decimal(char *nbr, char *base)
{
	int	digit_to_int[256];
	int	base_len;
	int	nbr_len;
	int	result;
	int	i;

	base_len = ft_strlen(base);
	nbr_len = ft_strlen(nbr);
	result = 0;
	i = -1;
	while (base[++i])
		digit_to_int[(int)base[i]] = i;
	i = -1;
	while (++i < nbr_len)
		result += digit_to_int[(int)nbr[i]]
			* ft_pow(base_len, nbr_len - 1 - i);
	return (result);
}

char	*ft_decimal_to_base(int nbr, char *base)
{
	int		base_len;
	char	*buffer;
	char	*result;
	int		i;

	buffer = (char*)malloc(sizeof(char) * (32));
	buffer[31] = '\0';
	base_len = ft_strlen(base);
	i = 0;
	while (nbr != 0)
	{
		buffer[30 - i] = base[nbr % base_len];
		result = &buffer[30 - i];
		nbr /= base_len;
		i++;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_decimal_to_base(ft_base_to_decimal(nbr, base_from), base_to));
}

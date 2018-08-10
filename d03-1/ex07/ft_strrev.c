/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:34:23 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/05 10:17:22 by lbenard          ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	to_swap;

	length = ft_strlen(str);
	i = -1;
	while (++i < length / 2)
	{
		to_swap = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = to_swap;
	}
	return (str);
}

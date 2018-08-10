/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:40:23 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/08 12:45:57 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int str_len;
	int	i;

	str_len = ft_strlen(str);
	i = 0;
	while (i < str_len)
		if (!ft_char_is_printable(str[i++]))
			return (0);
	return (1);
}

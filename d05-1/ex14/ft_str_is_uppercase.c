/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:28:34 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/08 12:29:46 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_uppercase(char *str)
{
	int	str_len;
	int	i;

	str_len = ft_strlen(str);
	i = 0;
	while (i < str_len)
		if (!ft_char_is_uppercase(str[i++]))
			return (0);
	return (1);
}

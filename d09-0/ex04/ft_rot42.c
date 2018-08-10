/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:48:40 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 12:25:56 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_isdowncase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_rot42(char *str)
{
	int	rot;
	int i;

	rot = 42 % 26;
	i = -1;
	while (str[++i])
	{
		if ((ft_isdowncase(str[i]) && str[i] + rot > 'z') ||
			(ft_isupcase(str[i]) && str[i] + rot > 'Z'))
			str[i] -= 26;
		str[i] += rot;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 01:48:22 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/08 10:32:20 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'));
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_charupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	str_len;
	int	i;

	str_len = ft_strlen(str);
	i = -1;
	while (++i < str_len)
		if (ft_is_alphanumeric(str[i]))
		{
			if (i == 0)
				str[i] = ft_charupcase(str[i]);
			else if (!ft_is_alphanumeric(str[i - 1]))
				str[i] = ft_charupcase(str[i]);
		}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:26:12 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/06 16:23:16 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	str_len;
	int	to_find_len;
	int common_char;

	i = 0;
	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return (str);
	while (i < str_len)
	{
		j = 0;
		common_char = 0;
		while (j < to_find_len)
		{
			common_char += (str[i + j] == to_find[j]);
			j++;
		}
		if (common_char == to_find_len)
			return (&(str[i]));
		i++;
	}
	return (0);
}

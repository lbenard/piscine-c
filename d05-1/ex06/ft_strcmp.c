/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:28:23 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/10 12:31:18 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_max(int n1, int n2)
{
	return ((n1 >= n2) ? n1 : n2);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int	max_len;

	i = 0;
	max_len = ft_max(ft_strlen(s1), ft_strlen(s2));
	while (i < max_len)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

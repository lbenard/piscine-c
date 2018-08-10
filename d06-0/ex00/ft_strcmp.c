/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 23:39:10 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/09 11:47:11 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_max(int a, int b)
{
	return ((a >= b) ? a : b);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	max_len;

	i = 0;
	max_len = ft_max(ft_strlen(s1), ft_strlen(s2));
	while (i < max_len)
	{
		if (s1[i] != s2[i])
			return ((s1[i] < s2[i]) ? -1 : 1);
		i++;
	}
	return (0);
}

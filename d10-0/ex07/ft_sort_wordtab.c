/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:39:29 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 15:36:26 by lbenard          ###   ########.fr       */
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

int		ft_max(int a, int b)
{
	return ((a >= b) ? a : b);
}

int		ft_strcmp(char *s1, char *s2)
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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		is_sorted;
	char	*buffer;

	is_sorted = 0;
	while (!is_sorted)
	{
		i = 0;
		is_sorted = 1;
		while (tab[++i])
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				buffer = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = buffer;
				is_sorted = 0;
			}
	}
}

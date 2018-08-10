/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:31:48 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 15:35:37 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				buffer = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = buffer;
				is_sorted = 0;
			}
	}
}

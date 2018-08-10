/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:41:53 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/09 14:55:28 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while ((c = str[i++]))
		ft_putchar(c);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_max(int n1, int n2)
{
	return ((n1 >= n2) ? n1 : n2);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
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

int		main(int argc, char **argv)
{
	int		i;
	int		is_sorted;
	char	*buffer;

	is_sorted = 0;
	while (!is_sorted)
	{
		i = 1;
		is_sorted = 1;
		while (++i < argc)
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				buffer = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = buffer;
				is_sorted = 0;
			}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

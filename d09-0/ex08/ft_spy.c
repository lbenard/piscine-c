/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:53:01 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 16:02:54 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while ((c = str[i++]))
		write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int	max_len;

	i = 0;
	max_len = (ft_strlen(s1) >= ft_strlen(s2)) ? ft_strlen(s1) : ft_strlen(s2);
	while (i < max_len)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	str_len;
	int i;

	str_len = ft_strlen(str);
	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
	return (str);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(ft_strlowcase(argv[i]), "president") == 0)
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		else if (ft_strcmp(ft_strlowcase(argv[i]), "attack") == 0)
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		else if (ft_strcmp(ft_strlowcase(argv[i]), "bauer") == 0)
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		i++;
	}
	return (0);
}

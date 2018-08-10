/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:11:55 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/09 12:41:16 by lbenard          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (--i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

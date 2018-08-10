/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:02:43 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/11 01:44:29 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*retval;
	int		i;
	int		j;
	int		args_len;
	int		written_length;

	i = 0;
	args_len = 0;
	while (++i < argc)
		args_len += ft_strlen(argv[i]) + 1;
	retval = (char*)malloc(sizeof(char) * (args_len));
	i = 0;
	written_length = -1;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			retval[++written_length] = argv[i][j];
		if (i != argc - 1)
			retval[++written_length] = '\n';
	}
	retval[args_len - 1] = '\0';
	return (retval);
}

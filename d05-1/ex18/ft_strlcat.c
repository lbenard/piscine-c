/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 19:16:49 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/09 11:21:47 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dest_len;
	unsigned int	i;

	dest_len = (int)ft_strlen(dest);
	i = dest_len;
	while (i < size - dest_len - 1)
	{
		if (!src[i])
			dest[dest_len + i] = '\0';
		else
			dest[dest_len + i] = src[i];
		i++;
	}
	return (i);
}

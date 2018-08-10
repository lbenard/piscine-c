/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:19:18 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/10 18:32:08 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	i = -1;
	while (++i <= src_len)
	{
		dest[i] = src[i];
	}
	return (dest);
}

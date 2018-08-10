/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:19:18 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/06 14:57:42 by lbenard          ###   ########.fr       */
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

int		ft_max(int nb1, int nb2)
{
	return (nb1 >= nb2 ? nb1 : nb2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;
	int	dest_len;
	int	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (i < ((src_len < dest_len) ? src_len + 1 : dest_len))
	{
		dest[i] = src[j];
		if (src[j] != '\0')
			j++;
		i++;
	}
	return (dest);
}

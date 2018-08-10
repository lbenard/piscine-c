/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:31:31 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/08 16:41:27 by lbenard          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int dest_len;
	int	src_len;
	int	i;
	int	max_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = -1;
	max_len = (src_len >= nb) ? nb : src_len;
	while (++i < max_len)
		dest[dest_len + i] = src[i];
	dest[dest_len + max_len] = '\0';
	return (dest);
}

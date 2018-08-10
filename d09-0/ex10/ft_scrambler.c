/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:25:47 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 16:28:10 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	a_value;
	int	b_value;
	int	c_value;
	int	d_value;

	a_value = ***a;
	b_value = *b;
	c_value = *******c;
	d_value = ****d;
	*******c = a_value;
	****d = c_value;
	*b = d_value;
	***a = b_value;
}

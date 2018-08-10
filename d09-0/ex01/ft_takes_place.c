/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:31:12 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 13:41:52 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*am_or_pm(int hour)
{
	if (hour <= 12)
		return ("A.M.");
	else
		return ("P.M.");
}

int		convert_hour(int hour)
{
	if (hour == 0)
		return (12);
	if (hour >= 13)
		return (hour - 12);
	return (hour);
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
		convert_hour(hour),
		am_or_pm(hour),
		convert_hour(hour + 1),
		am_or_pm(hour + 1));
}

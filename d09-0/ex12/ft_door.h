/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:38:35 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 16:46:43 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define CLOSE 0
# define OPEN 1
# define EXIT_SUCCESS 0

typedef int	t_bool;

typedef struct	s_door
{
	int	state;
}				t_door;

#endif

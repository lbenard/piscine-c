/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:30:26 by llelievr          #+#    #+#             */
/*   Updated: 2018/07/22 22:58:04 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_H
# define COLLE_H

# include "colle.h"
# include <stdlib.h>
# define READ_BUFF 8096
# define COLLE_NUMBER 7

typedef enum	e_colle_flags
{
	none = 1 << 0,
	colle00 = 1 << 1,
	colle01 = 1 << 2,
	colle02 = 1 << 3,
	colle03 = 1 << 4,
	colle04 = 1 << 5,
	rect = 1 << 6,
	inv_rect = 1 << 7
}				t_colle_flags;

typedef struct	s_colle
{
	char	c_t_left;
	char	c_t_right;
	char	c_b_left;
	char	c_b_right;
	char	h_side;
	char	v_side;
	char	mid;
}				t_colle;

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

typedef struct	s_size
{
	int		height;
	int		width;
}				t_size;

extern t_colle g_colle_types[COLLE_NUMBER];

t_colle_flags	get_colle_type(char *str, t_size *size);

#endif

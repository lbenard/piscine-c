/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:42:17 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/22 23:00:26 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_CHECK_H
# define COLLE_CHECK_H

# include "colle.h"

int				ft_linelen(char *str);
void			get_size(char *str, t_size *size);
char			get_cell(int x, int y, t_size *size, char *str);
void			get_chars(char *str, t_colle *colle, t_size *size);
int				is_colle(t_colle *colle, t_colle *pattern, int type);
int				are_char_correct(char *str, t_size *size, t_colle *pattern);

#endif

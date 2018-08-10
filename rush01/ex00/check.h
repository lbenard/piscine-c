/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:23:49 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/15 16:38:23 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int		is_line_valid(char *str);
int		is_input_valid(int argc, char **argv);
char	*possible_digits_at_pos(int x, int y);
void	filter_digits(char *digits, int x, int y);
void	fill_digits_list(char **digits, char *remaining_digits);

#endif

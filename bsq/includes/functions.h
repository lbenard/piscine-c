/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:35:32 by mguerrea          #+#    #+#             */
/*   Updated: 2018/07/25 15:28:21 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "struct.h"

/*
** FT_STR_H
*/

int		ft_atoi(char *str);
void	ft_strcat(char *dest, char *from);
char	*ft_strcpy(char *dest, char *from);
void	ft_strncpy(char *dest, char *src, int nb);
int		ft_strlen(char *str);
int		ft_linelen(char *str);
void	ft_putstr(char *str);
void	ft_putstr_fd(int fd, char *str);
void	ft_putchar(char c);

/*
** FT_BOARD_H
*/

void	set_board(char *str, t_board *board);
void	iterate_board(char *str, t_square *square, t_board *board);
int		find_square(char *str, t_pos *position, t_board *board);
void	print_square(char *str, t_square *found_square, t_board *board);
void	remove_flags(char *str, t_board *board);

/*
** FT_FLAGS_H
*/

void	put_flags(t_pos *pos, char *str, t_board *board, int radius);
void	scan_flags(char **str, t_square *square, t_board *board, int last_line);

/*
** FT_GRID_CHECK_H
*/

int		check_first_line(char *str);
int		check_grid(char *str, t_board *board);

/*
** MAP_PARSING_H
*/

int		get_file_descriptor(char *path);
int		read_map(char **str, int fd);

/*
** POSITION STRUCT
*/

void	set_position(t_pos *position, int x, int y);
char	*get_char_at(char *str, int width, t_pos *pos);

#endif

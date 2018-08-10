/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rw.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:30:05 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/18 22:02:57 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RW_H
# define FT_RW_H

void	ft_putstr_fd(char *str, int fd);
void	ft_putstr_err(char *str);
void	ft_putfile_fd(int fd);
void	ft_error(char *file, char *err);
int		ft_open_read_only_file(char *path);
void	ft_close_file(int fd);

#endif

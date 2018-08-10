/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 20:01:57 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/11 22:06:57 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_max(int a, int b);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);
int		ft_isspace(int c);
int		ft_isdigit(char c);
int		ft_char_to_digit(char c);
int		ft_atoi(char *str);

#endif

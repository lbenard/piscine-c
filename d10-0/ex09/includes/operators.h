/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:22:49 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/14 21:00:40 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATORS_H
# define OPERATORS_H

typedef int	(*t_opp)(int, int, int*);

int		ft_add(int nb1, int nb2, int *result);
int		ft_sub(int nb1, int nb2, int *result);
int		ft_div(int nb1, int nb2, int *result);
int		ft_mul(int nb1, int nb2, int *result);
int		ft_mod(int nb1, int nb2, int *result);

#endif

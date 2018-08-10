/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:22:49 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/13 01:05:58 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATORS_H
# define OPERATORS_H

typedef int	(*t_operation)(int, int, int*);

int		addition(int nb1, int nb2, int *result);
int		subtraction(int nb1, int nb2, int *result);
int		division(int nb1, int nb2, int *result);
int		multiplication(int nb1, int nb2, int *result);
int		modulo(int nb1, int nb2, int *result);
void	set_pointers(void);

t_operation g_operators[256];
#endif

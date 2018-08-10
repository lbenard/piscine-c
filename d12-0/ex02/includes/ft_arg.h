/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:32:51 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/19 14:35:58 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARG_H
# define FT_ARG_H

void	print_arg_error(void);
int		parse_bytes_loc(char **argv, int *last_parsed, int *error);
int		parse_number(char *address, int *err);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelievr <llelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:25:35 by llelievr          #+#    #+#             */
/*   Updated: 2018/07/22 15:32:03 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include "colle.h"

int		ft_linelen(char *str);
void	get_size(char *str, t_size *size);
char	get_cell(int x, int y, t_size *size, char *str);

#endif

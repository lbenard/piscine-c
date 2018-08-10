/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:01:03 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/22 23:31:35 by llelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colle_check.h"
#include "colle.h"
#include "ft_realloc.h"
#include <unistd.h>
#include <fcntl.h>

void	print_colle(char is_first, char *name, t_size *size)
{
	if (!is_first)
		ft_putstr(" || ");
	ft_putchar('[');
	ft_putstr(name);
	ft_putstr("]");
	ft_putstr(" [");
	ft_putstr(ft_itoa(size->width));
	ft_putchar(']');
	ft_putstr(" [");
	ft_putstr(ft_itoa(size->height));
	ft_putchar(']');
}

int		read_input(char **str)
{
	int		size;
	char	*buf;
	int		r_out;

	if (!(buf = (char*)malloc(sizeof(*buf) * READ_BUFF + 1)))
		return (0);
	size = 0;
	while ((r_out = read(0, buf, READ_BUFF)))
	{
		size += r_out;
		buf[r_out] = 0;
		*str = ft_realloc(*str, buf);
	}
	free(buf);
	(*str)[size] = '\0';
	return (1);
}

void	get_name(int i, char **name)
{
	if (i == 5 || i == 6)
		ft_strncpy(*name, i == 5 ? "rectangle" : "rectangle inverse", 17);
	else
	{
		ft_strncpy(*name, "colle-0", 9);
		ft_strncat(*name, ft_itoa(i), 8);
	}
}

void	print_colle_list(t_colle_flags flags, t_size *size)
{
	int		i;
	int		count;
	char	*name;
	int		found;

	i = -1;
	count = 0;
	if (!(name = (char*)malloc(sizeof(char) * 17)))
		return ;
	while (++i < COLLE_NUMBER)
	{
		if (flags & (1 << (i + 1)))
		{
			get_name(i, &name);
			print_colle(count++ == 0, name, size);
		}
	}
	found = flags & (1 << 5) ? 4 : 0;
	found = flags & (1 << 6) ? 5 : flags;
	if (found > 0 && size->height == size->width && count != 0)
	{
		ft_strncpy(name, found == 5 ? "carre" : "carre inverse", 17);
		print_colle(count == 0, name, size);
	}
	ft_putstr(count == 0 ? "aucune\n" : "\n");
}

int		main(void)
{
	char			*str;
	t_colle_flags	flags;
	t_size			size;

	if (!(read_input(&str)))
		return (1);
	flags = get_colle_type(str, &size);
	print_colle_list(flags, &size);
	free(str);
	return (0);
}

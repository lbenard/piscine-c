/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 01:53:52 by lbenard           #+#    #+#             */
/*   Updated: 2018/07/07 23:19:55 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	build_floor(int height, int top_stars_count, int offset, int door_size);
int		get_door_size(int base_height);
void	put_x_times(char c, int i);
void	build_ground_floor(int height, int top_stars_count, int door_size);
int		top_stars_at_floor(int floor);

void	sastantua(int size)
{
	int	floor;

	floor = 1;
	while (floor <= size && size >= 1)
	{
		build_floor(floor + 2, top_stars_at_floor(floor),
			((top_stars_at_floor(size) + (size + 1) * 2) -
			(top_stars_at_floor(floor) + (floor + 1) * 2)) / 2,
			(floor == size) ? get_door_size(size + 2) : 0);
		floor++;
	}
}

void	build_floor(int height, int top_stars_count, int offset, int door_size)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (++i < height)
	{
		put_x_times(' ', offset + (height - i - 1));
		ft_putchar('/');
		put_x_times('*', top_stars_count / 2 - door_size / 2);
		put_x_times('*', (door_size) ? 0 : 1);
		j = 0;
		while (j++ < door_size)
			if (i == height - (door_size / 2) - 1 &&
				j == door_size - 1 && door_size > 3)
				ft_putchar('$');
			else
				ft_putchar((door_size && height - i <= door_size) ? '|' : '*');
		put_x_times('*', top_stars_count / 2 - door_size / 2);
		top_stars_count += 2;
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

int		get_door_size(int base_height)
{
	int	size;

	size = -3;
	while (base_height > 0)
	{
		size += 2;
		base_height -= 2;
	}
	return (size);
}

void	put_x_times(char c, int i)
{
	while (i-- > 0)
		ft_putchar(c);
}

int		top_stars_at_floor(int floor)
{
	if (floor == 1)
		return (1);
	return ((top_stars_at_floor(floor - 1) + floor * 2) + (floor / 2) * 2 + 4);
}

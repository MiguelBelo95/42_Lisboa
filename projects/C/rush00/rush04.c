/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:31:54 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/09/10 14:11:24 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(char in, char mid, char out, int size)
{
	int	count;

	count = 0;
	ft_putchar(in);
	count ++;
	while (count < size - 1)
	{
		ft_putchar(mid);
		count ++;
	}
	if (size != 1)
		ft_putchar(out);
	ft_putchar('\n');
}

void	write_collumn(char c, int size)
{
	write_line(c, ' ', c, size);
}

void	rush(int x, int y)
{
	int		count;

	count = 1;
	if (x > 0 && y > 0)
	{
		write_line('A', 'B', 'C', x);
		while (count < y -1)
		{
			write_collumn('B', x);
			count ++;
		}
		if (y != 1)
			write_line('C', 'B', 'A', x);
	}
}

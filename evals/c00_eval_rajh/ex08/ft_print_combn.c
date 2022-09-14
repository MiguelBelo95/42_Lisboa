/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:07:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/13 19:03:19 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_end(int num)
{
	int end_num;
	int j;

	j = 10 - num;
	end_num = j;
	while( j < 9)
	{
		end_num = end_num * 10;
		j++;
		end_num = end_num + j;
	}
	return (end_num);
}

int	get_start(int num)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	num = num - 1;
	while (counter < num)
	{
		if (i % 10 > 9)
		{
			i = i * 10;
			i = i + num;
		}
		counter++;
	}
	return (i);
}

void	print_number(int num)
{
	if (num > 9)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else
	{
		 ft_putchar(num + 48);
	}
}

void	ft_print_combn(int n)
{
	int vars_array[4];
	int	length;

	vars_array[0] = get_start(n);
	vars_array[1] = vars_array[0];
	vars_array[2] = get_end(n);
	vars_array[3] = 3;
	length = 0;
	while (vars_array[0] <= vars_array[2])
	{
		while(vars_array[1] / 10 > 0)
		{
			vars_array[1] = vars_array[1] % 10;
			length++;
		}
		if (length < n)
		{
			ft_putchar('0');
		}
		print_number(vars_array[0]);
		if (vars_array[0] < vars_array[2])
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		vars_array[1] = vars_array[0];
		while(1)
		{
			if (vars_array[1] % 10 == 9)
			{
				vars_array[0] += vars_array[3];
				vars_array[3]++;
				vars_array[1] = vars_array[0];
				break;
			}
			else
			{
				vars_array[0]++;
				break;
			}
			vars_array[1] = vars_array[1] % 10;
		}
		vars_array[1] = vars_array[0];
	}
}

int	main(void)
{
	ft_print_combn(2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:35:17 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/12 15:30:50 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char i, char j, char k)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != 55)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				print_number(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}		
}

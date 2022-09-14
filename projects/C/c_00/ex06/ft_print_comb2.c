/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:29:10 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/13 19:16:37 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
	}
}

void	ft_int_to_str(int a, int b)
{
	ft_putchar(('0' + a / 10), ('0' + a % 10));
	write(1, " ", 1);
	ft_putchar(('0' + b / 10), ('0' + b % 10));
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

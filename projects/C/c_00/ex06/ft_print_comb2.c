/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:03:35 by jabecass          #+#    #+#             */
/*   Updated: 2022/09/12 19:20:00 by josmigue         ###   ########.fr       */
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
	ft_putchar((48 + a / 10), (48 + a % 10));
	write(1, " ", 1);
	ft_putchar((48 + b / 10), (48 + b % 10));
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

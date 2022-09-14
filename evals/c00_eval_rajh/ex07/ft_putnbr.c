/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:18:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/13 13:55:08 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	reverse_number(int num)
{
	int	i;

	i = 0;
	if (num > 0)
	{
		while (num > 0)
		{
			i = i * 10;
			i = i + num % 10;
			num = num / 10;
		}
	}
	else
	{
		num = -num;
		reverse_number(num);
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	rev_num;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		rev_num = reverse_number(nb);
		while (rev_num > 0)
		{
			ft_putchar(rev_num % 10 + 48);
			rev_num = rev_num / 10;
		}
	}
	ft_putchar('\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabecass <jabecass@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:52:12 by jabecass          #+#    #+#             */
/*   Updated: 2022/09/12 09:51:03 by jabecass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	count;

	count = '0';
	while (count <= '9')
	{
		ft_putchar(count);
		count++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/

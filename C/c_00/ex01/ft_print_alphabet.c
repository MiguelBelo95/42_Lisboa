/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:05:22 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/09 14:01:05 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_alphabet(void)
{
	char	l;

	l = 97 ;
	while (l <= 122)
	{
		ft_putchar(l);
		l++;
	}
}
/* int main (void)
{
	ft_print_alphabet();
} */

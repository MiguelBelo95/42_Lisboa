/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:32:17 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/12 18:17:46 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//function that writes combo ft_printcombo
void	ft_combwriter(int a, int b)
{
	char a_01;
	a_01 = a / 10 + 48;
	char a_02;
	a_02= a % 10 + 48;
	char b_01;
	b_01 = b / 10 + 48;
	char b_02;
	b_02 = b % 10 + 48;

	write(1, &a_01, 1);
	write(1, &a_02, 1);
	write(1, " ", 1);
	write(1, &b_01, 1);
	write(1, &b_02, 1);
	if( a < 98)
	{
		write(1, ",  ", 2);
	}
}

//function that iterates through numbers
void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;

	while (a <= 98)
	{
		b = a + 1;

		while (b <= 99)
		{
			ft_combwriter(a, b);
			b++;
		}
		a++;
	}
}



//function main that calls iterator
int main(void)
{
	ft_print_comb2();
	return(0);
}

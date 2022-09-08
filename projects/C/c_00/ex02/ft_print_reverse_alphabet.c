/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:19:11 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/08 18:28:24 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_reverse_alphabet(void)
{
	char l;
	l = 'z';
	while (l >= 'a')
	{
		write(1, &l, 1);
		l--;
	}
	return (0);
}

int main(void)
{
	ft_print_reverse_alphabet();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:05:22 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/09 12:53:14 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a' ;
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
	return (0);
}

/* int main (void)
{
	ft_print_alphabet();
	return 0;
} */

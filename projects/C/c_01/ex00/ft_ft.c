/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:26:46 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/13 15:12:14 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	int num;

	num = 42;
	nbr = &num;
}

int main (void)
{
	int *nbr;

	ft_ft(nbr);
	write(1,&nbr, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:03:33 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/27 19:28:30 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_iterative_factorial(int nb)
{
	int	res;
	
	res = 0;
	if (nb < 0)
		return (0);
	else if (nb < 2 && nb > 0)
		return (nb);
	while (nb > 2)
	{
		res = nb * ft_iterative_factorial(nb - 1);
	}
	return (res);
}
*/

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = nb;
	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i >= 1)
	{
		res *= i;
		i--;
	}
	return (res);
}

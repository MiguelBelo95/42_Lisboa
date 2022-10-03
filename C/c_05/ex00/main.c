/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:46:32 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/27 19:21:32 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}
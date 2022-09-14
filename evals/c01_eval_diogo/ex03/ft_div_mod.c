/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:39:19 by diomarti          #+#    #+#             */
/*   Updated: 2022/09/12 11:39:19 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;
	int	*div;
	int	*mod;

	a = 54;
	b = 10;
	div = &d;
	mod = &m;
	ft_div_mod(a, b, div, mod);
	printf("The division is: %d and the remainder is: %d\n", *div, *mod);
	return (0);
}
*/
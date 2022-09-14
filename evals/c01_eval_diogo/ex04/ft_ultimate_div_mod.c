/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:39:49 by diomarti          #+#    #+#             */
/*   Updated: 2022/09/12 11:39:49 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;
	int	resto;

	divisao = *a / *b;
	resto = *a % *b;
	*a = divisao;
	*b = resto;
}

/*
int	main(void)
{
	int div;
	int mod;
	int *a;
	int *b;

	div = 14;
	mod = 10;
	a = &div;
	b = &mod;
	ft_ultimate_div_mod(a, b);
	printf("The division is: %d, and the mod is: %d\n", div, mod);
	return(0);
}
*/
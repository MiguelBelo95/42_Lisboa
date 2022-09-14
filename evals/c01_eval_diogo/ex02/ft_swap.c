/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:38:50 by diomarti          #+#    #+#             */
/*   Updated: 2022/09/12 11:38:50 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	c = 10;
	d = 54;
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("c is now: %d, and d is now: %d\n", c, d);
	return (0);
}
*/
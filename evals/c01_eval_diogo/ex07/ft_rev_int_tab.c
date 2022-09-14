/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:22:49 by diomarti          #+#    #+#             */
/*   Updated: 2022/09/13 12:30:59 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	c = 0;
	while (c < size)
	{
		i = tab[(size -1)];
		tab[(size - 1)] = tab[c];
		tab[c] = i;
		c++;
		size--;
	}	
}

/*
int	main(void)
{
	int	tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;
	int	i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:04:51 by diomarti          #+#    #+#             */
/*   Updated: 2022/09/12 19:23:16 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	change;

	while (size >= 0)
	{
		a = 0;
		while (a < size -1)
		{
			if (tab[a] > tab[a + 1])
			{
				change = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = change;
			}
			a++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int Array[5] = {1, 5, 3, 6, 5};
	int size = 5;
	ft_sort_int_tab(Array, size);
	printf("%d, %d, %d, %d, %d", Array[0], Array[1], Array[2], Array[3], Array[4]);
}*/
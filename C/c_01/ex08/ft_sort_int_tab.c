/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:03:21 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/17 19:54:48 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		c = 0;
		while (c < size - 1 - i)
		{
			if (tab[c] > tab[c + 1])
			{
				temp = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = temp;
			}
			c++;
		}
		i++;
	}
}

/*int main(void)
{
	int a[] = {9, 5, 4, 3, 1, 2};
	int size = 6;
	
	int count = 0;
	ft_sort_int_tab(a, size);
	while (count < size)
	{
		printf("%i position is: %i\n", count, a[count]);
		count++;
	}
	return(0);
}*/

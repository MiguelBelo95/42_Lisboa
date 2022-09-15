/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:19:13 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/15 11:26:28 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

/*int main(void)
{
	int *a, *b, num_a, num_b;
    num_a = 10;
    num_b = 20;
    a = &num_a;
    b = &num_b;


    printf("value a: %d    value b: %d\n", *a, *b);
    ft_swap(a, b);
    printf("value a: %d    value b: %d", *a, *b);
    return(0);
}*/
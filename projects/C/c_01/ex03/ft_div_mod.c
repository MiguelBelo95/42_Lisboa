/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:56:00 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/15 12:01:36 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int main(void)
{
    int a, b, d, m;
    int *div, *mod;
    a = 578;
    b = 100;
    d = 0;
    m = 0;
    div = &d;
	mod = &m;

    printf("value of div: %d  value of mod: %d\n", *div, *mod);
    ft_div_mod(a, b, div, mod);
    printf("value of div: %d  value of mod: %d\n", *div, *mod);
    return(0);
}*/

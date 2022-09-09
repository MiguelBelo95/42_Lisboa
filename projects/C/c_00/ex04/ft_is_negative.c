/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:12:22 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/09 16:46:32 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	ng;

	if (n >= 0)
	{
		p = 'P';
		write(1, &p, 1);
	}
	else
	{
		ng = 'N';
		write(1, &ng, 1);
	}
}
/* int	main(void)
{
	ft_is_negative(2);
	write(1, " ", 1);
	ft_is_negative(0);
	ft_is_negative(-5);
	return 0;
} */

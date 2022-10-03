/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:42:10 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/03 18:13:12 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int counter = 0;
	int res = nb;

	// returns the value of a power applied to a number
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	while (++counter < power)
	{
		nb = res * nb;
	}
	return (nb);
}
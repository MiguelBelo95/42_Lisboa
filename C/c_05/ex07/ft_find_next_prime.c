/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:54:32 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/04 17:18:08 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}

int ft_is_prime(int nb)
{
	int n;

	n = 1;
	if (nb <= 1)
		return (0);
	while (++n < nb / 2)
	{
		if (nb % n == 0)
			return (0);
	}
	return (1);
}
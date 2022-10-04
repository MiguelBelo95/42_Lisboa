/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:12:45 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/10/04 16:18:10 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	long int root;

	root = 0;
	if (nb < 0)
		return (0);
	while (root * root <= nb)
	{
		printf("root: %ld\n", root);
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
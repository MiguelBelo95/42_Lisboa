/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:56:52 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/09/23 14:23:41 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = -1;
	if (min >= max)
		return (0);
	ptr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		ptr[++i] = min;
		min++;
	}
	return (ptr);
}

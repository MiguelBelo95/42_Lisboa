/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:01:01 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/21 22:21:42 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n_sign;
	int	res;

	n_sign = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-' )
	{
		if (*str == '-')
			n_sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * n_sign);
}

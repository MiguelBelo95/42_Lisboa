/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:34:24 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/22 12:46:21 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	counter;
	int	len;
	int	i;

	counter = 1;
	while (counter < argc)
	{
		len = 0;
		i = 0;
		while (argv[counter][i] != '\0')
		{	
			i++;
			len++;
		}		
		write(1, argv[counter], len);
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:20:52 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/26 17:29:54 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	while (argv[0][len] != '\0' && argc)
	{
		len++;
	}
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}

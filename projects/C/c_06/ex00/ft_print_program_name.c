/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:20:52 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/22 12:34:16 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	while (argv[argc - 1][len] != '\0')
	{
		len++;
	}
	write(1, argv[argc - 1], len);
	return (0);
}

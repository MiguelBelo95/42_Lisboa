/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:48:35 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/22 13:12:54 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	len;

	while (argc > 1)
	{
		len = ft_strlen(argv[argc - 1]);
		write(1, argv[argc - 1], len);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:13:09 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/22 23:33:30 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len_src;
	char	*dest;
	int		i;

	len_src = 0;
	i = -1;
	while (src[len_src])
		len_src++;
	dest = (char *)malloc(sizeof(char) * (len_src));
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

/*int	main(int ac, char **av)
{
	
	printf("initial str: %s, fucking ac: %i\n", av[1], ac);
	
	printf("Copied from dest: %s", ft_strdup(av[1]));
	return (0);
}*/
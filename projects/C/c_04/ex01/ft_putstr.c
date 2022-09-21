/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:56:43 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/21 20:04:26 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write (1, str, len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char *str;

	str = "";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a test string.";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a gianormous test string,
   	testing to see whatever happens in here....";
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}*/

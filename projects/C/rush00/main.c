/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:33:06 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/12 11:34:12 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y);

int  ft_isint(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			return(1);
		}
		i++;
	}
	return (0);
}


int  ft_strtoint (char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;

	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);

}



int main (int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		//accept only digital numbers
		if	(ft_isint(argv[1]) == 1 && ft_isint(argv[2]) == 1)
		{
			x = ft_strtoint(argv[1]);
			y = ft_strtoint(argv[2]);
			rush(x, y);
		}
	}
	return(0);
}

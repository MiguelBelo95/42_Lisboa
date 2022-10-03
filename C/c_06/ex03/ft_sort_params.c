/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:22:55 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/22 19:00:53 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_pr_param(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putchar(av[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

int	main(int ac, char **av)
{
	int		i;
	char	*p_temp;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			p_temp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = p_temp;
			i = 1;
		}
		else
			i++;
	}
	ft_pr_param(ac, av);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:01:23 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/26 18:14:55 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(int size, char *str);
int		ft_strs_char_counter(int size, char **strs);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		n_chars;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	i = 0;
	n_chars = ft_strs_char_counter(size, strs) + ft_strlen(size, sep) + 1;
	res = (char *)malloc(sizeof(char) * n_chars);
	res[0] = 0;
	while (strs[i])
	{
		ft_strcat(res, strs[i]);
		i++;
		if (i < size)
			ft_strcat(res, sep);
	}
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (dest[counter])
		counter++;
	while (src[i])
	{
		dest[counter + i] = src[i];
		i++;
	}
	dest[counter + i] = '\0';
	return (dest);
}

int	ft_strlen(int size, char *str)
{
	int	i;
	int	n_sep;
	int	c_counter;

	c_counter = 0;
	i = 0;
	n_sep = size - 1;
	while (str[i])
		i++;
	c_counter = i * n_sep;
	return (c_counter);
}

int	ft_strs_char_counter(int size, char **strs)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res++;
			j++;
		}
		i++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:01:23 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/25 19:12:58 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
		printf("%c", str[i]);
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	//I need a strs_char_counter function

	//I need a strlen function, both for strs[i] and sep

	//I need a str_cat function to appen strs[i] with sep


char *ft_strcat(char *dest, char *src)
{
	int	i;
	int counter;

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
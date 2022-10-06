#include "ft_strs_to_tab.h"
#include <stdlib.h>
#include <stdio.h>

int ft_str_len(char *str);

char *ft_strdup(char *src)
{
	int i;
	char *d;

	d = (char *)malloc(sizeof(char) * (ft_str_len(src) + 1));

	i = 0;
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	return (d);
}

int ft_str_len(char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *p_strs;

	p_strs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));

	i = 0;
	while (i < ac)
	{
		p_strs[i].size = ft_str_len(av[i]);
		p_strs[i].str = av[i];
		p_strs[i].copy = ft_strdup(av[i]);
		i++;
	}
	p_strs[i].size = 0;
	p_strs[i].str = 0;
	p_strs[i].copy = 0;
	return (p_strs);
}

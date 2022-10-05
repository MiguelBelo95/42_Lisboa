#include <stdio.h>
#include "ft_strs_to_tab.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
char *ft_strdup(char *src);
int ft_str_length(char *str);

int main(int argc, char **argv)
{
	int index;
	struct s_stock_str *structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}
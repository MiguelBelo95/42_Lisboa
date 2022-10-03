#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int i;
	int len_str;
	char temp;
	
	len_str = 0;
	while (str[len_str])
		len_str++;
	len_str--;
	i = 0;
	while(i < len_str)
	{
		temp = str[i];
		str[i] = str[len_str];
		str[len_str] = temp;
		i++;
		len_str--;
	}
	return (str);
}

int main(void)
{
	char str[] = "Batatas fritas com ketchup e maionese";

	printf("%s\n", str);
	printf("%s\n",ft_rev_print(str));
	return (0);
}

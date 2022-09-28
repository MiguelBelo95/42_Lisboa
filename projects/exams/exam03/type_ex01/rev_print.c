#include <unistd.h>

char *ft_rev_print (char *str)
{
	int i = 0;

	while (str[i])
		i++;
	while (i > 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int main(void)
{
	char str[] = " Mu name is Jeff!";

	ft_rev_print(str);
	return (0);
}


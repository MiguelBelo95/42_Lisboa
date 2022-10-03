#include <unistd.h>
#include <stdio.h>

int ft_dcheck(char *str, int i)
{
	int c = i - 1;
	if (i == 0)
		return (0);
	while (c >= 0)
	{
		if (str[c] == str[i])
				return (1);
		c--;
	}
	return (0);
}

int main(int ac, char *av[])
{
	int i = 0;
	int j;

	if (ac < 3)
	{
		printf("Too few arguments!");
		return (1);
	}
	while (av[1])
	{
		j = 0;
		if (ft_dcheck(&av[1][i], i) == 0)
		{
			while(av[2][j])
			{
				if(av[1][i] == av[2][j])
					write(1, &av[1][i], 1);
				j++;
			}
		}
		i++;
	}
	return (0);
}

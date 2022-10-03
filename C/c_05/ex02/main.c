#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int nb = 3;
	int power = 5;

	printf("nb:%d  power:%d\n", nb, power);
	printf("nb:%d\n", ft_iterative_power(nb, power));
	return (0);
}
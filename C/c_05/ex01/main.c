#include <stdio.h>

int ft_recursive_factorial(int);

int main(void)
{
	int nb = 5;

	printf("nb: %i\n", nb);
	printf("Fact of nb: %i", ft_recursive_factorial(nb));

	return (0);
}
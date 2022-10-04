#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int nb = 83;
	printf("nb: %i\n", nb);
	printf("next prime nb: %i\n", ft_find_next_prime(nb));
	return (0);
}
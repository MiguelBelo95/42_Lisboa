#include <stdio.h>

int ft_fibonacci(int index);

/*
int main(void)
{
	int index = 15;

	printf("index: %d\n", index);
	printf("Fib value: %d\n", ft_fibonacci(index));
	return (0);
}
*/

int main(void)
{
	int res;
	int index;

	index = 0;
	while (index < 12)
	{
		res = ft_fibonacci(index);
		printf("%d, ", res);
		index++;
	}
	res = ft_fibonacci(index);
	printf("%d\n", res);
	return (0);
}
#include <unistd.h>

void	ft_putchar(int);

int main(void)
{
	int i;
	
	i = 1;
	while(i <= 100)
	{
		if ( i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if ( i % 3 == 0)
			write (1, "fizz", 4);
		else if ( i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putchar(i);
		write(1, "\n", 1);
		i++;
	}


	return (0);
}


void	ft_putchar(int n)
{
	char mod;
	char div;

	if (n > 10)
	{
		mod = n % 10 + 48;
		div = n / 10 + 48;
		write(1, &div, 1);
		write(1, &mod, 1);
	}
	else
	{
		mod = n + 48;
		write (1, &mod, 1);
	}
}

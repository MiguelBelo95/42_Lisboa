#include <unistd.h>

int main(void)
{
	int i;
	char a;

	i = 0;
	while (i <= 25)
	{
		if ( i % 2 == 0)
		{
			a = 'a' + i;
			write(1, &a, 1);
		}
		else
		{
			a = 'A' + i;
			write (1, &a, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

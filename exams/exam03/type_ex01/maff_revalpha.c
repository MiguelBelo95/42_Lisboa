#include <unistd.h>

int main(void)
{
	int i;
	char c;
	i = 25;
	while (i >= 0)
	{
		if (i % 2 ==0)
		{
			c = 'A' + i;
			write(1, &c, 1);
		}
		else
		{
			c = 'a' + i;
			write(1, &c, 1);
		}
		i--;
	}
	write (1, "\n", 1);
	return (0);
}

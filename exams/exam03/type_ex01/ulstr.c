#include <stdio.h>
#include <unistd.h>

char *ft_ulstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}



int main(void)
{
	char abc[] = "Este Gajo E Um Ze  Toninho";
	
	printf("%s\n", abc);
	ft_ulstr(abc);
	printf("%s\n", abc);
	return 0;
}


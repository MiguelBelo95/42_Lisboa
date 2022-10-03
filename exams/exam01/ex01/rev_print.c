#include <unistd.h>
/*
//returns a pointer, receives a pointer
char *  ft_rev_print (char *str)
{
    //get size of the string    
    int size;
    size = 0;
    while (str[size] != '\0')
    {
        size++;
    }

    //display or print in reverese order
    while (size - 1 >= 0)
    {
        write(1, &str[size], 1);
        size--;
    }
    return str;
}*/


int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main(void)
{
    /*char *name;
    name = "Jose Miguel Belo";*/
    char name[] = "Jose Miguel Belo";

    ft_rev_print(name);
    return (0);
}
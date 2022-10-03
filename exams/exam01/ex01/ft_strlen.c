#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    printf("%i", i);
    return (i);
}


int main(void)
{
    char *asdf;
    asdf = "Vou escrever uma frase. Siiiike";

    ft_strlen(asdf);
    return (0);
}

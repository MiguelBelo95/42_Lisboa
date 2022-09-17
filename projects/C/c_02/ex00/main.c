#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char dest[1];
    char src[] = "Hello world!";

    ft_strcpy(dest, src);

    printf("%s\n", dest);
    return (0);    
}
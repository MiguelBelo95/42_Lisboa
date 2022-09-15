#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    //counts nr of chars and returns that int
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}



int main(void)
{
    char *str;
    str = "My name is Jeff!"; 

    printf("%d\n", ft_strlen(str));
    return(0);
}
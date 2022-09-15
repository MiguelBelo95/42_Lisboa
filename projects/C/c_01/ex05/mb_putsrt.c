#include <stdio.h>
#include <unistd.h>

//First way, iterating through the string until we reach the end of the str "\n"

void    ft_putstr(char *str)
{
    //writes a str of chars
    int i = 0; //counter
    while(str[i] != '\0') //access char in position i in the str
    {
        write(1, &str[i], 1);
        i++;
    }
}


//Second way, count the bytes(length) of the string, and just write that length

/*void ft_putstr(char *str)
{
    int len = 0;
    while(*(str + len) != '\0') //value dereferenced different than '\0'
        len++;
    write(1, str, len);
}*/


int main(void)
{
    char *str;

    str = "Benfica";

    ft_putstr(str);
    return (0);
}
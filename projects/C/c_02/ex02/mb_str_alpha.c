#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;

    while( str[len] != '\0')
    {
        len++;
    }
    return len;
}


int ft_str_is_alpha(char *str)
{
    //iterate over the str
    int i = 0;
    int n = ft_strlen(str);
    if (str[i] == '\0')
    {
        return(1);
    }
    while (i < n)
    {
        if (str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123)
        {
           i++; //is alpha, advance
        }
        else { //not alpha, stop loop and return 0
            return (0);
        }
    }
    return(1); //out of Loop, str is only alphabetical
}
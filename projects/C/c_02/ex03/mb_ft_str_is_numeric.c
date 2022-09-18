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

int ft_str_is_numeric(char *str)
{
    int i = 0; //iterator for str
    
    int n = ft_strlen(str);
    while (i < n)
    {
        if (str[i] > 47 && str[i] < 58)
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}
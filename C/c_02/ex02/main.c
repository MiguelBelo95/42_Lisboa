#include <stdio.h>

int ft_strlen(char *str);
int ft_str_is_alpha(char *str);

int main(void)
{
    char str1[] = "Portoemerda";
    char str2[] = "23454536456";
    char str3[] = "decoyaquimesmo";

    printf("value of n1: %i\n", ft_str_is_alpha(str1));
    printf("value of n2: %i\n", ft_str_is_alpha(str2));
    printf("value of n3: %i\n", ft_str_is_alpha(str3));

    return (0);
}
#include <stdio.h>

char    *ft_strncpy(char *, char *, unsigned int);


int main(void)
{
    int n = 4;
    char str1[] = "Benfica";
    char str2[n];

    printf("%s\n", str1);
    printf("%s\n", str2);

    ft_strncpy(str2, str1, n);
    printf("%s\n", str2);
    return (0);
}
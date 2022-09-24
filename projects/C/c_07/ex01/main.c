#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
    int *range;
    int i;

    i = -1;
    range = ft_range(-5, 9);
    while (++i < 14)
        printf("%d\n", range[i]);
    return (0);
}
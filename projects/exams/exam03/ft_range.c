#include <stdio.h>
#include <stdlib.h>

int        ft_abs(int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int	*ft_range(int start, int end)
{
	int *ptr;
	int i;
	int mult = 1;
	int size;

	i = 0;
	size = ft_abs(end - start) + 1;
	ptr = (int *)malloc(sizeof(int) * size);
	
	if ( start > end)
		mult = -1;

	while (i < size)
	{
		ptr[i] = start + (i * mult);
		i++;
	}
	return (ptr);
}

int        main(void)
{
    int *tab;
    int i = 0;
    int start = 0;
    int end = 16 ;
    int size = ft_abs(end - start) + 1;

    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i, ", tab[i]);
    i++;
    }
}



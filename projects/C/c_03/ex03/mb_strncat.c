#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int i_src = 0;

    while (dest[i] != '\0')
        i++;
    
    while ((src[i_src] != '\0' && i_src < nb))
    {
        dest[i] = src[i_src];
        i++;
        i_src++;
    }
    dest[i] = '\0';
    return dest;
}

int	main(void)
{
	char	*src = "world";
	char	dest[15] = "Hello ";
	char	real_dest[15] = "Hello ";

	printf("%s\n", ft_strncat(dest, src, 4));
	printf("%s\n", strncat(real_dest, src, 4));
	return (0);
}
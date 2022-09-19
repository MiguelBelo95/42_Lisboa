#include <stdio.h>
#include <stdlib.h>

int ft_str_is_printable(char *);


int main(void)
{
    char *str1;
    char *str2;
    char *str3;
    char *str4;

    str1 = calloc(10, sizeof(char)); //calloc for arrays & data structs. 10 of size chars. 10 bytes;
    str2 = calloc(10, sizeof(char));
    str3 = calloc(10, sizeof(char));
    str4 = calloc(10, sizeof(char));

    str1 = "          ";
	str2 = "BCDEFGHI";
	str3 = "ABCDFGHI";
	str4 = "ABCDEFGH";

    printf("str1: %s, is_printable: %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s, is_printable: %d\n", str2, ft_str_is_printable(str2));
	printf("str3: %s, is_printable: %d\n", str3, ft_str_is_printable(str3));
	printf("str4: %s, is_printable: %d\n", str4, ft_str_is_printable(str4));

    return(0);
}

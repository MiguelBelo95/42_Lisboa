#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    temp = *a; //value a of 578
    *a = *a / *b; //new a of 5
    *b = temp % *b;
}



int main(void)
{
    int *a, *b, num_a, num_b;
    num_a = 578;
    num_b = 100;
    a = &num_a; //pointer a gets address of num_a, hence *a = 578
    b = &num_b; 

    printf("value on *a: %d  value on *b: %d\n", *a, *b);
    ft_ultimate_div_mod(a, b);
    printf("value on *a: %d  value on *b: %d", *a, *b);
    return (0);
}
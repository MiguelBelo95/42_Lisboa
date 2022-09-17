#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    //swap nums of a and b
    int temp;
    temp = *a; //value of A in temp
    *a = *b;
    *b = temp;
}



int main(void)
{
    int *a, *b, num_a, num_b;
    num_a = 1337;
    num_b = 42;
    a = &num_a;
    b = &num_b;

    printf("num of A: %i  num of B: %i\n", *a, *b);
    ft_swap(a, b);
    printf("num of A: %i  num of B: %i ", *a, *b);
    return (0);
}
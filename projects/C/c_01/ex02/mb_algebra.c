#include <stdio.h>

/*void ft_swap(int *a, int *b) //receives two pointer
{
    int temp;
    temp = *a; // temp receives dereference value of A
    *a = *b; //address of A will receive dereferenced value of B
    *b = temp; //address of B will receive temp value (initial A)

}*/

void ft_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b; // (a + b) - b = a
    *a = *a - *b; // (a + b) - (a + b - b) = b
}


int main(void)
{
    /*int *a;
    int *b;
    int num_a = 1337;
    int num_b = 42;

    a = &num_a;
    b = &num_b;

    printf("value a: %d    value b: %d\n", *a, *b);
    ft_swap(a, b);
    printf("value a: %d    value b: %d", *a, *b);
    return(0);*/

    int *a, *b, num_a, num_b;
    num_a = 10;
    num_b = 20;
    a = &num_a;
    b = &num_b;


    printf("value a: %d    value b: %d\n", *a, *b);
    ft_swap(a, b);
    printf("value a: %d    value b: %d", *a, *b);
    return(0);




}


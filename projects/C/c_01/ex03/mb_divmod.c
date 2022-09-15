#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}



int main(void)
{
    int a, b, d, m; //I need to create int d and m to link the address of the pointers
    int *div, *mod;
    a = 578;
    b = 100;
    d = 0;
    m = 0;
    div = &d; //pointers receive the address on where to store, otherwise it gives segm fault
    mod = &m;
    
    printf("value of div: %d  value of mod: %d\n", *div, *mod);
    ft_div_mod(a, b, div, mod);
    printf("value of div: %d  value of mod: %d\n", *div, *mod);
    return(0);
}
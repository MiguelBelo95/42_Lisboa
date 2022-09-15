#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i; //iterator for the bubble sort
    int swap; 

    //Bubble sort. Two loops. First loop puts the biggest int in the last position
    //Then, we decrease the array size by 1, to look for the second biggest number and put them in the 2nd last position
    //And so on though the size'th length of the array until size reaches zero.
    while( size >= 0)
    {
        i = 0; //iterator starts and restarts to zero on each "decrease of array size"

        while( i < size -1) // ith increases, size decreases;
        {
            if(tab[i] > tab[i + 1]) //position of i through all array
            {
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swap;
            }
            i++;
        }
        size--; //decrease array size by one, since last number is already sorted
    }

}


int main(void)
{
    int a[] = {5, 3, 1, 2, 7, 14, 4};
    int size = 7;
    int c = 0; //iterator for the length of array

    ft_sort_int_tab(a, size);
    while( c < size)
    {
        printf("%i, ", a[c]);
        c++;
    }
    printf("\n");
    return(0);
}
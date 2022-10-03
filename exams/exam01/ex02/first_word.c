#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0; //initialise the counter through the 1st position of the argv

    //only if I have two inputs
    if(ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        while(av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return (0);
}
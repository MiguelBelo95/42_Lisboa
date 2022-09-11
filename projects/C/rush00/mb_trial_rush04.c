/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exrush04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelbelo <miguelbelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:08:51 by miguelbelo        #+#    #+#             */
/*   Updated: 2022/09/11 12:54:49 by miguelbelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// declare function prototype
void ft_putchar(char c);

// Funtion that writes a line (for 1st and last line)
void write_line(char l, char m, char r, int size)
{
    // initialize counter to iterate through the line
    int counter;
    counter = 1;
    // write first letter
    ft_putchar(l);

    // line from position 1 until size -1 (middle section of line)
    while (counter < size - 1)
    {
        ft_putchar(m);
        counter++;
    }

    // Last character of the line
    if (size != 1) // size has to be diff than 1 to have 2 chars per array
    {
        ft_putchar(r);
    }
    ft_putchar('\n');
}

// Function that writes the body of the rectangle except first and last line

void write_body(char c, int size)
{
    // init counter
    int counter;

    counter = 0;
    while (counter < size)
    {
        if (counter == 0 || counter == size - 1)
        {
            ft_putchar(c);
        }
        else
        {
            ft_putchar(' ');
        }
        counter++;
    }
    ft_putchar('\n');
}

// Calling the functions
void rush(int x, int y)
{
    int count;

    count = 1;
    // Only positive numbers
    if (x > 0 && y > 0)
    {
        write_line('A', 'B', 'C', x);
        while (count < y - 1)
        {
            write_body('B', x);
            count++;
        }
        if (y != 1)
        {
            write_line('C', 'B', 'A', x);
        }
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_ft_print_comb2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmigue <josmigue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:52:12 by josmigue          #+#    #+#             */
/*   Updated: 2022/09/11 20:23:05 by josmigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(char a, char b, char c, char d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);

    if(a != '9' && b != '8')
    {
        write(1, ", ", 2);
    }
}


void ft_print_comb2(void)
{
    char    a;
    char    b;
    char    c;
    char    d;

    a = 0;
    b = 0;
    c = 0;
    d = 0;

    while( a < 58 && b < 57) //meaning less than 10 and 9 in Ascii Dec value 
    {
        //Milhares
        
        while( b <= '9')
        {
            while( c <= '9')
            {
                while( d <= '9')
                {
                    ft_print(a, b, c, d);
                    d++;
                }
                c++;
            }
            b++;
        }

        a++;
    }
}


int main(void)
{
    ft_print_comb2();
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-roo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 12:26:39 by cvan-roo      #+#    #+#                 */
/*   Updated: 2023/06/12 12:22:48 by cvan-roo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// needs 2 arrays
void ft_is_numeralsystem(char *haystack)
{
    int i; 

    i = 0;
    while (haystack[i] != "\0")
    {
        if(haystack[i] >= 48 && haystack[i] >= 55)
        {
            //number 1-8
        }
        if(haystack[i] >= 48 && haystack[i] >= 57)
        {
            //number 1-10
        } 
        if((haystack[i] >= 65 && haystack[i] >= 70) || (haystack[i] >= 97 && haystack[i] >= 102))
        {
            //number has A-F
        }
        i++;
    }
}

void ft_putnbr_base(int nbr, char *base)
{
    
}

int main()
{
    return 0;
}

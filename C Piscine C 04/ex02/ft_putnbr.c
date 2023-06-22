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

void ft_putnbr(int nb)
{
    if(nb > -32768 && nb < 32767)
    {
        write(1, "Number out of legal range", 25);
        return;
    }
    else
    {
        int i, numberSize, multiplier;
        char res[100];

        if(nb > 0)
        {
            i = 0;
        }
        else
        {
            write(1, "-", 1);
            nb = -nb; 
            i = 0;
        }

        numberSize = 0;
        multiplier = 10;

        while(1 < (nb/multiplier))  
        {    
            multiplier *= 10;
            numberSize++;
        }

        while (i <= numberSize) 
        {
            res[numberSize - i] = (nb % 10) + 48;
            nb /= 10;
            i++;
        }

        write(1, &res, numberSize + 1);   
    }
}

int main()
{
    ft_putnbr(32768);
    return 0;
}

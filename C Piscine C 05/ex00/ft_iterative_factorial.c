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
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;

    if(nb <= 1)
    {
        return 1;
    }
    else
    {
        res = nb;
        while (nb > 1)
        {
            nb--;
            res *= nb;
        }
        return res;
    }
}

int main()
{
    int example = 7;
    int res = ft_iterative_factorial(example);
    printf("%d", res);
    return 0;
}

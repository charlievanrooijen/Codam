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

int ft_recursive_factorial(int nb)
{
    int res = 1;

    if (nb > 1)
    {    
        res = nb;
        nb--;
        res *= ft_recursive_factorial(nb);
    }  
    return res;
}

int main()
{
    int example = 7;
    int res = ft_recursive_factorial(example);
    printf("%d", res);
    return 0;
}

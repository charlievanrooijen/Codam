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

int ft_fibonacci(int index)
{
    int num[2] = {0, 1};
    int i, sum;

    if(index == 0)
    {
        return 0;
    }

    if(index < 0)
    {
        return -1;
    }

    i = 3;
    while(i <= index)
    {
        sum = num[0] + num[1];
        num[0] = num[1];
        num[1] = sum;
        i++;
    }

    return num[1];
}


int main()
{
    int index = 13;
    int res = ft_fibonacci(index);
    printf("\n %d \n \n ", res);
}

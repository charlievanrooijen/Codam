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

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return NULL;
    }
    
    int size = max - min;
    int *arr = (int *)malloc(size * sizeof(int));

    int i = 0;
    while (i <= size)
    {
        arr[i] = min++;
        i++;
    }

    return arr;
}

int main()
{
    int start = 1;
    int end = 90;

    int *range = ft_range(start, end);
    if (range != NULL)
    {
        int i = 0;
        while (i <= (end - start))
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");

        free(range);
    }
    else
    {
        printf("Invalid range or memory allocation failed.\n");
    }

    return 0;
}

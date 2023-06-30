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

int ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        *range = NULL;
        return 0;
    }
    
    int size = max - min;
    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL)
    {
        return -1;
    }

    int i = 0;
    while (i <= size)
    {
        (*range)[i] = min++;
        i++;
    }

    return size;
}

int main()
{
    int start = 1;
    int end = 90;

    int *range;
    int size = ft_ultimate_range(&range, start, end);

    if (size >= 0)
    {
        int i = 0;
        while (i <= size)
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

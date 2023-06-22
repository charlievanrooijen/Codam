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

void ft_sort_int_tab(int *tab, int size)
{
    int newtab[size];
    int i;
    int j;
    int *mem;
    
    i = 0;
    while(i < size)
    {
        j = 0;
        mem = &tab[0];
        
        while(j < size)
        {
            if(tab[j] > *mem)
            {
                mem = &tab[j];
            }
            j++;
        }
        
        newtab[i] = *mem;
        *mem = 0;
        i++;
    }

    i = 0;
    while(i < size)
    {
        tab[i] = newtab[i];
        i++;
    }
}

int main()
{
    int tab[] = {2, 1, 4, 3};
    ft_sort_int_tab(tab, 4);
}
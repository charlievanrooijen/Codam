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

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int mem;

    i = 0;
    while(i < (size / 2))
    {
        mem = tab[i];
        tab[i] = tab[size - (i + 1)];
        tab[size - (i + 1)] = mem;
        i++;
    }
}
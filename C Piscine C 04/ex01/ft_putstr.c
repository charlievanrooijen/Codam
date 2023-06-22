/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-roo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 12:26:39 by cvan-roo      #+#    #+#                 */
/*   Updated: 2023/06/12 12:22:48 by cvan-roo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}
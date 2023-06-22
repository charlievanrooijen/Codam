/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-roo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 12:24:35 by cvan-roo      #+#    #+#                 */
/*   Updated: 2023/06/14 14:43:10 by cvan-roo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_string_length(char *str)
{
    int i;

    i = 0;
    while(str[i] != *"\0")
    {
        i++;
    }
    return i;
}

char *ft_strcat(char *dest, char *src)
{
    int i, length;
    
    length = ft_string_length(dest);
    i = 0;
    while(src[i] != *"\0")
    {
        dest[(i + length)] += src[i];
        i++;
    }

    return dest;
}

int main()
{
    char str1[] = "ABC";
    char str2[] = "DEFG";

    write(1, ft_strcat(str1, str2), 10);
    return 0;
}
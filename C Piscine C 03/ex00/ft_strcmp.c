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

int ft_strcmp(char *s1, char *s2)
{
    char char1, char2;
    int i, score; 

    i = 0;
    score = 0;
    while (s1[i] != *"\0" && s2[i] != *"\0")
    {
        if(s1[i] > s2[i])
        {
            score++;
        }
        else if(s1[i] < s2[i])
        {
            score--;
        }
        i++;
    }
    return score;
}

int main()
{
    char s1p[10] = "World";
    char s2p[10] = "Hello";
    char test = ft_strcmp(s1p, s2p) + 48;
    write(1, &test, 1);
}
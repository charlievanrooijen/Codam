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

void printString(const char* str)
{
    size_t len = 0;
    const char* ptr = str;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }

    write(1, str, len);
}

int main(int argc, char* argv[])
{
    printString(argv[0]);
    write(1, "\n", 1);
    return 0;
}

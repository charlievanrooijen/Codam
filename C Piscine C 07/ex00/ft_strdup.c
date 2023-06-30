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
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

char *ft_strdup(const char *str)
{
    size_t length = ft_strlen(str);

    char *duplicate = (char *)malloc((length + 1) * sizeof(char));
    if (duplicate == NULL)
    {
        return NULL; // Memory allocation failed
    }

    size_t i = 0;
    while (i <= length)
    {
        duplicate[i] = str[i];
        i++;
    }

    return duplicate;
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = ft_strlen(dest);
    size_t i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return dest;
}

int main()
{
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
}

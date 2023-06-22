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

char *ft_strstr(char *haystack, char *needle)
{
	int i, j, offset;
	
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		if(haystack[i] == needle[0])
		{   
			offset = i;  
		}
		i++;
	}
	return haystack + offset;
}
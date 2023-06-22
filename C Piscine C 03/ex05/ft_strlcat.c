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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i, destlength;
	char res[size];

	i = 0;
	destlength = ft_string_length(dest);
	
	size -= (destlength + 1);
	while(i < size)
	{
		dest[i + destlength] = src[i];    
		i++;    
	}   

	return 1;
}
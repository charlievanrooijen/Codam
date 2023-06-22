/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-roo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 12:26:09 by cvan-roo      #+#    #+#                 */
/*   Updated: 2023/06/08 12:26:11 by cvan-roo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	letter;
	int		index;

	index = 0;
	while (index < 10)
	{
		letter = (index + 48);
		write(1, &letter, 1);
		index++;
	}
}

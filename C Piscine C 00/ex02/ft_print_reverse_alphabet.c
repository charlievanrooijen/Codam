/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-roo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 12:25:35 by cvan-roo      #+#    #+#                 */
/*   Updated: 2023/06/08 12:25:37 by cvan-roo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		index;
	char	letter;

	index = 0;
	while (index < 26)
	{
		letter = (index - 122);
		write(1, &letter, 1);
		index = index + 1;
	}
}

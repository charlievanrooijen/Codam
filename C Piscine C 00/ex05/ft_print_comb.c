/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-roo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 12:26:39 by cvan-roo      #+#    #+#                 */
/*   Updated: 2023/06/08 12:26:40 by cvan-roo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int input[])
{
	int		i;
	char	character;

	i = 0;
	while (i < 3)
	{
		character = (input[i] + 48);
		write(1, &character, 1);
		i++;
	}
	write(1, ", ", 1);
}

void	ft_print_comb(void)
{
	int		i;
	int		x;
	int		j;
	int		input[3];

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			x = j + 1;
			while (x < 10 && x > j)
			{
				input[0] = i;
				input[1] = j;
				input[2] = x;
				ft_print_array(input);
				x++;
			}
			j++;
		}
		i++;
	}
}

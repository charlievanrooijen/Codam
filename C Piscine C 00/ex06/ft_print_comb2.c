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

void	ft_print_array(int input[])
{
	int		i;
	char	character;

	i = 0;
	while (i < 4	)
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
	int		j;
	int		x;
	int		y;
	int		print[5];

	i = 0;
	while (i < 1)
	{  
		j = 0;
		while (j < 10)
		{
			x = 0;
			while (x < 10)
			{   
				y = 0;
				while (y < 10)
				{   
					if (i != x && j != y)
					{
						print[0] = i;
						print[1] = j;
						print[2] = y;
						print[3] = x;
						ft_print_array(print);
					}
					y++;
				}
				x++;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb();
}
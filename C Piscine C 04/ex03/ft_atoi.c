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

void ft_print_array(char *array, int length)
{
    int i;

    i = 0;
    while (i < length)
    {
        write(1, &array[i], 1);
        i++;
    }
}

void ft_atoi(char *str)
{
    int i, j, plusCount, minusCount;
    char res[50];

    j = minusCount = plusCount = i = 0;
    while (str[i] != '\0')
    {
        
        if(str[i] == ' ')
        {
            plusCount++;
        }
        else
        {
            if(str[i] == '+')
            {
                plusCount++;
            }

            if(str[i] == '-')
            {
                minusCount++;
            }

            if(str[i] >= 48 && str[i] <= 57)
            {
                res[j] = str[i];
                j++;
            }

            // check if current res is a Digit or Letter 
            if(((str[i + 1] >= 'a' && str[i + 1] <= 'z') || (str[i + 1] >= 'A' && str[i + 1] <= 'Z')))
            {
                if(minusCount % 2 == 1) 
                {
                    write(1, "-", 1);
                }
                ft_print_array(res, j);
                break;
            } 
        }
        i++;
    }
}

int main()
{
    ft_atoi(" -+--------+1234asdasdas867");
    return 0;
}

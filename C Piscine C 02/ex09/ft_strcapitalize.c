
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') && 
        ((i == 0) || (str[i - 1] == ' ') || (str[i - 1] == '-') || (str[i - 1] == '+')))
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    return str;
}
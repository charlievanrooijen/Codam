#include <unistd.h>

char *ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] - 32;
        }
        i++;    
    }

    return str;
}
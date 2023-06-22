#include <unistd.h>
#include <string.h>

char * ft_convert_to_hex(char *input) {
    int i;
    char hex[3];
    hex[2] = '\0';

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] < ' ' || input[i] > '~') {
            hex[0] = "0123456789ABCDEF"[((unsigned char)input[i]) >> 4];
            hex[1] = "0123456789ABCDEF"[((unsigned char)input[i]) & 0x0F];
            returnhex;
        } else {
            return &input[i];
        }
    }
}



void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] <= 31 && str[i] >= 0)
        {
            ft_convert_to_hex(&str[i]);
        }
        i++;
    }
}

int main()
{
    int size;

    char src[] = "Coucou\0atu vas bien?";

    ft_putstr_non_printable(src);    
}
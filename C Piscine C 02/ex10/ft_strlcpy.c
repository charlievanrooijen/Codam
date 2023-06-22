#include <unistd.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while(src[i] != '\0' && i < size)
    {
        dest[i] = src[i];
        i++;
    }

    return size;
}

int main()
{
    int size;

    char src[] = "YES";
    char dest[] = "NOP";
    size = 4;

    ft_strlcpy(dest, src, size);
    
    write(1, &dest, 4);
}
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t src_len = ft_strlen(src);
    size_t i;

    if (size == 0)
        return src_len;

    for (i = 0; i < size - 1 && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return src_len;
}

int main()
{
    char s1[10] = "dest";
    char s2[] = "ination";
    
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    
    size_t res = ft_strlcpy(s1, s2, sizeof(s1));
    
    printf("res = %zu\n", res);
    printf("s1 after copy = %s\n", s1);

    return 0;
}

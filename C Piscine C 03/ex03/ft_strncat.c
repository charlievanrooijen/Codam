#include <unistd.h>
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

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = ft_strlen(dest);
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}

int main()
{
    char s1[20] = "dest";
    char s2[] = "ination";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    ft_strncat(s1, s2, sizeof(s1) - ft_strlen(s1) - 1);

    printf("res = %s\n", s1);
    printf("s1 after concatenation = %s\n", s1);

    return 0;
}

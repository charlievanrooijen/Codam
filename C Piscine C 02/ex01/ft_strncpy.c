#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, char n)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		if(i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	return dest;
}
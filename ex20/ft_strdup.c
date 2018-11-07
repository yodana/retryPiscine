#include <stdlib.h>

int     ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    if (!(dest = (char*)malloc(sizeof(*src) * ft_strlen(src) + 1)))
	return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

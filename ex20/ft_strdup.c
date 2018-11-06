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
    dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
#include <stdlib.h>

int    *ft_range(int min, int max)
{
    int *tab;
    int i;
    
    i = 0;
    if (min >= max)
        return (0);
    if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
        return (0);
    while (min <= max)
        tab[i++] = min++;
    return (tab);
}

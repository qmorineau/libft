#include "libft.h"

char    *strcat(char *dest, const char *src)
{
    int i;
    int j;

    j = ft_strlen(dest);
    i = 0;
    while (src[i])
    {
        dest[i +j] = src[i];
        i++;
    }
    dest[i + j] = '\0';
    return (dest);
}
#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (n > 0 && src[i])
    {
        dest[i] = src[i];
        n--;
        i++;
    }
    while (n > 0)
    {
        dest[i] = '\0';
        n--;
        i++;
    }
    return (dest);
}
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *p;

    p = 0;
    if (!s)
        return (p);
    i = ft_strlen((char *) s) + 1;
    while (i >= 0)
    {
        if (s[i] == c)
        {
            p = (char *) &s[i];
            return (p);
        }
        i--;
    }
    return (p);
}
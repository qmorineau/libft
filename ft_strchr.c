#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *p;

    p = 0;
    if (!s)
        return (p);
    i = 0;
    while (s[i])
    {
        if (c == s[i])
        {
            p = (char *) &s[i];
            return (p);
        }
        i++;
    }
    if (c == s[i])
        p = (char *) &s[i];
    return (p);
}
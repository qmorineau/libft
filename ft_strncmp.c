#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && n > 0)
    {
        i++;
        n--;
    }
    return (s1[i - 1] - s2[i - 1]);
}
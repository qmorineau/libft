char    *strcpy(char *dst, const char *src)
{
    int i;
    
    if (!dst || !src)
        return (0);
    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
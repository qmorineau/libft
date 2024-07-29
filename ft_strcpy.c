char    *strcpy(char *dest, const char *src)
{
    int i;
    
    if (!dest || !src)
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int ft_isascii(int c)
{
    if ((unsigned) c < 128 && (unsigned) c != 0)
        return (1);
    return (0);
}
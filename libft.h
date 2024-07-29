#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
void    ft_putnbr(int n);
size_t ft_strlen(char *str);
char    *strcpy(char *dst, const char *src);
//strncpy
//strcat
//strncat
//strlcat
//strcmp
//strncmp
//atoi
//itoa
//strjoin
//strstr
//strsplit
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
#endif
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
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncpy(char *dest, const char *src, size_t n);
//strcat
//strncat
//strlcat
int ft_strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
//atoi
//itoa
//strjoin
//strstr
//strsplit
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
#endif
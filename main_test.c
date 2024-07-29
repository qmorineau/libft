#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char *str = "abc123ABC";
    printf("strlen : libc: %ld, libft: %ld\n", strlen(str), ft_strlen(str));
    printf("toupper : libc: %c, libft: %c\n", toupper(str[0]), ft_toupper(str[0]));
    printf("tolower : libc: %c, libft: %c\n", tolower(str[6]), ft_tolower(str[6]));
    printf("isalpha : libc: %d, libft: %d\n", isalpha(str[4]), ft_isalpha(str[4]));
    printf("isdigit : libc: %d, libft: %d\n", isdigit(str[3]), ft_isdigit(str[3]));
    printf("isalnum : libc: %d, libft: %d\n", isalnum(str[4]), ft_isalnum(str[4]));
    printf("isascii : libc: %d, libft: %d\n", isascii(127), ft_isascii(127));
    printf("isprint : libc: %d, libft: %d\n", isprint(32), ft_isprint(32));
    printf("strchr : libc: %s, libft: %s\n", strchr(str, 'c'), ft_strchr(str, 'c'));
}
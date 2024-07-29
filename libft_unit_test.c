#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

//Char Functions
void test_isalpha(void)
{
    int c = -20;
    printf("    isalpha: ");
    while(c <= 200)
    {
        if (isalpha(c) == 0)
            assert(ft_isalpha(c) == 0);
        else
            assert(ft_isalpha(c) > 0);
        c++;
    }
    printf("Succeed !\n");
}
void test_isdigit(void)
{
    int c = -20;
    printf("    isdigit: ");
    while(c <= 200)
    {
        if (isdigit(c) == 0)
            assert(ft_isdigit(c) == 0);
        else
            assert(ft_isdigit(c) > 0);
        c++;
    }
    printf("Succeed !\n");
}
void test_isalnum(void)
{
    int c = -20;
    printf("    isalnum: ");
    while(c <= 200)
    {
        if (isalnum(c) == 0)
            assert(ft_isalnum(c) == 0);
        else
            assert(ft_isalnum(c) > 0);
        c++;
    }
    printf("Succeed !\n");
}
void test_isprint(void)
{
    int c = -20;
    printf("    isprint: ");
    while(c <= 200)
    {
        if (isprint(c) == 0)
            assert(ft_isprint(c) == 0);
        else
            assert(ft_isprint(c) > 0);
        c++;
    }
    printf("Succeed !\n");
}
void test_isascii(void)
{
    int c = -20;
    printf("    isascii: ");
    while(c <= 200)
    {
        if (isascii(c) == 0)
            assert(ft_isascii(c) == 0);
        else
            assert(ft_isascii(c) > 0);
        c++;
    }
    printf("Succeed !\n");
}
void test_tolower(void)
{
    int c = 0;
    printf("    tolower: ");
    while(c <= 200)
    {
        assert(tolower(c) == ft_tolower(c));
        c++;
    }
    printf("Succeed !\n");
}
void test_toupper(void)
{
    int c = 0;
    printf("    toupper: ");
    while(c <= 200)
    {
        assert(toupper(c) == ft_toupper(c));
        c++;
    }
    printf("Succeed !\n");
}
void test_char_function(void)
{
    printf("Test Char Functions :\n");
    test_isalpha();
    test_isdigit();
    test_isalnum();
    test_isprint();
    test_isascii();
    test_tolower();
    test_toupper();
}
//String Functions
void test_strlen(void)
{
    printf("    strlen: ");
    char a[] = "abcdefghijklmno";
    char b[] = " ";
    char c[] = "";
    char d[] = "\0\0";
    assert(strlen(a) == ft_strlen(a));
    assert(strlen(b) == ft_strlen(b));
    assert(strlen(c) == ft_strlen(c));
    assert(strlen(d) == ft_strlen(d));
    printf(" Succeed !\n");
}
void test_strcpy(void)
{
    printf("    strcpy: ");
    char dst[16];
    char a[] = "abcdefghijklmno";
    char b[] = " ";
    char c[] = "";
    char d[] = "\0\0";
    char *e = NULL;
    printf(" Not Done !\n");
}
void test_strncpy(void)
{

}
void test_strcat(void)
{

}
void test_strncat(void)
{

}
void test_strlcat(void)
{

}
void test_strcmp(void)
{

}
void test_strncmp(void)
{

}
void test_strjoin(void)
{

}
void test_strstr(void)
{

}
void test_strchr(void)
{

}
void test_strrchr(void)
{

}
void test_str_function(void)
{
    printf("Test String Functions :\n");
    test_strlen();
    test_strcpy();
    test_strncpy();
    test_strcat();
    test_strncat();
    test_strlcat();
    test_strcmp();
    test_strncmp();
    test_strjoin();
    test_strstr();
    test_strchr();
    test_strrchr();
}
//Standard Output Functions
void test_putchar(void)
{

}
void test_putstr(void)
{

}
void test_putnbr(void)
{

}
//Transform Functions
void test_atoi(void)
{

}
void test_itoa(void)
{

}
//Malloc Functions
void test_strdup(void)
{

}
// Main
int main(void)
{
    //Test Char Functions
    test_char_function();
    test_str_function();
    return (0);
}
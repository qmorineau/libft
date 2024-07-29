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
    char s[16];
    char a[] = "abcdefghijklmno";
    char b[] = " ";
    char c[] = "";
    char d[] = "\0\0";
    assert(strcpy(s, a) == ft_strcpy(s, a));
    assert(strcpy(s, b) == ft_strcpy(s, b));
    assert(strcpy(s, c) == ft_strcpy(s, c));
    assert(strcpy(s, d) == ft_strcpy(s, d));
    printf(" Succeed ! pas sûr aussi\n");
}
void test_strncpy(void)
{
    printf("    strncpy: ");
    size_t x = 0;
    size_t y = 15;
    size_t z = 1;
    char s[16];
    char a[] = "abcdefghijklmno";
    char b[] = " ";
    char c[] = "";
    char d[] = "\0\0";
    assert(strncpy(s, a, x) == ft_strncpy(s, a, x));
    assert(strncpy(s, b, x) == ft_strncpy(s, b, x));
    assert(strncpy(s, c, x) == ft_strncpy(s, c, x));
    assert(strncpy(s, d, x) == ft_strncpy(s, d, x));
    assert(strncpy(s, a, y) == ft_strncpy(s, a, y));
    assert(strncpy(s, b, y) == ft_strncpy(s, b, y));
    assert(strncpy(s, c, y) == ft_strncpy(s, c, y));
    assert(strncpy(s, d, y) == ft_strncpy(s, d, y));
    assert(strncpy(s, a, z) == ft_strncpy(s, a, z));
    assert(strncpy(s, b, z) == ft_strncpy(s, b, z));
    assert(strncpy(s, c, z) == ft_strncpy(s, c, z));
    assert(strncpy(s, d, z) == ft_strncpy(s, d, z));
    printf(" Succeed ! pas sûr (check juste le pointer ou str entiere ?\n");
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
    printf("    strcmp: ");
    const char a[] = "abcdefghijklmn9820341§/APP£µù!*ez:";
    const char b[] = "abcdefghijklmn9820341§/APP£µù!*ez:";
    const char c[] = "";
    assert(strcmp(a, b) == ft_strcmp(a, b));
    assert(strcmp(a, c) > 0 && ft_strcmp(a, c) > 0);
    assert(strcmp(c, b) < 0 && ft_strcmp(c, b) < 0);
    printf(" Succeed !\n");
}
void test_strncmp(void)
{
    printf("    strncmp: ");
    printf(" a faire\n");
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
    test_char_function();
    test_str_function();
    return (0);
}
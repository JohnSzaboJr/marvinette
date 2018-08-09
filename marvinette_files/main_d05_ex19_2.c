#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char str[20] = "\0\0\0\0\0\0\0\0\0\0\0\0\0";
    char str2[20] = "\0\0\0\0\0\0\0\0\0\0\0\0\0";
    unsigned int a;
    unsigned int b;

    a = ft_strlcpy(str, " world", 3);
    b = strlcpy(str2, " world", 3);
    if (a == b)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
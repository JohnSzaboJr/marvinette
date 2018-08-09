#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char str[20] = "hello\0\0\0\0\0\0\0\0\0\0\0\0\0";
    char str2[20] = "hello\0\0\0\0\0\0\0\0\0\0\0\0\0";

    ft_strlcat(str, " world", 9);
    strlcat(str2, " world", 9);
    if (!strcmp(str, str2))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
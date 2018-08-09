#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strncat(char *dest, char *src, int nb);

int main(void)
{
    char str[20] = "hello\0\0\0\0\0\0\0\0\0\0\0\0\0";
    char str2[20] = "hello\0\0\0\0\0\0\0\0\0\0\0\0\0";

    if (!strcmp(ft_strncat(str, " world", 0), strncat(str2, " world", 0)))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
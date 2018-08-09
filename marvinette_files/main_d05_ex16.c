#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strcat(char *dest, char *src);

int main(void)
{
    char str[20] = "hello\0\0\0\0\0\0\0\0\0\0\0\0\0";
    char str2[20] = "hello\0\0\0\0\0\0\0\0\0\0\0\0\0";

    if (!strcmp(ft_strcat(str, " world"), strcat(str2, " world")))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
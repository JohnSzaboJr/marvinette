#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strlowcase(char *str);

int main(void)
{
    char str[52] = "abcggdefghijklmnopqrstuvwxyz1h23456!@@£@££@ ";
    char str2[52] = "ABCggDEFGHIJKLMNOPQRSTUVWXYZ1h23456!@@£@££@ ";

    if (!strcmp(str, ft_strlowcase(str2)))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
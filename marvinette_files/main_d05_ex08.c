#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strupcase(char *str);

int main(void)
{
    char str[52] = "abcGGdefghijklmnopqrstuvwxyz1H23456!@@£@££@ ";
    char str2[52] = "ABCGGDEFGHIJKLMNOPQRSTUVWXYZ1H23456!@@£@££@ ";

    if (!strcmp(str2, ft_strupcase(str)))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strcapitalize(char *str);

int main(void)
{
    char str[62] = "aBcg ++gdEf- -ghijkl mnopqrstu   vwxyz1h,a23 456!@@£@££@ ";
    char str2[62] = "Abcg ++Gdef- -Ghijkl Mnopqrstu   Vwxyz1h,A23 456!@@£@££@ ";

    if (!strcmp(str2, ft_strcapitalize(str)))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
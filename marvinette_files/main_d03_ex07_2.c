#include <stdio.h>
#include <string.h>
#include "colors.h"

char *ft_strrev(char *str);

int main(void)
{
    char str[20] = "404";
    if (!strcmp(ft_strrev(str), "404"))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
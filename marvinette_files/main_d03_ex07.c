#include <stdio.h>
#include <string.h>
#include "colors.h"

char *ft_strrev(char *str);

int main(void)
{
    char str[20] = "HellO there!0123%%\n";
    if (!strcmp(ft_strrev(str), "\n%%3210!ereht OlleH"))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
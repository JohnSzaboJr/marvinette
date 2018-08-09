#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

int ft_str_is_printable(char *str);

int main(void)
{
    int n;

    n = ft_str_is_printable("HELL\t\vObello");
    if (n == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

int    ft_str_is_numeric(char *str);

int main(void)
{
    int n;

    n = ft_str_is_numeric("876686");
    if (n == 1)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
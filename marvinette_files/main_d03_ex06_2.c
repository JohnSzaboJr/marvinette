#include <stdio.h>
#include "colors.h"

int ft_strlen(char *str);

int main(void)
{
    int a;

    a = ft_strlen("");
    if (a == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
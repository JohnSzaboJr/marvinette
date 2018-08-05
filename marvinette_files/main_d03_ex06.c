#include <stdio.h>
#include "colors.h"

int ft_strlen(char *str);

int main(void)
{
    int a;

    a = ft_strlen("hello there!0123%%\n");
    if (a == 19)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
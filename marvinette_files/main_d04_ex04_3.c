#include <stdio.h>
#include "colors.h"

int ft_fibonacci(int index);

int main(void)
{
    int n;

    n = ft_fibonacci(-3);
    if (n == -1)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
#include <stdio.h>
#include "colors.h"

int ft_recursive_power(int nb, int power);

int main(void)
{
    int n;

    n = ft_recursive_power(0, 0);
    if (n == 1)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}
#include <stdio.h>
#include "colors.h"

int ft_recursive_power(int nb, int power);

int main(void)
{
    int n;

    n = ft_recursive_power(2, -5);
    if (n == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}